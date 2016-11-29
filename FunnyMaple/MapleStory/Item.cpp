#include "MultiInclude.h"

void __declspec(naked) ItemFilter_Hook()
{
	static const unsigned long rtn = (Address::Item::Filter + 5);
	static int id;
	
	__asm
	{
		test eax,eax
		je Invalid
		pushad
		push eax
		call Item::HandleItemFilter
		mov [id],eax
		popad
		mov eax,[id]
Normal:
		mov ecx,edi
		mov [esi+0x38],eax
		jmp [rtn]
Invalid:
		jmp [Address::Item::Filter_End]
	}
}

void Item::UpdateItemList(const QTreeWidget *tree)
{
	Variable.ItemList.clear();

	if (tree->topLevelItemCount() == 0)
	{
		return;
	}

	for (int i = 0; i < tree->topLevelItemCount(); i++)
	{
		Variable.ItemList.append(tree->topLevelItem(i)->text(0).toInt());
	}
}

int Item::HandleItemFilter(const int id)
{
	if (MS.Item.Variable.Flag.EnableItemFilter)
	{
		if (id > 50000)
		{
			if (MS.Item.Variable.Flag.RecordRecentDrop)
			{
				MainFormClass->AddToRecentDropList(id);
			}

			if (MS.Item.Variable.Flag.DropMesoOnly)
			{
				return 0;
			}

			if (MS.Item.Variable.ItemList.indexOf(id, 0) != -1)
			{
				return (MS.Item.Variable.Flag.Whitelist ? id : 0);
			}
			
			return (MS.Item.Variable.Flag.Whitelist ? 0 : id);
		}
	}

	return id;
}

void Item::Initialize()
{
	Assembly::WriteJump(Address::Item::Filter, ItemFilter_Hook, 0);
}