#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <ctime>

/*This is the Super Mega Awesome Character Kreator (SMACK)
  It creates randomly designed background characters as easy as 1. */

  using namespace std;

string namemaker() {
    string TempStringInput = "";
    int NumberOfNameParts = 0;
    ifstream FileScanForSize ("Words.txt");
    //character portion
    if (FileScanForSize.is_open()) { //This IF branch reads the file to determine how many possible name parts there are
        while (getline(FileScanForSize,TempStringInput)) {
            NumberOfNameParts ++;
        }
    }
    FileScanForSize.close();
    ifstream FileScanForInput ("Words.txt");
    string * Name_Part_Array;
    Name_Part_Array = new string [NumberOfNameParts + 1];
    for (int i = 0; i <= NumberOfNameParts; i++) { //this FOR branch runs through the file and places each word part into a slot in the Name_Part_Array array
            getline (FileScanForInput, Name_Part_Array[i]);
    }
    FileScanForInput.close();
    int WhichPartToPick = 0;
    int NumberOfPartsForName = 0;
    int NumberOfNamesToMake = 200;
    string * Array_Of_Names;
    Array_Of_Names = new string [NumberOfNamesToMake+1];
    int NameProgress = -1;
    for (int i = 0; i <= NumberOfNamesToMake; i++) {
            NumberOfPartsForName = ((rand() % 3)+2); //determines how many parts are in a name
            NameProgress++;
            for (int i = 0; i <= NumberOfPartsForName; i++) {
                    WhichPartToPick = ((rand() % NumberOfNameParts)); //determines which name part to pick from the array
                    Array_Of_Names[NameProgress] += Name_Part_Array[WhichPartToPick];
            }
    }
    return Array_Of_Names[NameProgress];
}


string eyemaker() {
    srand((unsigned)time(0));
    string TempStringInput = "";
    int NumberOfPossibleEyeColors = 0;
    ifstream FileScanForSize ("EyeColors.txt");
    if (FileScanForSize.is_open()) { //This IF branch reads the file to determine how many possible flaws there are
        while (getline(FileScanForSize,TempStringInput)) {
            NumberOfPossibleEyeColors ++;
        }
    }
    FileScanForSize.close();
    ifstream FileScanForInput ("EyeColors.txt");
    string * Eye_Color_Array;
    Eye_Color_Array = new string [NumberOfPossibleEyeColors + 1];
    for (int i = 0; i <= NumberOfPossibleEyeColors; i++) { //this FOR branch runs through the file and places each flaw into a slot in the Eye_Color_Array array
            getline (FileScanForInput, Eye_Color_Array[i]);
    }
    int WhichEyeColorToPick = 0;
    WhichEyeColorToPick = ((rand() % NumberOfPossibleEyeColors)); //determines which flaw to pick from the array
    return Eye_Color_Array[WhichEyeColorToPick];
}


string hairmaker() {
    srand((unsigned)time(0));
    string TempStringInput = "";
    int NumberOfColors = 0;
    ifstream FileScanForSize ("HairColors.txt");
    if (FileScanForSize.is_open()) { //This IF branch reads the file to determine how many possible flaws there are
        while (getline(FileScanForSize,TempStringInput)) {
            NumberOfColors ++;
        }
    }
    FileScanForSize.close();
    ifstream FileScanForInput ("HairColors.txt");
    string * Color_Array;
    Color_Array = new string [NumberOfColors + 1];
    for (int i = 0; i <= NumberOfColors; i++) { //this FOR branch runs through the file and places each flaw into a slot in the Color_Array array
            getline (FileScanForInput, Color_Array[i]);
    }
    int WhichColorToPick = 0;
    WhichColorToPick = ((rand() % NumberOfColors)); //determines which flaw to pick from the array
    return Color_Array[WhichColorToPick];
}


string* pastmaker() {
    srand((unsigned)time(0));
    string TempStringInput = "";
    int NumberOfPastEvents = 0;
    ifstream FileScanForSize ("PastEvents.txt");
    if (FileScanForSize.is_open()) { //This IF branch reads the file to determine how many possible flaws there are
        while (getline(FileScanForSize,TempStringInput)) {
            NumberOfPastEvents ++;
        }
    }
    FileScanForSize.close();
    ifstream FileScanForInput ("PastEvents.txt");
    string * Past_Array;
    Past_Array = new string [NumberOfPastEvents + 1];
    for (int i = 0; i <= NumberOfPastEvents; i++) { //this FOR branch runs through the file and places each flaw into a slot in the Past_Array array
            getline (FileScanForInput, Past_Array[i]);
    }
    FileScanForInput.close();
    int WhichPastToPick = 0;
    string * Array_of_Past_Events;
    Array_of_Past_Events = new string [2];
    int PastEventProgress = -1;
    for (int i = 0; i <= 1; i++) {
            PastEventProgress++;
            WhichPastToPick = ((rand() % NumberOfPastEvents)); //determines which flaw to pick from the array
            Array_of_Past_Events[PastEventProgress] += Past_Array[WhichPastToPick];
    }
return Array_of_Past_Events;
}


string* flawmaker() {
    srand((unsigned)time(0));
    string TempStringInput = "";
    int NumberOfPossibleFlaws = 0;
    ifstream FileScanForSize ("Flaws.txt");
    if (FileScanForSize.is_open()) { //This IF branch reads the file to determine how many possible flaws there are
        while (getline(FileScanForSize,TempStringInput)) {
            NumberOfPossibleFlaws ++;
        }
    }
    FileScanForSize.close();
    ifstream FileScanForInput ("Flaws.txt");
    string * Flaw_Array;
    Flaw_Array = new string [NumberOfPossibleFlaws + 1];
    for (int i = 0; i <= NumberOfPossibleFlaws; i++) { //this FOR branch runs through the file and places each flaw into a slot in the Flaw_Array array
            getline (FileScanForInput, Flaw_Array[i]);
    }
    FileScanForInput.close();
    int WhichFlawToPick = 0;
    string * Array_of_Flaws;
    Array_of_Flaws = new string [3];
    int FlawProgress = -1;
    for (int i = 0; i <= 2; i++) {
            FlawProgress++;
            WhichFlawToPick = ((rand() % NumberOfPossibleFlaws)); //determines which flaw to pick from the array
            Array_of_Flaws[FlawProgress] += Flaw_Array[WhichFlawToPick];
    }
    return Array_of_Flaws;
}


string* perkmaker() {
    srand((unsigned)time(0));
    string TempStringInput = "";
    int NumberOfPossiblePerks = 0;
    ifstream FileScanForSize ("Perks.txt");
    if (FileScanForSize.is_open()) { //This IF branch reads the file to determine how many possible Perks there are
        while (getline(FileScanForSize,TempStringInput)) {
            NumberOfPossiblePerks ++;
        }
    }
    FileScanForSize.close();
    ifstream FileScanForInput ("Perks.txt");
    string * Perk_Array;
    Perk_Array = new string [NumberOfPossiblePerks + 1];
    for (int i = 0; i <= NumberOfPossiblePerks; i++) { //this FOR branch runs through the file and places each Perk into a slot in the Perk_Array array
            getline (FileScanForInput, Perk_Array[i]);
    }
    FileScanForInput.close();
    int WhichPerkToPick = 0;
    string * Array_of_Perks;
    Array_of_Perks = new string [3];
    int PerkProgress = -1;
    for (int i = 0; i <= 2; i++) {
            PerkProgress++;
            WhichPerkToPick = ((rand() % NumberOfPossiblePerks)); //determines which Perk to pick from the array
            Array_of_Perks[PerkProgress] += Perk_Array[WhichPerkToPick];
    }
    return Array_of_Perks;
}


main() {
    srand((unsigned)time(0));
    string NameFirst = namemaker();
    string NameLast = namemaker();
    NameFirst[0] = toupper(NameFirst[0]);
    NameLast[0] = toupper(NameLast[0]);
    string CharName = (NameFirst + " " +NameLast);
    string EyeColor = eyemaker();
    string HairColor = hairmaker();
    string* Past = pastmaker();
    string* Flaws = flawmaker();
    string* Perks = perkmaker();
    cout << "Say hello to:" << endl;
    cout << CharName << endl;
    cout << endl;
    cout << CharName << " is a pretty cool person." <<endl;
    cout << "They have " << HairColor << " colored hair with " << EyeColor << " colored eyes." <<endl;
    cout << "A long time ago, they " << Past[0] << "." << endl;
    cout << "Recently, they " << Past[1] << "." << endl;
    cout << CharName << " is cool, they are " << Perks[0] << ", " << Perks[1] << ", and " << Perks[2] << "." << endl;
    cout << CharName << " isn't perfect though, as they are " << Flaws[0] << ", " << Flaws[1] << ", and " << Flaws[2] << "." << endl;
    int ender;
    cout << "\nEnter any input to close program." << endl;
    cin >> ender;
}
