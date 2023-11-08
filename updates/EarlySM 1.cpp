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
        std::cin >> openingscreen;

        if (openingscreen == "help")
        {
            std::cout << "Here are a list of commands:";
            std::cout << "\n\nabout_os\nabout_programming\naddition_calculator\ncar_finder\nclear_screen\ncreate_file\ndivision_calculator\nexit\nexponent_calculator\nfun_game\nhardware\nlist_random_nums\nhelp\nmultiplication_calculator\nsentence_concat\nsquare_root_calculator\nsubtraction_calculator\nwater_system\n\nTo know more about a command, put a \"?\" behind it like this: \"?help\".\n\n";
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
            std::cout << "error, please enter \"help\", for a list of commands, or please enter \"exit\", to leave this program\n\n";
            openingscreenfunction();
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
