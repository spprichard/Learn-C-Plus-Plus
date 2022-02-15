#include <iostream>

using namespace std;

class Entity 
{
    public:
        virtual string GetName() { return "Entity"; }
};

class Player: public Entity 
{
    private:
        string m_Name;

    public:
        Player(const string& name) 
        {
            m_Name = name;
        }

        string GetName() override { return m_Name; };
};

void PrintName(Entity* e) 
{
    cout << e->GetName() << endl;
};


int main() 
{
    Entity* e = new Entity();
    PrintName(e);

    Player* p = new Player("Steven");
    PrintName(p);

    Entity* playerEntity = p;
    PrintName(playerEntity);

    cin.get();

    // These `deletes` aren't nessesary as the program exits
    // They are here to force me to think about the cleaning things up
    delete(e);
    delete(p);
};