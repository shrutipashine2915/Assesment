/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Human{
    public:
    int HP=50;
    string behaviour;
    
};

class Hero:public Human{
    public:
    int LightAttack;
    bool HighIQ;
    
  
    Hero(bool HI){
        HI=HighIQ;
        LightAttack=10;
        behaviour="Good";
    }
};

class Monster:public Human{
    public:
    int DarkAttack;
    bool BigBody;
    
    Monster(bool BB){
        BB=BigBody;
        DarkAttack=10;
        behaviour="Bad";
    }
};

int main(){
    Hero obj(false);
    
    Monster obj1(true);

    
    if(obj.HighIQ){
        obj.LightAttack+=5;
    }
   
    
    if(obj1.BigBody){
        obj1.HP+=5;
    }
    
    
    if(obj.LightAttack<obj1.HP){
        cout<<"Monster Wins";
    }
    else{
        cout<<"Hero Wins";
    }
    return 0;
}

