#include <iostream>
using namespace std;

class Character {
    
    public:
    string name;
    int role;
    
    void setName(string aName){
        name = aName;
    }
    void zedSkills(){
    cout << "=========================================" << endl;
    cout << "|       Zed: The Master of Shadows      |" << endl;
    cout << "=========================================" << endl;
    cout << "Passive: Contempt for the Weak" << endl;
    cout << "Ability 1: Razor Shuriken" << endl;
    cout << "Ability 2: Living Shadow" << endl;
    cout << "Ability 3: Shadow Slash" << endl;
    cout << "Ability 4: Death Mark" << endl;
    }
    void masteryiSkills(){
        cout << "=========================================" << endl;
        cout << "|     Master Yi: The Wuju Bladesman     |" << endl;
        cout << "=========================================" << endl;
        cout << "Passive: Double Strike" << endl;
        cout << "Ability 1: Alpha Strike" << endl;
        cout << "Ability 2: Meditate" << endl;
        cout << "Ability 3: Wuju Style" << endl;
        cout << "Ability 4: Highlander" << endl;
    }
};


int main(){
    /*Character character1;
    character1.setName("Zed");
    character1.zedSkills();

    Character character2;
    character2.setName("Master Yi");
    character2.masteryiSkills()*/

return 0;
}