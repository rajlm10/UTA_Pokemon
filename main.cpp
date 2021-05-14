#include <iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
using namespace std;

class Pokemon
{
    protected:
    string Name;
    string Attack_names[4];
    int Attack_powers[4];
    int Health;
    public:
    Pokemon(string Name,int Health)
    {
        this->Name=Name;
        this->Health=Health;
    }
};

class Fire: public Pokemon
{
    private:
    string Type;
    public:
    Fire(string Name,int Health=100) : Pokemon(Name,Health)
    {
        
        this->Type="Fire";
    }
    void setAttack_names(string name1="Flamethrower",string name2="Fireblast",string name3="Heatup",string name4="Firevortex")
    {
        this->Attack_names[0]=name1;
        this->Attack_names[1]=name2;
        this->Attack_names[2]=name3;
        this->Attack_names[3]=name4;
        
    }
    void setAttack_powers(int power1=7,int power2=15,int power3=5,int power4=10)
    {
        this->Attack_powers[0]=power1;
        this->Attack_powers[1]=power2;
        this->Attack_powers[2]=power3;
        this->Attack_powers[3]=power4;
        
    }
    void getName()
    {
        cout<<"Name: "<<this->Name<<endl;
    }
    void getHealth()
    {
        cout<<"Health: "<<this->Health<<endl;
    }
    void getType()
    {
        cout<<"Type: "<<this->Type<<endl;
    }
    
    void getAttack_names()
    {
        cout<<"Attack names: "<<Attack_names[0]<<" "<<Attack_names[1]<<" "<<Attack_names[2]<<" "<<Attack_names[3]<<endl;
    }
    
    void getAttack_powers()
    {
        cout<<"Attack powers: "<<Attack_powers[0]<<" "<<Attack_powers[1]<<" "<<Attack_powers[2]<<" "<<Attack_powers[3]<<endl;
    }
    void getDetails()
    {
        this->getName();
        this->getHealth();
        this->getType();
        this->getAttack_names();
        this->getAttack_powers();
        cout<<endl;
    }
    
    int chooseAttack()
    {
        int random=rand()%4;
        //code for critical hit
	int critical = rand()%5;
	if (critical==1)
	{
		cout<<"CRITICAL HIT: "<<this->Name<<" attacked with "<<this->Attack_names[random]<<"!"<<endl<<endl;
		return this->Attack_powers[random]*2;
	}
	//over
        cout<<this->Name<<" attacked with "<<this->Attack_names[random]<<"!"<<endl<<endl;
        return this->Attack_powers[random];
    }
    
    void onAttack(int power)
    {
        if(power<this->Health)
        {
            this->Health=this->Health-power;
            if(this->Health==0)
            {
                cout<<this->Name<<"'s health reduced to "<<this->Health<<endl<<endl;
                exit(0);
            }

        }
        else
        {
            this->Health=0;
            cout<<this->Name<<" lost the battle!"<<endl;
            exit(0);
        }
        
        cout<<this->Name<<"'s health reduced to "<<this->Health<<endl;
    }
    
};

class Water: public Pokemon
{
    private:
    string Type;
    public:
    Water(string Name,int Health=100) : Pokemon(Name,Health)
    {
        
        this->Type="Water";
    }
    void setAttack_names(string name1="Bubbleblast",string name2="Hydroblast",string name3="Spit",string name4="Surf")
    {
        this->Attack_names[0]=name1;
        this->Attack_names[1]=name2;
        this->Attack_names[2]=name3;
        this->Attack_names[3]=name4;
        
    }
    void setAttack_powers(int power1=5,int power2=20,int power3=5,int power4=7)
    {
        this->Attack_powers[0]=power1;
        this->Attack_powers[1]=power2;
        this->Attack_powers[2]=power3;
        this->Attack_powers[3]=power4;
        
    }
    void getName()
    {
        cout<<"Name: "<<this->Name<<endl;
    }
    void getHealth()
    {
        cout<<"Health: "<<this->Health<<endl;
    }
    void getType()
    {
        cout<<"Type: "<<this->Type<<endl;
    }
    
    void getAttack_names()
    {
        cout<<"Attack names: "<<Attack_names[0]<<" "<<Attack_names[1]<<" "<<Attack_names[2]<<" "<<Attack_names[3]<<endl;
    }
    
    void getAttack_powers()
    {
        cout<<"Attack powers: "<<Attack_powers[0]<<" "<<Attack_powers[1]<<" "<<Attack_powers[2]<<" "<<Attack_powers[3]<<endl;
    }
    void getDetails()
    {
        this->getName();
        this->getHealth();
        this->getType();
        this->getAttack_names();
        this->getAttack_powers();
        cout<<endl;
    }
    
    int chooseAttack()
    {
        int random=rand()%4;
        //code for critical hit
	int critical = rand()%5;
	if (critical==1)
	{
		cout<<"CRITICAL HIT: "<<this->Name<<" attacked with "<<this->Attack_names[random]<<"!"<<endl<<endl;
		return this->Attack_powers[random]*2;
	}
	//over
        cout<<this->Name<<" attacked with "<<this->Attack_names[random]<<"!"<<endl<<endl;
        return this->Attack_powers[random];
    }
    
    void onAttack(int power)
    {
        if(power<this->Health)
        {
            this->Health=this->Health-power;
            if(this->Health==0)
            {
                cout<<this->Name<<"'s health reduced to "<<this->Health<<endl<<endl;
                exit(0);
            }

        }
        else
        {
            this->Health=0;
            cout<<this->Name<<" lost the battle!"<<endl;
            exit(0);
        }
        
        cout<<this->Name<<"'s health reduced to "<<this->Health<<endl;
    }
    
    
};

class Grass: public Pokemon
{
    private:
    string Type;
    public:
    Grass(string Name,int Health=100) : Pokemon(Name,Health)
    {
        
        this->Type="Grass";
    }
    void setAttack_names(string name1="Leafthrower",string name2="Razorleaf",string name3="Solarbeam",string name4="Vinewhip")
    {
        this->Attack_names[0]=name1;
        this->Attack_names[1]=name2;
        this->Attack_names[2]=name3;
        this->Attack_names[3]=name4;
        
    }
    void setAttack_powers(int power1=3,int power2=10,int power3=20,int power4=3)
    {
        this->Attack_powers[0]=power1;
        this->Attack_powers[1]=power2;
        this->Attack_powers[2]=power3;
        this->Attack_powers[3]=power4;
        
    }
     void getName()
    {
        cout<<"Name: "<<this->Name<<endl;
    }
    void getHealth()
    {
        cout<<"Health: "<<this->Health<<endl;
    }
    void getType()
    {
        cout<<"Type: "<<this->Type<<endl;
    }
    
    void getAttack_names()
    {
        cout<<"Attack names: "<<Attack_names[0]<<" "<<Attack_names[1]<<" "<<Attack_names[2]<<" "<<Attack_names[3]<<endl;
    }
    
    void getAttack_powers()
    {
        cout<<"Attack powers: "<<Attack_powers[0]<<" "<<Attack_powers[1]<<" "<<Attack_powers[2]<<" "<<Attack_powers[3]<<endl;
    }
   void getDetails()
    {
        this->getName();
        this->getHealth();
        this->getType();
        this->getAttack_names();
        this->getAttack_powers();
        cout<<endl;
    }
    
    int chooseAttack()
    {
        int random=rand()%4;
	//code for critical hit
	int critical = rand()%5;
	if (critical==1)
	{
		cout<<"CRITICAL HIT: "<<this->Name<<" attacked with "<<this->Attack_names[random]<<"!"<<endl<<endl;
		return this->Attack_powers[random]*2;
	}
	//over
        cout<<this->Name<<" attacked with "<<this->Attack_names[random]<<"!"<<endl<<endl;
        return this->Attack_powers[random];
    }
    
    void onAttack(int power)
    {
        if(power<this->Health)
        {
            this->Health=this->Health-power;
            if(this->Health==0)
            {
                cout<<this->Name<<"'s health reduced to "<<this->Health<<endl<<endl;
                exit(0);
            }

        }
        else
        {
            this->Health=0;
            cout<<this->Name<<" lost the battle!"<<endl;
            exit(0);
        }
        
        cout<<this->Name<<"'s health reduced to "<<this->Health<<endl;
    }
    
    
};

int main()
{
    srand(time(0));
    Fire charizard("Charizard");
    charizard.setAttack_names();
    charizard.setAttack_powers();
    charizard.getDetails();
    Water blastoise("Blastoise");
    blastoise.setAttack_names();
    blastoise.setAttack_powers();
    blastoise.getDetails();
    
    while(true)
    {
        blastoise.onAttack(charizard.chooseAttack());
        charizard.onAttack(blastoise.chooseAttack());
    }
    
    
    


    /*Water blastoise("Blastoise");
    blastoise.setAttack_names();
    blastoise.setAttack_powers();
    blastoise.getDetails();
    cout<<endl;


    Grass venasaur("Venasaur");
    venasaur.setAttack_names();
    venasaur.setAttack_powers();
    venasaur.getDetails();
    cout<<endl;*/



    return 0;
}
