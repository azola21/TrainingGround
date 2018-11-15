class Conversations
{
	class exit
	{
		exit = 1;
		expression = "nul = [IP_Taipan, 'Yea, whatever.', 'DIRECT', 3] spawn IP_fnc_simpleSentence;";
		sentences[] = {"Cya."};
	};
	class opener
	{
		arguments[] = {"(name player)"};
		responses[] = {"where", "buddy", "mercs", "maxwell", "stratis", "exit"};
		sentences[] = {
			"Hey, can I ask you something?",
			"Feel free, %1. What would you like to know?"
		};
	};
	class back
	{
		responses[] = {"where", "buddy", "mercs", "maxwell", "exit"};
		sentences[] = {
			"I'd like to know something else.",
			"Yes?"
		};
	};
	class where
	{
		responses[] = {"where1", "where2", "back", "exit"};
		sentences[] = {
			"Where are we?",
			"We are in Hebontes, Greece. An international training ground used by many countries around the world for combined arms training."
		};
	};
	class where1
	{
		responses[] = {"where2", "back", "exit"};
		sentences[] = {
			"Why are we here?",
			"Taipan Security has paid to utilise the island for training and as a staging area for contracts.",
			"What are we able to do here?",
			"There is multiple areas that can be utilised, most are marked on your map.",
			"No worries, cheers."
		};
	};
	class where2
	{
		responses[] = {"where2", "back", "exit"};
		sentences[] = {
			"How can I get around?",
			"You can use any of the vehicles parked outside.",
			"OK"
		};
	};
	class buddy
	{
		responses[] = {"back", "exit"};
		sentences[] = {
			"Tell me something about yourself.",
			"Nah yea, yea nah."
		};
	};
	class mercs
	{
		responses[] = {"clients", "work", "back", "exit"};
		sentences[] = {
			"What is Taipan Security?",
			"Taipan security is a Private Military Company currently operating globally."
		};
	};
	class clients
	{
		responses[] = {"suchas", "work", "back", "exit"};
		sentences[] = {
			"Who are our clients?",
			"Anybody. Mostly corporate organisations or governments. Sometimes military, sometimes private, sometimes we don't know. If you have money, we're your best friends.",
			"Anybody?",
			"If they pay enough we will help them but if sketchy shit goes down that might get us in hotwater we will ditch it."
		};
	};
	class suchas
	{
		responses[] = {"work", "back", "exit"};
		sentences[] = {
			"Sketchy shit such as?",
			"Killing civilians, killing coalition forces etcetera."
		};
	};
	class work
	{
		responses[] = {"clients", "back", "exit"};
		sentences[] = {
			"What sort of contracts do we undertake?",
			"Our contracts can range anywhere from close protection, covert operations to good old firefights and killing bad guys."
		};
	};
	class maxwell
	{
		responses[] = {"back", "exit"};
		sentences[] = {
			"I want to know more about this place here. Hebontes, right?",
			"Yes, Hebontes. It was commissioned a while ago and is used by people like the United States, Australia, Greece and other NATO partners."
		};
	};
	class stratis
	{
		responses[] = {"back", "exit"};
		sentences[] = {
			"What do you know about this island?",
			"It's called 'Hebontes' and it currently belongs to the Republic of Altis. Altis is a colony of Greece."
		};
	};
};