#include <iostream>
#include <cmath>
using namespace std;

int rep = 0;
string bench;

int main()
{
	int choice_one;	
	cout << "You exit the sauna after a long session of German Volume Training on International Chest Day (Monday). Lousie Mensch \nstands before you with pale hands on hips, bloqqing the exit. 'Well, buddy, we meet at last. I have 15 armed \nInterpol agents outside. Putler won't help you now. I will however let you go - IF you come back to the gym with me and perform 15 bench press reps. Just in your towel, no other clothes. I am a woman of simple needs. After that, you may do as you like.' You notice that the sauna is men-only. Wyd?\n1) Close the sauna door and lock it.\n2) Bow to her demands and go to the gym.\n3) Overpower her and make a break for it.\n";
	cin >> choice_one;
	
	switch (choice_one)
	{
		case 1: cout << "You lock the door and hope she goes away. She doesn't and you slowly faint. It wasn't supposed to be like this...\n";
		break;
		
		case 2: cout << "You accompany her back to the gym. It is empty and she opens the door with her keys. You go to the bench and load up \nlmao1pl8. She smirks and demands you lie down. She sits on a neighboring bench and watches as you do a quick form check and place your hands on the bar. You unrack and begin. \nPress B to complete a rep.\n";
		
		
		while (rep<15)
		{
			cin >> bench;
			if (bench == "B")
			{
				rep +=1;
				cout << "'C'MON PUSSY GIVE ME ONE MORE' she shouts, slapping the bench.\n";
			}
			else
			{
				cout << "'WHAT THE PHUK WAS THAT?' she roars, hands upraised. You try that rep again.\n";
			}
		}
		cout << "'Thanks handsome, that made my day. You're free to go' she says as she gets up to leave, a smile on her face. You return to the locker room and get your stuff. After a quick drink of glycine coffee and goat's milk, there is plenty time to \nshitpoast on twatter dot com.\n";
		
		break;
		
		case 3: cout << "You shove her on the ground and make a run for it. As you burst out the gym doors, you are swatted by a herd of sleave-\ntattooed Martin Sheen lesbocommissars. Beating them back with your fists, you discard your towel in their faces and run to the nearby tram station, where you notice your friend Alex the Train Master. He gives you a map of the local subway \nsystem with the hidden train menu known only to the few elite train users. He wishes you the best of luck. You disembark a few stops on and run off into the fading daylight, naked with nothing but esoteric transit wisdom to save you from \nZOG.\n";
		break;
		
		default:
		cout << "Wrong choice bucko, try again.";
	}
	
	
	return 0;
}