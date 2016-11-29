#include "MultiInclude.h"

int Data::GetCurrentHp()
{
	int data = MS.Hack.Variable.CurrentHp;

	data = (data < std::numeric_limits<unsigned int>::min() ? 0 : data);

	return data;
}

int Data::GetCurrentMp()
{
	int data = MS.Hack.Variable.CurrentMp;
	
	data = (data < std::numeric_limits<unsigned int>::min() ? 0 : data);

	return data;
}

int Data::GetCurrentExp()
{
	int data = MS.Hack.Variable.CurrentExp;
	
	data = (data < std::numeric_limits<unsigned int>::min() ? 0 : data);

	return data;
}

int Data::GetMaximumHp()
{
	int data = MS.Hack.Variable.MaximumHp;
	
	data = (data < std::numeric_limits<unsigned int>::min() ? 0 : data);

	return data;
}

int Data::GetMaximumMp()
{
	int data = MS.Hack.Variable.MaximumMp;
	
	data = (data < std::numeric_limits<unsigned int>::min() ? 0 : data);

	return data;
}

int Data::GetMaximumExp()
{
	int data = MS.Hack.Variable.MaximumExp;
	
	data = (data < std::numeric_limits<unsigned int>::min() ? 0 : data);

	return data;
}

POINT Data::GetCharacterPosition()
{
	int x = Assembly::ReadPointer(Address::Data::Character::Base, Address::Data::Character::X);
	int y = Assembly::ReadPointer(Address::Data::Character::Base, Address::Data::Character::Y);

	POINT data;

	data.x = (x > std::numeric_limits<short>::max() || x < std::numeric_limits<short>::min() ? 0 : x);
	data.y = (y > std::numeric_limits<short>::max() || y < std::numeric_limits<short>::min() ? 0 : y);

	return data;
}

POINT Data::GetItemPosition()
{
	POINT data;

	data.x = MS.Hack.Variable.ItemPosition.x;
	data.y = MS.Hack.Variable.ItemPosition.y;

	return data;
}

bool Data::GetMobPosition(POINT &p)
{
	static bool valid;
	unsigned long mob = Assembly::ReadPointer(Address::Data::Mob::Base, Address::Data::Mob::Struct1);

	if (valid)
	{
		mob = Assembly::GetValue(mob, Address::Data::Mob::Struct2);
	}
	else
	{
		mob = Assembly::GetValue(mob, -12);
		mob = Assembly::GetValue(mob, 20);
	}

	if (Assembly::GetValue(mob, Address::Data::Mob::Death) <= 0)
	{
		valid ^= true;

		return false;
	}

	mob = Assembly::GetValue(mob, Address::Data::Mob::Struct3);
	mob = Assembly::GetValue(mob, Address::Data::Mob::Struct4);

	p.x = Assembly::GetValue(mob, Address::Data::Mob::X);
	p.y = Assembly::GetValue(mob, Address::Data::Mob::Y);

	return true;
}

int Data::GetAttackCount()
{
	int data = Assembly::ReadPointer(Address::Data::Character::Base, Address::Data::Character::AttackCount);
	
	data = (data < std::numeric_limits<unsigned short>::min() ? 0 : data);

	return data;
}

int Data::GetMobCount()
{
	int data = Assembly::ReadPointer(Address::Data::Mob::Base, Address::Data::Mob::Count);
	
	data = (data < std::numeric_limits<unsigned short>::min() ? 0 : data);

	return data;
}

int Data::GetItemCount()
{
	int data = Assembly::ReadPointer(Address::Data::Item::Base, Address::Data::Item::Count);
	
	data = (data < std::numeric_limits<unsigned short>::min() ? 0 : data);

	return data;
}

int Data::GetChannel()
{
	int data = Assembly::ReadPointer(Address::Data::Server::Base, Address::Data::Server::Channel);

	data++;
	
	data = (data < std::numeric_limits<unsigned short>::min() ? 0 : data);

	return data;
}

int Data::GetMapId()
{
	int data = Assembly::ReadPointer(Address::Data::Map::Base, Address::Data::Map::Id);
	
	data = (data < std::numeric_limits<unsigned int>::min() ? 0 : data);

	return data;
}

int Data::GetPeopleCount()
{
	int data = Assembly::ReadPointer(Address::Data::People::Base, Address::Data::People::Count);
	
	data = (data < std::numeric_limits<unsigned short>::min() ? 0 : data);

	return data;
}

int Data::GetWorldIndex()
{
	int data = Assembly::ReadPointer(Address::Data::Server::Base, Address::Data::Server::WorldIndex);
	
	data = (data < std::numeric_limits<unsigned short>::min() ? 0 : data);

	return data;
}

char *Data::GetWorldName(const int index)
{
	char *list[] = {"Kaede", "Momiji", "Anzu", "Karin", "Sakura", "Sumomo", "Popura", "Azusa", "None", "Natsume", "None", "None", "Mizuki", "Tsutsuji", "Ibara"};

	return list[index];
}

bool Data::IsLoggingIn()
{
	return (MS.Data.GetMapId() > 0 ? true : false);
}

bool Data::IsMuLungDojoCleared()
{
	bool data = Assembly::ReadPointer(Address::Data::Server::Base, Address::Data::Server::IsMuLungDojoCleared);

	return data;
}

void Data::SetAttackCount(const int count)
{
	Assembly::WritePointer(Address::Data::Character::Base, Address::Data::Character::AttackCount, count);
}

void Data::Teleport(const int x, const int y)
{
	void (__fastcall *_TSecType_long_SetData)(void *ecx, void *edx, int data);
	*(unsigned long*)&_TSecType_long_SetData = Address::MapleStory::TSecType_long_::SetData;

	unsigned char *base = (unsigned char *)(*(void **)Address::Data::Character::Base);

	_TSecType_long_SetData((base + Address::Data::Character::TeleportX), NULL, x);
	_TSecType_long_SetData((base + Address::Data::Character::TeleportY), NULL, y);
	_TSecType_long_SetData((base + Address::Data::Character::Teleporting), NULL, 1);
}