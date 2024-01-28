#include <iostream>
#include <string>
#include <process.h>
using namespace  std;
void introduction(){
    cout << "Welcome to the guessing game!" << endl;
    cout << "Choose one option" << endl;
    cout << "1.Developer data" << endl;
    cout << "2.How to play the game" << endl;
    cout << "3.Start the game" << endl;
    cout << "4.Exit" << endl;
}
void DeveloperData(){
    int option;
    cout<<"Hello, I'm Filip, a student at Finki in Skopje. And I made the guessing game. Have fun!"<<endl;
    cout<<"Choose one option"<<endl;
    cout<<"1.Return"<<endl;
    cout<<"2.Exit"<<endl;
    cin>>option;
    switch (option) {
        case 1: break;
        case 2: exit(0);
    }
}
void HowToPlayTheGame(){
    int option;
    cout<<"The guessing game is about guessing the countries in Europe"<<endl;
    cout<<"There are 50 countries in Europe and you should guess the randomly selected country"<<endl;
    cout<<"You have 5 tries. You enter a letter if the word contains the letter your tries stay the same else your tries are decreased by 1"<<endl;
    cout<<"Choose one option"<<endl;
    cout<<"1.Return"<<endl;
    cout<<"2.Exit"<<endl;
    cin>>option;
    switch (option) {
        case 1: break;
        case 2: exit(0);
    }
}
 void StartTheGame(string unknown,string countries){
    int counter1=0;
    int counter2=0;
    char letter;
    do {
        cout<<unknown<<endl;
        if(counter2==unknown.length())
        {cout<<"YOU WIN!";
            exit(0);
        }
        bool proverka=false;
        cin>>letter;
        for(int i=0;i<countries.length();i++)
        {
            if(letter==countries[i])
            {
                unknown[i]=letter;
                proverka= true;
                counter2++;
            }

        }
        if(proverka==false)
            counter1++;

    }while(counter1<5);
cout<<"YOU LOSE!";
}
int main() {

    string countries[]{
        "albania","andorra","armenia","austria","azerbaijan","belarus","belgium","bosniaandherzegovina","bulgaria","croatia","cyprus",
        "czechrepublic","denmark","estonia","finland ","macedonia","france","georgia","germany","greece","hungary",
        "iceland","ireland","italy","kosovo","latvia","liechtenstein","lithuania","luxembourg","malta","moldova",
        "monaco","montenegro","netherlands","norway","poland","portugal","romania","russia","sanmarino","serbia",
        "slovakia","slovenia","spain","sweden","sweden","switzerland","turkey","ukraine","unitedkingdom"
    };
    srand(time(NULL));
    int number=rand()%49;
    int length=countries[number].length();
    string unknown(countries[number].length(),'*');

    int option;
    do {
        introduction();
        cin>>option;
        switch (option) {
            case 1: DeveloperData();  break;
            case 2: HowToPlayTheGame(); break;
            case 3: StartTheGame(unknown,countries[number]); break;
            case 4: return 0;
        }
    } while (option!=4);
}
