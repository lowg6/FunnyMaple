#include "MultiInclude.h"

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