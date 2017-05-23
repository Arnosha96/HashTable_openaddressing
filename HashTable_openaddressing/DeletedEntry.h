#pragma once
#include "HashEntry.h"

#define NULL 0

class DeletedEntry : public HashEntry {
private:
	static DeletedEntry *entry;
	DeletedEntry() :
		HashEntry(-1, -1) {
	}
public:
	static DeletedEntry *getUniqueDeletedEntry() {
		if (entry == NULL)
			entry = new DeletedEntry();
		return entry;
	}
};

DeletedEntry *DeletedEntry::entry = NULL;