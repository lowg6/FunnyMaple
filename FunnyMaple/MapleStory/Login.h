#pragma once

class Login
{
public:
	struct _Variable
	{
		QString Username, Password, SecondaryPassword;
		int World, Channel, Character;
	} Variable;

public:
	bool ReadLoginInfomationFromSharedMemory();

	void SelectWorldChannelThread();

	void HandleOutEnterUsernamePassword();
	void HandleOutEnterSecondaryPassword();
	void HandleOutSelectWorldChannel();
	void HandleOutSelectCharacter();

	void Initialize();
};