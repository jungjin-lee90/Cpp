#include <iostream>
#include "Character.h"
#include "Knight.h"
#include "Archer.h"
#include "Wizard.h"
#include <vector>
#include <queue>
#include <list>
#include <map>

enum KeyInput
{
    KNIGHT = 1,
    ARCHER,
    WIZARD
};

void containerTest()
{
    vector<int> vc = {10, 20, 30};
    vc.push_back(40);

    int nSum = 0;
    for (auto i : vc)
    {
        nSum += i;
    }
    cout << nSum << endl;

    deque<int> dq = {10, 20, 30};
    dq.push_front(0);
    dq.push_back(40);

    for (auto i : dq)
        cout << i << " ";

    cout << endl;

    list<int> ls = {1,2,2,3,4,3,5,5};
    ls.unique();
    for (auto i : ls)
    {
        cout << i << endl;
    }

    ls.sort();
    for (auto i : ls)
    {
        cout << i << endl;
    }

    map<string, int> mp;
    mp.insert(pair<string, int>("dd", 99));
    mp["ff"] = 100; // 이거랑 insert랑 같다.

    map<string, int>::iterator iter;
    for (iter = mp.begin(); iter != mp.end(); iter++)
    {
        cout << iter->first << " : " << iter->second << endl;
    }
}

int main()
{
    containerTest();
    Character CharA, CharB; // 정적
    CharA.jump();

    Character* ptrChar = &CharA; // 참조
    ptrChar->jump();
    
    int input;
    vector<Character*> vChar;
    Character* ptrChar2;
    bool bBreak = false;
    while (!bBreak)
    {
        cin >> input;

        ptrChar2 = nullptr;
        switch (input)
        {
        case KNIGHT:
            ptrChar2 = new Knight; // 동적
            break;
        case ARCHER:
            ptrChar2 = new Archer;
            break;
        case WIZARD:
            ptrChar2 = new Wizard;
            break;

        default:
            bBreak = true;
            break;
        }
        
        if (ptrChar2 != nullptr)
            vChar.push_back(ptrChar2);
    }

    for (auto &i : vChar)
    {
        i->Attack();
        delete i;
    }
    vChar.clear();         
}

