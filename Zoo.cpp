
#include <iostream>
#include <vector>
#include <string>
#include <random>

using namespace std;

class Animal
{

public:

    Animal(string name, int age, string tall, string activity, string residence, string food)
        : name(name), age(age), tall(tall), activity(activity), residence(residence), food(food), info(" ") {}

    string getName()
    {
        return name;
    }

    void setName(string name)
    {
        name = name;
    }


    void Sleep()
    {
        cout << name << " is sleeping" << endl;
    }


    void Play()
    {
        cout << name << " is playing" << endl;
    }
    void Jump()
    {
        cout << name << " is jumping" << endl;
    }
    void Dance()
    {
        cout << name << " is dancing" << endl;
    }

    void Feed()
    {
        cout << name << " is fed" << endl;
    }
    void GetTired()
    {
        cout << name << " is geting tired" << endl;
    }


    virtual void MakeSound()
    {
        cout << "" << endl;
    }

    virtual string Ability() {
        return "";
    }

    virtual string Fur_Colour()
    {
        return "";
    }
    virtual string Animal_Weight()
    {
        return "";
    }
    void setInfo(string info)
    {
        info = info;
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Tall: " << tall << endl;
        cout << "Activity: " << activity << endl;
        cout << "Residence: " << residence << endl;
        cout << "Favourite food: " << food << endl;
        cout << Ability() << endl;
        cout << Fur_Colour() << endl;
        cout << Animal_Weight() << endl;
        cout << endl;
    }


protected:
    string name;
    string tall;
    string info;
    string activity;
    string residence;
    string food;
    double age;
};

class Zoo
{
private:
    vector<Animal*> animals;
public:

    void deleteAnimal(string name)
    {
        for (int i = 0; i < animals.size(); i++)
        {
            if (animals[i]->getName() == name)
            {
                animals.erase(animals.begin() + i);
                break;
            }
        }

    }

    void addAnimal(Animal* animal)
    {
        animals.push_back(animal);
    }

    void feedAll()
    {
        for (int i = 0; i < animals.size(); i++)
        {
            animals[i]->Feed();
        }
    }
    void GetTiredAll()
    {
        for (int i = 0; i < animals.size(); i++)
        {
            animals[i]->GetTired();
        }
    }
    void JumpSmb(string name)
    {
        for (int i = 0; i < animals.size(); i++)
        {
            if (animals[i]->getName() == name)
            {
                animals[i]->Jump();
                break;
            }
        }
    }

    void MakeSoundSmb(string name)
    {
        for (int i = 0; i < animals.size(); i++)
        {
            if (animals[i]->getName() == name)
            {
                animals[i]->MakeSound();
                break;
            }
        }
    }
    void SleepSmb(string name)
    {
        for (int i = 0; i < animals.size(); i++)
        {
            if (animals[i]->getName() == name)
            {
                animals[i]->Sleep();
                break;
            }
        }
    }

    void PlaySmb(string name)
    {
        for (int i = 0; i < animals.size(); i++)
        {
            if (animals[i]->getName() == name)
            {
                animals[i]->Play();
                break;
            }
        }
    }

    void DanceSmb(string name)
    {
        for (int i = 0; i < animals.size(); i++)
        {
            if (animals[i]->getName() == name)
            {
                animals[i]->Dance();
                break;
            }
        }
    }
    void randompositionAll()
    {
        srand(time(0));
        int x;
        x = rand() % 3 + 1;

            if (x == 2)
            {
                for (int i = 0; i < animals.size(); i++)
                {
                    animals[i]->Sleep();
                }
            }
            else
            {
                for (int i = 0; i < animals.size(); i++)
                {
                    animals[i]->Jump();
                }
            }

    }
    void infoAll()
    {
        for (int i = 0; i < animals.size(); i++)
        {
            animals[i]->getInfo();
        }
    }
};

class Zebra : public Animal
{
public:

    Zebra(string name, int age, string tall, string activity, string residence, string food, string eyes_colour, string fur_colour, string animal_weight)
        : Animal(name, age, tall, activity, residence, food), eyes_colour(eyes_colour), fur_colour(fur_colour), animal_weight(animal_weight) {}

    void sleep()
    {
        cout << name << " is sleeping" << endl;
    }
    void MakeSound() override
    {
        cout << name << ": zzz" << endl;
    }
    string Ability() override
    {
        return name + "'s eyes colour is " + eyes_colour;
    }
    string Fur_Colour() override
    {
        return name + "'s fur colour is " + fur_colour;
    }
    string Animal_Weight() override
    {
        return name + "'s weight is " + animal_weight;
    }
private:
    string eyes_colour;
    string fur_colour;
    string  animal_weight;
};

class Elephant : public Animal
{
public:

    Elephant(string name, int age, string tall, string activity, string residence, string food, string eyes_colour, string fur_colour, string animal_weight)
        : Animal(name, age, tall, activity, residence, food), eyes_colour(eyes_colour), fur_colour(fur_colour), animal_weight(animal_weight) {}

    void sleep()
    {
        cout << name << " is sleeping";
    }

    void MakeSound() override {
        cout << name << ": zzzz" << endl;
    }
    string Ability() override {
        return name + "'s eyes colour is " + eyes_colour;
    }
    string Fur_Colour() override {
        return name + "'s fur colour is " + fur_colour;
    }
    string Animal_Weight() override {
        return name + "'s weight is " + animal_weight;
    }

private:
    string eyes_colour;
    string fur_colour;
    string animal_weight;
};

class Lion : public Animal {
public:
    Lion(string name, int age, string tall, string activity, string residence, string food, string eyes_colour, string fur_colour, string animal_weight)
        : Animal(name, age, tall, activity, residence, food), eyes_colour(eyes_colour), fur_colour(fur_colour), animal_weight(animal_weight) {}

    void growl()
    {
        cout << name << "growling" << endl;
    }
    void MakeSound() override {
        cout << name << ": grrrrrr" << endl;
    }
    string Ability() override {
        return name + "'s eyes colour is " + eyes_colour;
    }
    string Fur_Colour() override {
        return name + "'s fur colour is " + fur_colour;
    }
    string Animal_Weight() override {
        return name + "'s weight is " + animal_weight;
    }
private:
    string eyes_colour;
    string fur_colour;
    string animal_weight;

};
class Wolf : public Animal {
public:
    Wolf(string name, int age, string tall, string activity, string residence, string food, string eyes_colour, string fur_colour, string animal_weight)
        : Animal(name, age, tall, activity, residence, food), eyes_colour(eyes_colour), fur_colour(fur_colour), animal_weight(animal_weight) {}

    void play()
    {
        cout << name << "playing" << endl;
    }
    void MakeSound() override {
        cout << name << ": hoooooowl" << endl;
    }
    string Ability() override {
        return name + "'s eyes colour is " + eyes_colour;
    }
    string Fur_Colour() override {
        return name + "'s fur colour is " + fur_colour;
    }
    string Animal_Weight() override {
        return name + "'s weight is " + animal_weight;
    }
private:
    string eyes_colour;
    string fur_colour;
    string animal_weight;

};

int main() {

    Zoo zoo;
    Zebra a("Zebra Marti", 2, "2m", "eating", "Nairobi, Kenya", "grass", "blue", "black and white", "350kg");
    Elephant b("Elephant Gloria", 4, "4,5m", "sleeping", "Phuket, Thailand", "grass, leaves, plant roots", "brown", "grey", "3000kg");
    Lion c("Lion Alex", 7, "3m", "looking for a victim", "Sahara, Africa", "meat", "orange", "brown and orange", "2000kg");
    Wolf d("Wolf Igor", 3, "2m", "howling", "Perm, Russia", "meat", "black", "grey", "60kg");



    zoo.addAnimal(&a);
    zoo.addAnimal(&b);
    zoo.addAnimal(&c);
    zoo.addAnimal(&d);



    zoo.infoAll();
    cout << "" << endl;
    zoo.feedAll();



    zoo.DanceSmb("Zebra Marti");
    zoo.JumpSmb("Lion Alex");
    zoo.SleepSmb("Elephant Gloria");
    zoo.MakeSoundSmb("Elephant Gloria");


    zoo.deleteAnimal("Elephant Gloria");

    cout << "" << endl;
    zoo.GetTiredAll();
    cout << "" << endl;



    zoo.MakeSoundSmb("Lion Alex");
    zoo.PlaySmb("Wolf Igor");
    zoo.MakeSoundSmb("Wolf Igor");



    return 0;

}