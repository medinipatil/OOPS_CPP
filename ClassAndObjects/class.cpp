#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    Hero(){
        cout<<"Default Constructor called"<<endl;
        name=new char[100];
    }
    Hero(int health){
        cout<<"this ->"<<this<<endl;
       this->health=health;
    }
    Hero(int health,char level){
        this->health=health;
        this->level=level;
    }

    // COPY CONSTRUCTOR
    Hero(Hero &temp){
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name=ch;
        cout<<"Copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }

    void print(){
        cout<<endl;
        cout<<"Name :"<<this->name<<" ,";
        cout<<"Health: "<<this->health<<" ,";
        cout<<"level :"<<this->level<<" ,";
        cout<<endl;
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }
    void setLevel(char l){
        level=l;
    }
    void setName(char name[]){
        strcpy(this->name,name);
    }
    static int random(){
        return timeToComplete;
    }

    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
};

int Hero::timeToComplete=5;
int main(){
    // cout<<Hero::timeToComplete<<endl;
    cout<<Hero::random()<<endl;

    // Hero a;
    // cout<< a.timeToComplete<<endl;

    // Hero b;
    // b.timeToComplete=10;
    // cout<<a.timeToComplete<<endl;
    // cout<<b.timeToComplete<<endl;
    // //static
    // Hero a;
    // //Dynamic
    // Hero *b=new Hero();
    // ///manually destructor called
    // delete b;

    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('D');
    // char name[10] = "Medini";
    // hero1.setName(name);
    // // hero1.print();



    // //USE DEFAULT COPY Constructor
    // // Hero hero2(hero1);
    
    // Hero hero2=hero1;
    // // hero2.print();

    // hero1.name[0]='G';
    // // hero1.print();
    // // hero2.print();

    // hero1=hero2;
    // hero1.print();
    // hero2.print();




    // Hero suresh(70,'C');
    // suresh.print();


    // //COPY CONSTRUCTOR

    // Hero ritesh(suresh);
    // ritesh.print();
    // // ritesh.health=suresh.health;
    // // ritesh.level=suresh.level;
    

   



    // Hero ramesh(10);
    // // cout<<"Adress of Ramesh"<<&ramesh<<endl;
    // // ramesh.getHealth();
    // ramesh.print();
    // Hero *h=new Hero();
    // h->print();

    // Hero temp(22,'B');

    // //Static allocation
    // Hero a;
    // a.setHealth(80);
    // a.setLevel('B');
    // cout<<"Level is"<<a.level<<endl;
    // cout<<"Health is"<<a.getHealth()<<endl;

    // //Dynamically allocation
    // Hero *b = new Hero;
    // b->setHealth(70);
    // b->setLevel('A');
    // cout<<"Level is"<<(*b).level<<endl;
    // cout<<"Health is"<<(*b).getHealth()<<endl;

    // cout<<"Level is"<<(*b).level<<endl;
    // cout<<"Health is"<<(*b).getHealth()<<endl;

    // cout<<"Level is "<<b->level <<endl;


    // Hero ramesh;

    // cout<<"Ramesh health is"<<ramesh.getHealth()<<endl;

    // ramesh.setHealth(70);
    // ramesh.level='A';

    // cout<<"Ramesh health is:"<<ramesh.getHealth()<<endl;
    // cout<<"Ramesh level is"<<ramesh.level<<endl;
    return 0;
}