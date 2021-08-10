#include <iostream>
using namespace std;
int main()
{
	int gift;
	cout<<"POPS SIMPLE LOTTO GAME"<<endl<<endl;
	cout<<"Choose a number between 1 and 20 to win a gift: ";
	//after running the code try guessing numbers between 1 and 20 to see what you can win
	cin >>gift;
	cout<<endl;
	
	switch(gift)
	{
		
		case 2:
			cout <<"IPHONE"<<endl;
			cout <<"congratulations Dear"<<endl;
			break;
        case 5:
			cout <<"V8"<<endl;
			cout <<"congratulations Dear"<<endl;
			break;
	    case 8:
			cout <<"CHAIR"<<endl;
			cout <<"congratulations Dear"<<endl;
			break;
	    case 9:
			cout <<"PENCIL"<<endl;
			cout <<"congratulations Dear"<<endl;
			break;
	     case 11:
			cout <<"PRO GAS"<<endl;
			cout <<"congratulations Dear"<<endl;
			break;
	     case 14:
			cout <<"AEROPLANE"<<endl;
			cout <<"congratulations Dear"<<endl;
			break;
	     case 15:
			cout <<"HOOD"<<endl;
			cout <<"congratulations Dear"<<endl;
			break;
	     case 17:
			cout <<"MAKE-UP KIT"<<endl;
			cout <<"congratulations Dear"<<endl;
			break;
	     case 19:
			cout <<"TV & WOOFER"<<endl;
			cout <<"congratulations Dear"<<endl;
			break;		
	     default:
			
			cout <<"No gift today day, Try Again Next time"<<endl;
			break;								
	}
	return 0;
}