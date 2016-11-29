#pragma once

#include "MainForm.h"

class Item
{
public:
	struct _Variable
	{
		struct _Flag
		{
			bool EnableItemFilter, Whitelist, DropMesoOnly;
		} Flag;

		QList<int> ItemList;
	} Variable;

public:
	void UpdateItemList(const QTreeWidget *tree);

	int HandleItemFilter(const int id);
};