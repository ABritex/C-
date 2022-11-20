#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int month[] = { 31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31 };
    int age, DATE,MONTH,YEAR;
    //===This is just your base givin birth date===
    int Date = 25;
	int Month = 8;
	int Year = 2003;
    //=============================================
    string choice;
    //User will input the Current Date
    cout<<"A-no, ima wa Nan'nichidesu ka: ";
    cin>>DATE>>MONTH>>YEAR;
    cout<<"Uh, Nan-Sai desu ka? : ";
    cin>>age;
    //=================Calculate===================
	if (Date > DATE) {
		DATE = DATE + month[Month - 1];
		MONTH = MONTH - 1;
	}
	if (Month > MONTH) {
		YEAR = YEAR - 1;
		MONTH = MONTH + 12;
	}
	int CalDate = DATE - Date;
	int CalMonth = MONTH - Month;
	int CalYear = YEAR - Year;
    age = age / 4;
    //=============================================
    cout<<"Maho wa Mitai desu ka?\n(Hai/Iie) : ";
    cin>>choice;
    if(choice == "Hai" || choice == "hai"){
        printf("\nSapuraizu  \nWatashi wa anata ga umareta koto o shitte imasu:\n     %d-Nen-me!\n     %d-kagetsu-me!\n     %d-nichi-me!\n",CalYear,CalMonth,CalDate);
        cout<<"\nMoichido Maho wa Mitai desu ka?\n(Hai/iIe) : ";
        cin>>choice;
        if(choice == "Hai" || choice == "hai"){
            printf("\nSapuraizu\nShittemasu ka?!\n      2 Tsuki 29-nichi umare no baai\n      -Anata wa jissai ni wa wazuka %d-saidattadeshou!\n      Soshite, anata ga sono nenrei-mimandatta baai\n      -Anata wa chōdo seigo %d-kagetsu to %d-nichidesu",age,CalMonth,CalDate);
        }else if(choice == "Iie" || choice == "iie"){
            cout<<"\ndoushite? nande? anatawa watashiga kirai.";
        }else{
            cout<<"\nError";
        }
    }else if(choice == "Iie" || choice == "iie"){
        cout<<"\ndoushite? nande? anatawa watashiga kirai.";
    }else{
        cout<<"\nError";
    }
	return 0;
}
