#pragma once

#pragma warning(disable:4733)

#define NOMINMAX

#include <QtGui>

#include <Windows.h>
#include <Psapi.h>
#include <winternl.h>
#include <detours.h>
#include <random>

#pragma comment(lib, "Psapi")
#pragma comment(lib, "detours")

#include <boost\thread.hpp>

#include "Functor.h"
#include "VirtualKey.h"

#include "MapleStory\MapleStory.h"