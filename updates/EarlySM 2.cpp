// program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
#include <cmath>
#include <random>

bool logedin = false;

std::string openingscreen;

float addnum1 = 1;
float addnum2 = 1;

float subnum1 = 1;
float subnum2 = 1;

float mnum1 = 1;
float mnum2 = 1;

float dnum1 = 1;
float dnum2 = 1;

float pwrnum1 = 1;
float pwrnum2 = 1;

float sqrnum = 1;

int LAYOUT_EXCUSE;

void function88()
{
    typedef float ALLOCATE_DECM;
    typedef std::string LETTERS;

    enum type { yes = 0, maybe = 1, no = 2 };

    type decide;

    ALLOCATE_DECM enough_water = 1000;
    ALLOCATE_DECM how_much_water = 0;


    //PLACE_A gets 20%, PLACE_B gets 10%, PLACE_C gets 5%, PLACE_D gets 30%, PLACE_E gets 17%, PLACE_F gets 18%

    ALLOCATE_DECM A = 0.2;
    ALLOCATE_DECM B = 0.1;
    ALLOCATE_DECM C = 0.05;
    ALLOCATE_DECM D = 0.3;
    ALLOCATE_DECM E = 0.17;
    ALLOCATE_DECM F = 0.18;

    LETTERS loop;

    //Enter the amount of water in stock to give out today: 1000
    //You have enough water supply ?? You may have enough water supply ?? You don't have enough water supply
    //PLACE_A gets 200
    //PLACE_B gets 100
    //PLACE_C gets 50
    //PLACE_D gets 300
    //PLACE_E gets 170
    //PLACE_F gets 180
    //E to exit, C to continue:

    while (loop != "E")
    {
        std::cout << "Enter the amount of water in stock to give out today: ";
        std::cin >> how_much_water;

        ALLOCATE_DECM PLACE_A = A * how_much_water;
        ALLOCATE_DECM PLACE_B = B * how_much_water;
        ALLOCATE_DECM PLACE_C = C * how_much_water;
        ALLOCATE_DECM PLACE_D = D * how_much_water;
        ALLOCATE_DECM PLACE_E = E * how_much_water;
        ALLOCATE_DECM PLACE_F = F * how_much_water;

        if (how_much_water >= 900 && how_much_water < 1000)
        {
            std::cout << "You may have enough water supply\n";
        }

        else if (how_much_water < 900)
        {
            std::cout << "You don't have enough water supply\n";
        }

        else if (how_much_water >= 1000)
        {
            std::cout << "You have enough water supply\n";
        }

        std::cout << "PLACE_A gets ";
        std::cout << PLACE_A;
        std::cout << "\n";

        std::cout << "PLACE_B gets ";
        std::cout << PLACE_B;
        std::cout << "\n";

        std::cout << "PLACE_C gets ";
        std::cout << PLACE_C;
        std::cout << "\n";

        std::cout << "PLACE_D gets ";
        std::cout << PLACE_D;
        std::cout << "\n";

        std::cout << "PLACE_E gets ";
        std::cout << PLACE_E;
        std::cout << "\n";

        std::cout << "PLACE_F gets ";
        std::cout << PLACE_F;
        std::cout << "\n";

        std::cout << "E to exit, or C to continue: ";
        std::cin >> loop;

        while (loop != "C" && loop != "E")
        {
            std::cout << "\nplease enter E to exit, or C to continue: ";
            std::cin >> loop;
        }
    }

    std::cout << "\n";
}

void windowuptime(bool keep)
{
    if (keep == true)
    {
        std::string dokeep;
        std::cin >> dokeep;
    }

    else
    {
        int failure;
    }
}

void login()
{
    std::cout << "Enter username: ";
    std::string username;
    std::cin >> username;
    if (username != "zaid")
    {
        std::cout << "Sorry but you must enter \"zaid\"...\n\n";
        //windowuptime(true);
    }
}

void create_file()
{
    std::fstream file;

    std::string filename;
    std::string filecontent;

    std::cout << "File name (please include file extension for example file.txt): ";

    std::cin >> filename;

    std::cout << "WARNING: std::cin only takes one word, this is why you put underscores instead of a space.";

    std::cout << "\nwrite in the file (seperate_words_with_underscores): ";

    std::cin >> filecontent;

    file.open(filename, std::fstream::in | std::fstream::out | std::fstream::app);

    file << filecontent;

    file.close();

    std::cout << "\n";

}

void fungame()
{
    float number;
    float number2;
    float number3;
    int x = 1;

    std::cout << "Enter \"0\" to exit \"fun_game\".\n\n";

    std::cout << "Give me a value: ";
    std::cin >> number;

    if (number == 0)
    {
        x = 0;
        std::cout << "Good Bye!\n\nPlease check your manual for usage.\nWhat would you like to do today? ";
    }

    while (x != 0)
    {
        number2 = number * 30;
        number3 = number2 / 80;

        std::cout << "Guess what ";
        std::cout << number;
        std::cout << " times 30 divided by 80 is: its ";
        std::cout << number3;
        std::cout << "\n";

        number = 0;
        number2 = 0;
        number3 = 0;

        std::cout << "Give me a value: ";
        std::cin >> number;

        if (number == 0)
        {
            x = 0;
            std::cout << "Good Bye!\n\nPlease check your manual for usage.\nWhat would you like to do today? ";
        }
    }

}

void additoncalculator()
{
    std::cout << "Welcome to the addition calculator. Enter 0 for both values to exit\n\n";

    while (addnum1 != 0 && addnum2 != 0)
    {
        std::cin >> addnum1;
        std::cin >> addnum2;
        std::cout << "= ";
        std::cout << addnum1 + addnum2;
        std::cout << "\n";
    }

    addnum1 = 1;
    addnum2 = 1;

    std::cout << "\n";
}

void subtractioncalculator()
{
    std::cout << "Welcome to the subtraction calculator. Enter 0 for both values to exit\n\n";

    while (subnum1 != 0 && subnum2 != 0)
    {
        std::cin >> subnum1;
        std::cin >> subnum2;
        std::cout << "= ";
        std::cout << subnum1 - subnum2;
        std::cout << "\n";
    }

    subnum1 = 1;
    subnum2 = 1;

    std::cout << "\n";
}

void mcalculator()
{
    std::cout << "Welcome to the multiplication calculator. Enter 0 for both values to exit\n\n";

    while (mnum1 != 0 && mnum2 != 0)
    {
        std::cin >> mnum1;
        std::cin >> mnum2;
        std::cout << "= ";
        std::cout << mnum1 * mnum2;
        std::cout << "\n";
    }

    mnum1 = 1;
    mnum2 = 1;

    std::cout << "\n";
}

void dcalculator()
{
    std::cout << "Welcome to the division calculator. Enter 0 for both values to exit\n\n";

    while (dnum1 != 0 && dnum2 != 0)
    {
        std::cin >> dnum1;
        std::cin >> dnum2;
        std::cout << "= ";
        std::cout << dnum1 / dnum2;
        std::cout << "\n";
    }

    dnum1 = 1;
    dnum2 = 1;

    std::cout << "\n";
}

void pwrcalculator()
{
    std::cout << "Welcome to the exponent calculator. Enter 0 to exit\n\n";

    while (pwrnum1 != 0 && pwrnum2 != 0)
    {
        std::cin >> pwrnum1;
        std::cin >> pwrnum2;
        std::cout << "= ";
        std::cout << pow(pwrnum1, pwrnum2);
        std::cout << "\n";
    }

    pwrnum1 = 1;
    pwrnum2 = 1;

    std::cout << "\n";
}

void sqrtcalculator()
{
    std::cout << "Welcome to the square root calculator. Enter 0 for both values to exit\n\n";

    while (sqrnum != 0)
    {
        std::cin >> sqrnum;
        std::cout << "= ";
        std::cout << sqrt(sqrnum);
        std::cout << "\n";
    }

    sqrnum = 1;

    std::cout << "\n";
}

void aboutos()
{
    std::cout << "\nEarly SM, By Zaid Natsheh. Software Manager.\n\n";
}

void aboutprogramming()
{
    std::cout << "\nABOUT PROGRAMMING\n\nProgramming is the act of crating a program through some sort of assembler, compiler, interpreter, or something else.\n\nSome tips to use while";
    std::cout << " programming is to keep yourself understanding and well prepared while programming.\n\nIt helps a ton to do your research on programming, with some device that has internet.\n\n";
    std::cout << "But in general, we can say that while this is being written, C++, Python, C, C#, and Java are quite well known options you should do your research on. C++ along with C are";
    std::cout << " known for having more of a complex looking style, but people consider these two as the most superior languages.\n\n";
    std::cout << "Hoping this website is still up, go to en.wikipedia.org/wiki/Programming_language for an online look at this.\n\n";
}

void randnum()
{
    std::default_random_engine generator;

    int counter = 1;
    int min = 1;
    int max = 1;
    int spy = 0;

    std::cout << "Enter how many random numbers you want: ";
    std::cin >> counter;
    std::cout << "minimum number: ";
    std::cin >> min;
    std::cout << "maximum number: ";
    std::cin >> max;

    while (spy < counter)
    {

        std::uniform_int_distribution<int> distribution(min, max);
        int dice_roll = distribution(generator);
        std::cout << dice_roll;
        std::cout << "\n";

        spy = spy + 1;
    }
}

void sysfo()
{
    SYSTEM_INFO ISEEHARDWARE;

    GetSystemInfo(&ISEEHARDWARE);

    std::cout << "\n";

    if (ISEEHARDWARE.wProcessorArchitecture == 9)
    {
        std::cout << "Processor: AMD64\n";
    }

    else if (ISEEHARDWARE.wProcessorArchitecture == 5)
    {
        std::cout << "Processor: ARM\n";
    }

    else if (ISEEHARDWARE.wProcessorArchitecture == 12)
    {
        std::cout << "Processor: ARM64\n";
    }

    else if (ISEEHARDWARE.wProcessorArchitecture == 6)
    {
        std::cout << "Processor: Itanium\n";
    }

    else if (ISEEHARDWARE.wProcessorArchitecture == 0)
    {
        std::cout << "Processor: Intel x86\n";
    }

    else
    {
        std::cout << "Couldn't read processor\n";
    }

    std::cout << "Cores: ";
    std::cout << ISEEHARDWARE.dwNumberOfProcessors;
    std::cout << "\n\n";

}

void clear()
{
    int clrvar = 0;

    while (clrvar < 20000)
    {
        std::cout << "_";
        clrvar = clrvar + 1;
    }

    std::cout << "\n";
}

void sentenceconcat()
{
    std::string sentence = "";
    std::string concat = "";

    std::cout << "\nEnter E.X to exit.";

    std::cout << "\nEnter a word: ";

    std::cin >> concat;

    concat = concat + " ";

    while (concat != "E.X ")
    {
        sentence = sentence + concat;
        std::cout << "Enter a word: ";
        std::cin >> concat;
        concat = concat + " ";
    }

    std::cout << "\"" << sentence << "\"" << " is your final sentence!\n\n";
}

void car_quiz()
{
    typedef std::string ALLOCHARS;

    //offroad/cheap/america = Jeep Compass
    //offroad/average/america = Ford Bronco
    //offroad/expensive/america = F150 Raptor
    //normal/cheap/america = Chevy Malibu
    //normal/average/america = Cadilac CT4
    //normal/expensive/america = Cadillac CT5 V
    //sport/cheap/america = Ford Mustang Ecoboost
    //sport/average/america = Ford Mustang GT
    //sport/expensive/america = Cadillac CT5 V Blackwing

    //offroad/cheap/asia = Toyota Rav4
    //offroad/average/asia = Toyota 4runner
    //offroad/expensive/asia = Toyota Sequoia
    //normal/cheap/asia = Toyota Corolla
    //normal/average/asia = Toyota Camry
    //normal/expensive/asia = Lexus LS
    //sport/cheap/asia = Toyota GR86
    //sport/average/asia = Toyota Supra
    //sport/expensive/asia = Lexus LC

    //offroad/cheap/europe = Volkswagen Taos
    //offroad/average/europe = Volkswagen Tiguan
    //offroad/expensive/europe = Mercedes G-Class
    //normal/cheap/europe = Volkswagen Jetta
    //normal/average/europe = Mercedes C-Class
    //normal/expensive/europe = Mercedes E-Class
    //sport/cheap/europe = Volkswagen Jetta GLI
    //sport/average/europe = Audi S5
    //sport/expensive/europe = BMW M5

    //What type of car are you looking for?     Offroad     Normal     Sport: -> Normal
    //What is the price you are looking for?    Cheap       Average    Expensive: -> Average
    //What is the country you are looking for?  America     Asia       Europe: -> Europe
    //
    //Final car: Mercedes C-Class

    ALLOCHARS type = "";
    ALLOCHARS price = "";
    ALLOCHARS country = "";

    std::cout << "What type of car are you looking for?    Offroad    Normal    Sport: -> ";
    std::cin >> type;
    std::cout << "What is the price you are looking for?   Cheap      Average   Expensive: -> ";
    std::cin >> price;
    std::cout << "What is the country you are looking for? America    Asia      Europe: -> ";
    std::cin >> country;

    if (type == "Offroad" && price == "Cheap" && country == "America")
    {
        std::cout << "\nFinal car: Jeep Compass\n\n";
    }

    if (type == "Offroad" && price == "Average" && country == "America")
    {
        std::cout << "\nFinal car: Ford Bronco\n\n";
    }

    if (type == "Offroad" && price == "Expensive" && country == "America")
    {
        std::cout << "\nFinal car: F150 Raptor\n\n";
    }

    if (type == "Normal" && price == "Cheap" && country == "America")
    {
        std::cout << "\nFinal car: Chevy Malibu\n\n";
    }

    if (type == "Normal" && price == "Average" && country == "America")
    {
        std::cout << "\nFinal car: Cadillac CT4\n\n";
    }

    if (type == "Normal" && price == "Expensive" && country == "America")
    {
        std::cout << "\nFinal car: Cadillac CT5 V\n\n";
    }

    if (type == "Sport" && price == "Cheap" && country == "America")
    {
        std::cout << "\nFinal car: Ford Mustang Ecoboost\n\n";
    }

    if (type == "Sport" && price == "Average" && country == "America")
    {
        std::cout << "\nFinal car: Ford Mustang GT\n\n";
    }

    if (type == "Sport" && price == "Expensive" && country == "America")
    {
        std::cout << "\nFinal car: Cadillac CT5 V Blackwing\n\n";
    }




    if (type == "Offroad" && price == "Cheap" && country == "Asia")
    {
        std::cout << "\nFinal car: Toyota Rav4\n\n";
    }

    if (type == "Offroad" && price == "Average" && country == "Asia")
    {
        std::cout << "\nFinal car: Toyota 4runner\n\n";
    }

    if (type == "Offroad" && price == "Expensive" && country == "Asia")
    {
        std::cout << "\nFinal car: Toyota Sequoia\n\n";
    }

    if (type == "Normal" && price == "Cheap" && country == "Asia")
    {
        std::cout << "\nFinal car: Toyota Corolla\n\n";
    }

    if (type == "Normal" && price == "Average" && country == "Asia")
    {
        std::cout << "\nFinal car: Toyota Camry\n\n";
    }

    if (type == "Normal" && price == "Expensive" && country == "Asia")
    {
        std::cout << "\nFinal car: Lexus LS\n\n";
    }

    if (type == "Sport" && price == "Cheap" && country == "Asia")
    {
        std::cout << "\nFinal car: Toyota GR86\n\n";
    }

    if (type == "Sport" && price == "Average" && country == "Asia")
    {
        std::cout << "\nFinal car: Toyota Supra\n\n";
    }

    if (type == "Sport" && price == "Expensive" && country == "Asia")
    {
        std::cout << "\nFinal car: Lexus LC\n\n";
    }




    if (type == "Offroad" && price == "Cheap" && country == "Europe")
    {
        std::cout << "\nFinal car: Volkswagen Taos\n\n";
    }

    if (type == "Offroad" && price == "Average" && country == "Europe")
    {
        std::cout << "\nFinal car: Volkswagen Tiguan\n\n";
    }

    if (type == "Offroad" && price == "Expensive" && country == "Europe")
    {
        std::cout << "\nFinal car: Mercedes G-Class\n\n";
    }

    if (type == "Normal" && price == "Cheap" && country == "Europe")
    {
        std::cout << "\nFinal car: Volkswagen Jetta\n\n";
    }

    if (type == "Normal" && price == "Average" && country == "Europe")
    {
        std::cout << "\nFinal car: Mercedes C-Class\n\n";
    }

    if (type == "Normal" && price == "Expensive" && country == "Europe")
    {
        std::cout << "\nFinal car: Mercedes E-Class\n\n";
    }

    if (type == "Sport" && price == "Cheap" && country == "Europe")
    {
        std::cout << "\nFinal car: Volkswagen Jetta GLI\n\n";
    }

    if (type == "Sport" && price == "Average" && country == "Europe")
    {
        std::cout << "\nFinal car: Audi S5\n\n";
    }

    if (type == "Sport" && price == "Expensive" && country == "Europe")
    {
        std::cout << "\nFinal car: BMW M5\n\n";
    }
}

void layout()
{
    if (openingscreen == "layout(black,black)")
    {
        system("Color 00");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(black,blue)")
    {
        system("Color 01");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(black,green)")
    {
        system("Color 02");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(black,aqua)")
    {
        system("Color 03");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(black,red)")
    {
        system("Color 04");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(black,purple)")
    {
        system("Color 05");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(black,yellow)")
    {
        system("Color 06");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(black,white)")
    {
        system("Color 07");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(black,gray)")
    {
        system("Color 08");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(black,light_blue)")
    {
        system("Color 09");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(black,light_green)")
    {
        system("Color 0A");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(black,light_aqua)")
    {
        system("Color 0B");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(black,light_red)")
    {
        system("Color 0C");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(black,light_purple)")
    {
        system("Color 0D");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(black,light_yellow)")
    {
        system("Color 0E");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(black,bright_white)")
    {
        system("Color 0F");
        LAYOUT_EXCUSE = 1;
    }

    //

    if (openingscreen == "layout(blue,black)")
    {
        system("Color 10");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(blue,blue)")
    {
        system("Color 11");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(blue,green)")
    {
        system("Color 12");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(blue,aqua)")
    {
        system("Color 13");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(blue,red)")
    {
        system("Color 14");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(blue,purple)")
    {
        system("Color 15");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(blue,yellow)")
    {
        system("Color 16");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(blue,white)")
    {
        system("Color 17");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(blue,gray)")
    {
        system("Color 18");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(blue,light_blue)")
    {
        system("Color 19");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(blue,light_green)")
    {
        system("Color 1A");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(blue,light_aqua)")
    {
        system("Color 1B");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(blue,light_red)")
    {
        system("Color 1C");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(blue,light_purple)")
    {
        system("Color 1D");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(blue,light_yellow)")
    {
        system("Color 1E");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(blue,bright_white)")
    {
        system("Color 1F");
        LAYOUT_EXCUSE = 1;
    }

    //

    if (openingscreen == "layout(green,black)")
    {
        system("Color 20");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(green,blue)")
    {
        system("Color 21");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(green,green)")
    {
        system("Color 22");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(green,aqua)")
    {
        system("Color 23");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(green,red)")
    {
        system("Color 24");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(green,purple)")
    {
        system("Color 25");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(green,yellow)")
    {
        system("Color 26");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(green,white)")
    {
        system("Color 27");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(green,gray)")
    {
        system("Color 28");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(green,light_blue)")
    {
        system("Color 29");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(green,light_green)")
    {
        system("Color 2A");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(green,light_aqua)")
    {
        system("Color 2B");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(green,light_red)")
    {
        system("Color 2C");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(green,light_purple)")
    {
        system("Color 2D");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(green,light_yellow)")
    {
        system("Color 2E");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(green,bright_white)")
    {
        system("Color 2F");
        LAYOUT_EXCUSE = 1;
    }

    //

    if (openingscreen == "layout(aqua,black)")
    {
        system("Color 30");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(aqua,blue)")
    {
        system("Color 31");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(aqua,green)")
    {
        system("Color 32");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(aqua,aqua)")
    {
        system("Color 33");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(aqua,red)")
    {
        system("Color 34");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(aqua,purple)")
    {
        system("Color 35");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(aqua,yellow)")
    {
        system("Color 36");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(aqua,white)")
    {
        system("Color 37");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(aqua,gray)")
    {
        system("Color 38");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(aqua,light_blue)")
    {
        system("Color 39");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(aqua,light_green)")
    {
        system("Color 3A");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(aqua,light_aqua)")
    {
        system("Color 3B");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(aqua,light_red)")
    {
        system("Color 3C");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(aqua,light_purple)")
    {
        system("Color 3D");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(aqua,light_yellow)")
    {
        system("Color 3E");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(aqua,bright_white)")
    {
        system("Color 3F");
        LAYOUT_EXCUSE = 1;
    }

    //

    if (openingscreen == "layout(red,black)")
    {
        system("Color 40");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(red,blue)")
    {
        system("Color 41");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(red,green)")
    {
        system("Color 42");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(red,aqua)")
    {
        system("Color 43");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(red,red)")
    {
        system("Color 44");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(red,purple)")
    {
        system("Color 45");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(red,yellow)")
    {
        system("Color 46");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(red,white)")
    {
        system("Color 47");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(red,gray)")
    {
        system("Color 48");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(red,light_blue)")
    {
        system("Color 49");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(red,light_green)")
    {
        system("Color 4A");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(red,light_aqua)")
    {
        system("Color 4B");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(red,light_red)")
    {
        system("Color 4C");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(red,light_purple)")
    {
        system("Color 4D");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(red,light_yellow)")
    {
        system("Color 4E");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(red,bright_white)")
    {
        system("Color 4F");
        LAYOUT_EXCUSE = 1;
    }

    //

    if (openingscreen == "layout(purple,black)")
    {
        system("Color 50");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(purple,blue)")
    {
        system("Color 51");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(purple,green)")
    {
        system("Color 52");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(purple,aqua)")
    {
        system("Color 53");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(purple,red)")
    {
        system("Color 54");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(purple,purple)")
    {
        system("Color 55");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(purple,yellow)")
    {
        system("Color 56");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(purple,white)")
    {
        system("Color 57");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(purple,gray)")
    {
        system("Color 58");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(purple,light_blue)")
    {
        system("Color 59");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(purple,light_green)")
    {
        system("Color 5A");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(purple,light_aqua)")
    {
        system("Color 5B");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(purple,light_red)")
    {
        system("Color 5C");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(purple,light_purple)")
    {
        system("Color 5D");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(purple,light_yellow)")
    {
        system("Color 5E");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(purple,bright_white)")
    {
        system("Color 5F");
        LAYOUT_EXCUSE = 1;
    }

    //

    if (openingscreen == "layout(yellow,black)")
    {
        system("Color 60");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(yellow,blue)")
    {
        system("Color 61");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(yellow,green)")
    {
        system("Color 62");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(yellow,aqua)")
    {
        system("Color 63");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(yellow,red)")
    {
        system("Color 64");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(yellow,purple)")
    {
        system("Color 65");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(yellow,yellow)")
    {
        system("Color 66");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(yellow,white)")
    {
        system("Color 67");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(yellow,gray)")
    {
        system("Color 68");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(yellow,light_blue)")
    {
        system("Color 69");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(yellow,light_green)")
    {
        system("Color 6A");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(yellow,light_aqua)")
    {
        system("Color 6B");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(yellow,light_red)")
    {
        system("Color 6C");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(yellow,light_purple)")
    {
        system("Color 6D");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(yellow,light_yellow)")
    {
        system("Color 6E");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(yellow,bright_white)")
    {
        system("Color 6F");
        LAYOUT_EXCUSE = 1;
    }

    //

    if (openingscreen == "layout(white,black)")
    {
        system("Color 70");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(white,blue)")
    {
        system("Color 71");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(white,green)")
    {
        system("Color 72");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(white,aqua)")
    {
        system("Color 73");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(white,red)")
    {
        system("Color 74");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(white,purple)")
    {
        system("Color 75");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(white,yellow)")
    {
        system("Color 76");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(white,white)")
    {
        system("Color 77");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(white,gray)")
    {
        system("Color 78");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(white,light_blue)")
    {
        system("Color 79");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(white,light_green)")
    {
        system("Color 7A");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(white,light_aqua)")
    {
        system("Color 7B");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(white,light_red)")
    {
        system("Color 7C");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(white,light_purple)")
    {
        system("Color 7D");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(white,light_yellow)")
    {
        system("Color 7E");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(white,bright_white)")
    {
        system("Color 7F");
        LAYOUT_EXCUSE = 1;
    }

    //

    if (openingscreen == "layout(gray,black)")
    {
        system("Color 80");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,blue)")
    {
        system("Color 81");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,green)")
    {
        system("Color 82");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,aqua)")
    {
        system("Color 83");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,red)")
    {
        system("Color 84");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,purple)")
    {
        system("Color 85");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,yellow)")
    {
        system("Color 86");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,white)")
    {
        system("Color 87");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,gray)")
    {
        system("Color 88");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,light_blue)")
    {
        system("Color 89");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,light_green)")
    {
        system("Color 8A");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,light_aqua)")
    {
        system("Color 8B");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,light_red)")
    {
        system("Color 8C");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,light_purple)")
    {
        system("Color 8D");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,light_yellow)")
    {
        system("Color 8E");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,bright_white)")
    {
        system("Color 8F");
        LAYOUT_EXCUSE = 1;
    }

    //

    if (openingscreen == "layout(gray,black)")
    {
        system("Color 80");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,blue)")
    {
        system("Color 81");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,green)")
    {
        system("Color 82");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,aqua)")
    {
        system("Color 83");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,red)")
    {
        system("Color 84");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,purple)")
    {
        system("Color 85");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,yellow)")
    {
        system("Color 86");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,white)")
    {
        system("Color 87");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,gray)")
    {
        system("Color 88");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,light_blue)")
    {
        system("Color 89");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,light_green)")
    {
        system("Color 8A");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,light_aqua)")
    {
        system("Color 8B");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,light_red)")
    {
        system("Color 8C");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,light_purple)")
    {
        system("Color 8D");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,light_yellow)")
    {
        system("Color 8E");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(gray,bright_white)")
    {
        system("Color 8F");
        LAYOUT_EXCUSE = 1;
    }

    //

    if (openingscreen == "layout(light_blue,black)")
    {
        system("Color 90");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_blue,blue)")
    {
        system("Color 91");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_blue,green)")
    {
        system("Color 92");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_blue,aqua)")
    {
        system("Color 93");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_blue,red)")
    {
        system("Color 94");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_blue,purple)")
    {
        system("Color 95");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_blue,yellow)")
    {
        system("Color 96");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_blue,white)")
    {
        system("Color 97");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_blue,gray)")
    {
        system("Color 98");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_blue,light_blue)")
    {
        system("Color 99");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_blue,light_green)")
    {
        system("Color 9A");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_blue,light_aqua)")
    {
        system("Color 9B");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_blue,light_red)")
    {
        system("Color 9C");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_blue,light_purple)")
    {
        system("Color 9D");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_blue,light_yellow)")
    {
        system("Color 9E");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_blue,bright_white)")
    {
        system("Color 9F");
        LAYOUT_EXCUSE = 1;
    }

    //

    if (openingscreen == "layout(light_green,black)")
    {
        system("Color A0");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_green,blue)")
    {
        system("Color A1");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_green,green)")
    {
        system("Color A2");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_green,aqua)")
    {
        system("Color A3");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_green,red)")
    {
        system("Color A4");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_green,purple)")
    {
        system("Color A5");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_green,yellow)")
    {
        system("Color A6");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_green,white)")
    {
        system("Color A7");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_green,gray)")
    {
        system("Color A8");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_green,light_blue)")
    {
        system("Color A9");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_green,light_green)")
    {
        system("Color AA");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_green,light_aqua)")
    {
        system("Color AB");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_green,light_red)")
    {
        system("Color AC");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_green,light_purple)")
    {
        system("Color AD");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_green,light_yellow)")
    {
        system("Color AE");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_green,bright_white)")
    {
        system("Color AF");
        LAYOUT_EXCUSE = 1;
    }

    //

    if (openingscreen == "layout(light_aqua,black)")
    {
        system("Color B0");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_aqua,blue)")
    {
        system("Color B1");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_aqua,green)")
    {
        system("Color B2");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_aqua,aqua)")
    {
        system("Color B3");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_aqua,red)")
    {
        system("Color B4");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_aqua,purple)")
    {
        system("Color B5");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_aqua,yellow)")
    {
        system("Color B6");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_aqua,white)")
    {
        system("Color B7");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_aqua,gray)")
    {
        system("Color B8");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_aqua,light_blue)")
    {
        system("Color B9");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_aqua,light_green)")
    {
        system("Color BA");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_aqua,light_aqua)")
    {
        system("Color BB");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_aqua,light_red)")
    {
        system("Color BC");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_aqua,light_purple)")
    {
        system("Color BD");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_aqua,light_yellow)")
    {
        system("Color BE");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_aqua,bright_white)")
    {
        system("Color BF");
        LAYOUT_EXCUSE = 1;
    }

    //

    if (openingscreen == "layout(light_red,black)")
    {
        system("Color C0");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_red,blue)")
    {
        system("Color C1");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_red,green)")
    {
        system("Color C2");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_red,aqua)")
    {
        system("Color C3");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_red,red)")
    {
        system("Color C4");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_red,purple)")
    {
        system("Color C5");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_red,yellow)")
    {
        system("Color C6");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_red,white)")
    {
        system("Color C7");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_red,gray)")
    {
        system("Color C8");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_red,light_blue)")
    {
        system("Color C9");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_red,light_green)")
    {
        system("Color CA");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_red,light_aqua)")
    {
        system("Color CB");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_red,light_red)")
    {
        system("Color CC");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_red,light_purple)")
    {
        system("Color CD");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_red,light_yellow)")
    {
        system("Color CE");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_red,bright_white)")
    {
        system("Color CF");
        LAYOUT_EXCUSE = 1;
    }

    //

    if (openingscreen == "layout(light_purple,black)")
    {
        system("Color D0");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_purple,blue)")
    {
        system("Color D1");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_purple,green)")
    {
        system("Color D2");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_purple,aqua)")
    {
        system("Color D3");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_purple,red)")
    {
        system("Color D4");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_purple,purple)")
    {
        system("Color D5");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_purple,yellow)")
    {
        system("Color D6");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_purple,white)")
    {
        system("Color D7");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_purple,gray)")
    {
        system("Color D8");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_purple,light_blue)")
    {
        system("Color D9");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_purple,light_green)")
    {
        system("Color DA");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_purple,light_aqua)")
    {
        system("Color DB");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_purple,light_red)")
    {
        system("Color DC");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_purple,light_purple)")
    {
        system("Color DD");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_purple,light_yellow)")
    {
        system("Color DE");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_purple,bright_white)")
    {
        system("Color DF");
        LAYOUT_EXCUSE = 1;
    }

    //

    if (openingscreen == "layout(light_yellow,black)")
    {
        system("Color E0");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_yellow,blue)")
    {
        system("Color E1");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_yellow,green)")
    {
        system("Color E2");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_yellow,aqua)")
    {
        system("Color E3");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_yellow,red)")
    {
        system("Color E4");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_yellow,purple)")
    {
        system("Color E5");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_yellow,yellow)")
    {
        system("Color E6");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_yellow,white)")
    {
        system("Color E7");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_yellow,gray)")
    {
        system("Color E8");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_yellow,light_blue)")
    {
        system("Color E9");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_yellow,light_green)")
    {
        system("Color EA");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_yellow,light_aqua)")
    {
        system("Color EB");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_yellow,light_red)")
    {
        system("Color EC");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_yellow,light_purple)")
    {
        system("Color ED");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_yellow,light_yellow)")
    {
        system("Color EE");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(light_yellow,bright_white)")
    {
        system("Color EF");
        LAYOUT_EXCUSE = 1;
    }

    //

    if (openingscreen == "layout(bright_white,black)")
    {
        system("Color F0");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(bright_white,blue)")
    {
        system("Color F1");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(bright_white,green)")
    {
        system("Color F2");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(bright_white,aqua)")
    {
        system("Color F3");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(bright_white,red)")
    {
        system("Color F4");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(bright_white,purple)")
    {
        system("Color F5");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(bright_white,yellow)")
    {
        system("Color F6");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(bright_white,white)")
    {
        system("Color F7");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(bright_white,gray)")
    {
        system("Color F8");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(bright_white,light_blue)")
    {
        system("Color F9");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(bright_white,light_green)")
    {
        system("Color FA");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(bright_white,light_aqua)")
    {
        system("Color FB");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(bright_white,light_red)")
    {
        system("Color FC");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(bright_white,light_purple)")
    {
        system("Color FD");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(bright_white,light_yellow)")
    {
        system("Color FE");
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "layout(bright_white,bright_white)")
    {
        system("Color FF");
        LAYOUT_EXCUSE = 1;
    }
}

void Qhelp()
{
    std::cout << "\nThe \"help\" command lists all the commands you have available to you.\n\n";
}

void Qabout_os()
{
    std::cout << "\nKnow about the OS your using.\n\n";
}

void Qabout_programming()
{
    std::cout << "\nKnow about computer programming.\n\n";
}

void Qaddition_calculator()
{
    std::cout << "\nCompute numbers by adding them together.\n\n";
}

void Qcar_finder()
{
    std::cout << "\nTake a quiz to know what car you will buy in the future.\n\n";
}

void Qclear_screen()
{
    std::cout << "\nBlank out your screen with a bunch of underscores to \"clear\" it.\n\n";
}

void Qcreate_file()
{
    std::cout << "\nCreate a file and kind of \"write\" in it.\n\n";
}

void Qdivision_calculator()
{
    std::cout << "\nCompute numbers by deviding them together.\n\n";
}

void Qexit()
{
    std::cout << "\nExit the os.\n\n";
}

void Qexponent_calculator()
{
    std::cout << "\nCompute numbers by raising them by an exponent.\n\n";
}

void Qfun_game()
{
    std::cout << "\nHave fun with a math function by putting in any number.\n\n";
}

void Qhardware()
{
    std::cout << "\nSee your hardware. (computer aspects)\n\n";
}

void Qlist_random_nums()
{
    std::cout << "\nSpecify how many numbers you want, and give a range of what numbers you want to recieve.\n\n";
}

void Qlayout()
{
    std::cout << "\nthis function type command changes your terminal's layout.\n\nlayout(background color, text color)\n\nHere are a list of colors that work:\nblack\nblue\ngreen\naqua\nred\npurple\nyellow\nwhite\ngray\nlight_blue\nlight_green\nlight_aqua\nlight_red\nlight_purple\nlight_yellow\nbright_white\n\n";
}

void Qmultiplication_calculator()
{
    std::cout << "\nCompute numbers by multiplying them together.\n\n";
}

void Qsentence_concat()
{
    std::cout << "\nEnter a bunch of words together, so that you can add all of them together to form a sentence.\n\n";
}

void Qsquare_root_calculator()
{
    std::cout << "\nCompute the square root of a number.\n\n";
}

void Qsubtraction_calculator()
{
    std::cout << "\nCompute numbers by subtracting them together.\n\n";
}

void Qwater_system()
{
    std::cout << "\nAn example of what I like to call \"algorithmic software\". It takes input and does a bunch of processed output to know what to do with your input. For example, here you are supporting 6 destinations that need water. In order to give all your water away proportionately to the most populated destination, the input (the water you have) gets proccessed to know this information.\n\n";
}

void openingscreenfunction()
{

    std::cout << "Please check your manual for usage.\nWhat would you like to do today? ";

    while (openingscreen != "exit")
    {
        LAYOUT_EXCUSE = 0;

        std::cin >> openingscreen;

        layout();

        if (openingscreen == "help")
        {
            std::cout << "Here are a list of commands:";
            std::cout << "\n\nabout_os\nabout_programming\naddition_calculator\ncar_finder\nclear_screen\ncreate_file\ndivision_calculator\nexit\nexponent_calculator\nfun_game\nhardware\nlayout()\nlist_random_nums\nhelp\nmultiplication_calculator\nsentence_concat\nsquare_root_calculator\nsubtraction_calculator\nwater_system\n\nTo know more about a command, put a \"?\" behind it like this: \"?help\".\n\n";
            openingscreenfunction();
        }

        else if (openingscreen == "?help")
        {
            Qhelp();
            openingscreenfunction();
        }

        else if (openingscreen == "about_os")
        {
            aboutos();
            openingscreenfunction();
        }

        else if (openingscreen == "?about_os")
        {
            Qabout_os();
            openingscreenfunction();
        }

        else if (openingscreen == "about_programming")
        {
            aboutprogramming();
            openingscreenfunction();
        }

        else if (openingscreen == "?about_programming")
        {
            Qabout_programming();
            openingscreenfunction();
        }

        else if (openingscreen == "addition_calculator")
        {
            std::cout << "Ok, heres a calculator: ";
            additoncalculator();
            openingscreenfunction();
        }

        else if (openingscreen == "?addition_calculator")
        {
            Qaddition_calculator();
            openingscreenfunction();
        }

        else if (openingscreen == "car_finder")
        {
            car_quiz();
            openingscreenfunction();
        }

        else if (openingscreen == "?car_finder")
        {
            Qcar_finder();
            openingscreenfunction();
        }

        else if (openingscreen == "clear_screen")
        {
            clear();
            openingscreenfunction();
        }

        else if (openingscreen == "?clear_screen")
        {
            Qclear_screen();
            openingscreenfunction();
        }

        else if (openingscreen == "create_file")
        {
            create_file();
            openingscreenfunction();
        }

        else if (openingscreen == "?create_file")
        {
            Qcreate_file();
            openingscreenfunction();
        }

        else if (openingscreen == "division_calculator")
        {
            std::cout << "Ok, here a calculator: ";
            dcalculator();
            openingscreenfunction();
        }

        else if (openingscreen == "?division_calculator")
        {
            Qdivision_calculator();
            openingscreenfunction();
        }

        else if (openingscreen == "exit")
        {
            std::cout << "exiting in 3";
            Sleep(1000);
            std::cout << ", 2";
            Sleep(1000);
            std::cout << ", 1";
            Sleep(1000);
        }

        else if (openingscreen == "?exit")
        {
            Qexit();
            openingscreenfunction();
        }

        else if (openingscreen == "exponent_calculator")
        {
            std::cout << "Ok, heres a calculator: ";
            pwrcalculator();
            openingscreenfunction();
        }

        else if (openingscreen == "?exponent_calculator")
        {
            Qexponent_calculator();
            openingscreenfunction();
        }

        else if (openingscreen == "fun_game")
        {
            fungame();
        }

        else if (openingscreen == "?fun_game")
        {
            Qfun_game();
            openingscreenfunction();
        }

        else if (openingscreen == "hardware")
        {
            sysfo();
            openingscreenfunction();
        }

        else if (openingscreen == "?hardware")
        {
            Qhardware();
            openingscreenfunction();
        }

        else if (openingscreen == "?layout()")
        {
            Qlayout();
            openingscreenfunction();
        }

        else if (openingscreen == "list_random_nums")
        {
            randnum();
            openingscreenfunction();
        }

        else if (openingscreen == "?list_random_nums")
        {
            Qlist_random_nums();
            openingscreenfunction();
        }

        else if (openingscreen == "multiplication_calculator")
        {
            std::cout << "Ok, heres a calculator: ";
            mcalculator();
            openingscreenfunction();
        }

        else if (openingscreen == "?multiplication_calculator")
        {
            Qmultiplication_calculator();
            openingscreenfunction();
        }

        else if (openingscreen == "sentence_concat")
        {
            sentenceconcat();
            openingscreenfunction();
        }

        else if (openingscreen == "?sentence_concat")
        {
            Qsentence_concat();
            openingscreenfunction();
        }

        else if (openingscreen == "square_root_calculator")
        {
            std::cout << "Ok, heres a calculator: ";
            sqrtcalculator();
            openingscreenfunction();
        }

        else if (openingscreen == "?square_root_calculator")
        {
            Qsquare_root_calculator();
            openingscreenfunction();
        }

        else if (openingscreen == "subtraction_calculator")
        {
            std::cout << "Ok, heres a calculator: ";
            subtractioncalculator();
            openingscreenfunction();
        }

        else if (openingscreen == "?subtraction_calculator")
        {
            Qsubtraction_calculator();
            openingscreenfunction();
        }

        else if (openingscreen == "water_system")
        {
            function88();
            openingscreenfunction();
        }

        else if (openingscreen == "?water_system")
        {
            Qwater_system();
            openingscreenfunction();
        }

        else
        {
            if (LAYOUT_EXCUSE == 0)
            {
                std::cout << "error, please enter \"help\", for a list of commands, or please enter \"exit\", to leave this program\n\n";
                openingscreenfunction();
            }

            else
            {
                openingscreenfunction();
            }
        }

    }
}

void logo_anim()
{
    std::cout << "*************************\n";
    Sleep(100);
    std::cout << "*************************\n";
    Sleep(100);
    std::cout << "*************************\n";
    Sleep(100);
    std::cout << "********\n";
    Sleep(100);
    std::cout << "********\n";
    Sleep(100);
    std::cout << "********                                                                  ***      ***\n";
    Sleep(100);
    std::cout << "*************************                                        ***       ***    ***\n";
    Sleep(100);
    std::cout << "*************************                                        ***        ***  ***\n";
    Sleep(100);
    std::cout << "*************************           ***          ***   *** **    ***         ******\n";
    Sleep(100);
    std::cout << "********                         **** ****       ***  ***        ***          ****\n";
    Sleep(100);
    std::cout << "********                        ***     ***      *** ***         ***          ***       ******    *\n";
    Sleep(100);
    std::cout << "********                       ***       ***     ***             ***         ***       *          * *****  ***** \n";
    Sleep(100);
    std::cout << "*************************       ***     *****    ***             ***        ***         ******    **     **     *\n";
    Sleep(100);
    std::cout << "*************************         *****   ***    ***             ***       ***                *   **     **     *\n";
    Sleep(100);
    std::cout << "*************************                  ***   ***             ***      ***           ******    **     **     *\n\n";
}

int main()
{
    logo_anim();
    std::cout << "Enter username: ";
    std::string username;
    std::cin >> username;
    if (username != "zaid")
    {
        std::cout << "Sorry but you must enter \"zaid\"...\n\n";
        //windowuptime(true);
        login();
        logedin = true;
    }
    else
    {
        logedin = true;
    }

    std::cout << "";

    //The living source-------------------

    if (logedin == true)
    {
        openingscreenfunction();

        if (openingscreen != "exit")
        {
            std::cout << "error, program has gone through confusion, exiting.";
        }
    }

    //The living source-------------------
}
