// program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
#include <cmath>
#include <random>
#include <filesystem>
#include <vector>
#include <algorithm>
#include <chrono>

#define VERSION 29
#define OS "EarlySM"
#define FINALOS "CSMM"
//This is a prototype kind of (or more like testing) operating system that runs on a window. If this ever becomes something like a real os that boots off of a computer,
//I'd like to call it CSMM standing for computer software manager and manipulator

bool logedin = false;

std::string openingscreen;

std::string content = "";

std::string comp_user = "";
std::string comp_name = "";
std::string date = "";
std::string use = "";

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

float and1 = 1;
float and2 = 1;

float nand1 = 1;
float nand2 = 2;

float xor1 = 1;
float xor2 = 1;

float or1 = 1;
float or2 = 2;

float nor1 = 1;
float nor2 = 1;

int LAYOUT_EXCUSE;

void help()
{
    std::cout << "\n\nabout_os\nabout_programming\nabout_programming_updated\naddition_calculator\nalt_create_table\naudio_checker\nbar_graph_maker\ncalc_AND\ncalc_NAND\nC++_GUIDE\ncar_finder\nclear_clipboard\nclear_screen\ncompare_C_C++\ncreate_a_building\ncreate_file\ncreate_table\ndivision_calculator\nexit\nexponent_calculator\nfun_game\nhardware\nlayout()\nlist_of_electronic_parts\nlist_random_nums\nhelp\ninput_clipboard\ninput_computer_info\nmanual\nmultiplication_calculator\norganize_numbers\noutput()\noutput_clipboard\noutput_computer_info\nOS_GUIDE\nprocess_number\nread_file\nsentence_concat\nspeed_test\nsquare_root_calculator\nsubtraction_calculator\nsystem_command_emulator\ntest_RGB\ntest_speed\nTHIS_VERSION\nTHIS_VERSION->print-to-file\nunit_convert\nwater_system\nweather\n\nTo know more about a command, put a \"?\" behind it like this: \"?help\". Make sure to scroll up to see all commands.\n\n";
}

auto get_dir()
{
    return std::filesystem::current_path();
}

std::string subtract_from_string(std::string strng, int sub_by)
{
    std::string new_str;
    for (int take_off = 0; take_off < strng.length() - sub_by; take_off++)
    {
        new_str = new_str + strng[take_off];
    }
    return new_str;
}

void function88()
{
    typedef float ALLOCATE_DECM;
    typedef std::string LETTERS;

    enum type { yes = 0, maybe = 1, no = 2 };

    enum type decide;

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
    std::string appender;
    std::string appender2;

    int fix_style = 0;
    int fix_style2 = 0;

    std::cout << "File name (please include file extension for example file.txt and no spaces): ";

    std::cin >> filename;

    std::cout << "Write in the file (when done, hit enter, than type \"quit\"): ";

    while (appender != "quit")
    {
        if (fix_style == 1)
        {
            filecontent = filecontent + appender + " ";
        }
        std::cin >> appender;
        fix_style = 1;
    }

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

    while (addnum1 != 0 || addnum2 != 0)
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

    while (subnum1 != 0 || subnum2 != 0)
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

    while (mnum1 != 0 || mnum2 != 0)
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

    while (dnum1 != 0 || dnum2 != 0)
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

    while (pwrnum1 != 0 || pwrnum2 != 0)
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
    std::cout << "\nABOUT PROGRAMMING\n\nProgramming is the act of creating a program through some sort of assembler, compiler, interpreter, or something else.\n\nSome tips to use while";
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

    ULONGLONG get_ram;

    GetPhysicallyInstalledSystemMemory(&get_ram);

    CHAR get_computer_name[MAX_COMPUTERNAME_LENGTH + 1];

    DWORD size_of_compname = sizeof(get_computer_name);

    GetComputerNameA(get_computer_name, &size_of_compname);

    /*
    DISK_SPACE_INFORMATION disk;

    WCHAR loc = (WCHAR)"D:\\";

    LPCWSTR ploc = &loc;

    GetDiskSpaceInformationW(ploc, &disk);
    */

    WCHAR loc = (WCHAR)L"D:\\";

    LPCWSTR ploc = &loc;

    DWORD rec = 0;
    DWORD rec1 = 0;
    DWORD rec2 = 0;
    DWORD rec3 = 0;
    //LPDWORD rec4;

    GetDiskFreeSpaceW(L"E:\\", &rec, &rec1, &rec2, &rec3);

    //Beep(200, 1000);

    std::cout << "\n";

    if (ISEEHARDWARE.wProcessorArchitecture == 9)
    {
        std::cout << "Processor architecture: AMD64\n";
    }

    else if (ISEEHARDWARE.wProcessorArchitecture == 5)
    {
        std::cout << "Processor architecture: ARM\n";
    }

    else if (ISEEHARDWARE.wProcessorArchitecture == 12)
    {
        std::cout << "Processor architecture: ARM64\n";
    }

    else if (ISEEHARDWARE.wProcessorArchitecture == 6)
    {
        std::cout << "Processor architecture: Itanium\n";
    }

    else if (ISEEHARDWARE.wProcessorArchitecture == 0)
    {
        std::cout << "Processor architecture: Intel x86\n";
    }

    else
    {
        std::cout << "Couldn't read processor\n";
    }

    std::cout << "Cores: ";
    std::cout << ISEEHARDWARE.dwNumberOfProcessors;
    std::cout << "\n" << "RAM: " << get_ram / 1000000 << " GigaB\n\n";
    //std::cout << rec << " " << rec1 << " " << rec2 << " " << rec3;
    //std::cout << "\n\n";

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

void calcAND()
{
    std::cout << "Welcome to the AND calculator. Enter 0 to exit\n\n";

    while (and1 != 0 || and2 != 0)
    {
        std::cin >> and1;
        std::cin >> and2;
        std::cout << "= ";
        std::cout << (and1 == and2);
        std::cout << "\n";
    }

    and1 = 1;
    and2 = 1;

    std::cout << "\n";
}

void calcNAND()
{
    std::cout << "Welcome to the NAND calculator. Enter 0 to exit\n\n";

    while (nand1 != 0 || nand2 != 0)
    {
        std::cin >> nand1;
        std::cin >> nand2;
        std::cout << "= ";
        std::cout << (nand1 != nand2);
        std::cout << "\n";
    }

    nand1 = 1;
    nand2 = 1;

    std::cout << "\n";
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

void output()
{
    if (openingscreen == "output(time)")
    {
        int newhour = 1;
        SYSTEMTIME new_time; //systemtime is a structure (which is similar to a class)
        GetLocalTime(&new_time); //get adress of new_time to give it its data by getting its adress
        if (new_time.wHour > 12)
        {
            newhour = new_time.wHour - 12;
        }
        else
        {
            newhour = new_time.wHour;
        }
        std::cout << "\n";
        std::cout << "Year: " << new_time.wYear << " Day: " << new_time.wDay << " Month: " << new_time.wMonth << " Time: ";// << newhour << ":" << new_time.wMinute;
        if (newhour < 10)
        {
            std::cout << "0" << newhour;
        }
        else
        {
            std::cout << newhour;
        }
        
        std::cout << ":";

        if (new_time.wMinute < 10)
        {
            std::cout << "0" << new_time.wMinute;
        }
        else
        {
            std::cout << new_time.wMinute;
        }
        std::cout << "\n\n";
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "output(size_of_char)")
    {
        std::cout << "\n" << sizeof(char) << " bytes\n\n";
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "output(size_of_short)")
    {
        std::cout << "\n" << sizeof(short) << " bytes\n\n";
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "output(size_of_float)")
    {
        std::cout << "\n" << sizeof(float) << " bytes\n\n";
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "output(size_of_double)")
    {
        std::cout << "\n" << sizeof(double) << " bytes\n\n";
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "output(size_of_int)")
    {
        std::cout << "\n" << sizeof(int) << " bytes\n\n";
        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "output(number_pattern)")
    {
        double snum;
        double innum;
        double endnum;

        std::cout << "\nstarting number: ";
        std::cin >> snum;
        std::cout << "by how much to increment by: ";
        std::cin >> innum;
        std::cout << "when to end: ";
        std::cin >> endnum;

        while (snum <= endnum)
        {
            std::cout << snum << "\n";
            snum = snum + innum;
        }

        LAYOUT_EXCUSE = 1;
    }

    if (openingscreen == "output(dir_info)")
    {
        std::cout << "path: " << get_dir() << "\nfiles:\n";
        struct stat sb;
        auto get_file = get_dir();
        for (const auto& entry : std::filesystem::directory_iterator(get_file)) 
        {
            // Converting the path to const char * in the
            // subsequent lines
            std::filesystem::path outfilename = entry.path();
            std::string outfilename_str = outfilename.string();
            const char* path = outfilename_str.c_str();

            // Testing whether the path points to a
            // non-directory or not If it does, displays path
            if (stat(path, &sb) == 0 && !(sb.st_mode & S_IFDIR))
                std::cout << path << std::endl;
        }
        
        LAYOUT_EXCUSE = 1;
    }
}

void table()
{
    //This is a 2 by 5 table, please enter corresponding values:
    // X1: 2
    // Y1: 4
    // X2: 6
    // Y2: 8
    // X3: 1
    // Y3: 3
    // X4: 5
    // Y4: 7
    // X5: 9
    // Y5: 0
    //-------------------------------------------------
    //|X                      |Y                      |
    //-------------------------------------------------
    //|2                      |4                      |
    //-------------------------------------------------
    //|6                      |8                      |
    //-------------------------------------------------
    //|1                      |3                      |
    //-------------------------------------------------
    //|5                      |7                      |
    //-------------------------------------------------
    //|9                      |0                      |
    //-------------------------------------------------
    //And so on so forth

    //1. Print the table with corresponding values.
    //2. Use strlen() to check the size of the word/number to subtract it from add_space after you output the column variables.
    //

    std::string column1X = "";
    std::string column1Y = "";
    std::string column2X = "";
    std::string column2Y = "";
    std::string column3X = "";
    std::string column3Y = "";
    std::string column4X = "";
    std::string column4Y = "";
    std::string column5X = "";
    std::string column5Y = "";

    std::string new_add_space1X = "";
    std::string new_add_space1Y = "";
    std::string new_add_space2X = "";
    std::string new_add_space2Y = "";
    std::string new_add_space3X = "";
    std::string new_add_space3Y = "";
    std::string new_add_space4X = "";
    std::string new_add_space4Y = "";
    std::string new_add_space5X = "";
    std::string new_add_space5Y = "";

    std::string add_space = "                       ";

    std::cout << "This is a 2 by 5 table, please enter corresponding values:\n";
    std::cout << "X1: ";
    std::cin >> column1X;
    new_add_space1X = subtract_from_string(add_space, size(column1X));
    std::cout << "Y1: ";
    std::cin >> column1Y;
    new_add_space1Y = subtract_from_string(add_space, size(column1Y));
    std::cout << "X2: ";
    std::cin >> column2X;
    new_add_space2X = subtract_from_string(add_space, size(column2X));
    std::cout << "Y2: ";
    std::cin >> column2Y;
    new_add_space2Y = subtract_from_string(add_space, size(column2Y));
    std::cout << "X3: ";
    std::cin >> column3X;
    new_add_space3X = subtract_from_string(add_space, size(column3X));
    std::cout << "Y3: ";
    std::cin >> column3Y;
    new_add_space3Y = subtract_from_string(add_space, size(column3Y));
    std::cout << "X4: ";
    std::cin >> column4X;
    new_add_space4X = subtract_from_string(add_space, size(column4X));
    std::cout << "Y4: ";
    std::cin >> column4Y;
    new_add_space4Y = subtract_from_string(add_space, size(column4Y));
    std::cout << "X5: ";
    std::cin >> column5X;
    new_add_space5X = subtract_from_string(add_space, size(column5X));
    std::cout << "Y5: ";
    std::cin >> column5Y;
    new_add_space5Y = subtract_from_string(add_space, size(column5Y));
    std::cout << "-------------------------------------------------\n";
    std::cout << "|           X           |           Y           |\n";
    std::cout << "-------------------------------------------------\n";
    std::cout << "|" << column1X << new_add_space1X << "|" << column1Y << new_add_space1Y << "|\n";
    std::cout << "-------------------------------------------------\n";
    std::cout << "|" << column2X << new_add_space2X << "|" << column2Y << new_add_space2Y << "|\n";
    std::cout << "-------------------------------------------------\n";
    std::cout << "|" << column3X << new_add_space3X << "|" << column3Y << new_add_space3Y << "|\n";
    std::cout << "-------------------------------------------------\n";
    std::cout << "|" << column4X << new_add_space4X << "|" << column4Y << new_add_space4Y << "|\n";
    std::cout << "-------------------------------------------------\n";
    std::cout << "|" << column5X << new_add_space5X << "|" << column5Y << new_add_space5Y << "|\n";
    std::cout << "-------------------------------------------------\n";
}

void tutorial()
{
    clear();
    std::string send_input;
    std::cout << "C++ guide\n\n";
    std::cout << "Printing things out: Enter \"1\"\n";
    std::cout << "Creating a variable: Enter \"2\"\n";
    std::cout << "Header files: Enter \"3\"\n";
    std::cout << "The standard library: Enter \"4\"\n";
    std::cout << "Functions: Enter \"5\"\n";
    std::cout << "Taking in input: \"6\"\n";
    std::cout << "->";
    std::cin >> send_input;

    if (send_input == "1")
    {
        std::cout << "\n---------------------\n";
        std::cout << "|                   |\n";
        std::cout << "|PRINTING THINGS OUT|\n";
        std::cout << "|                   |\n";
        std::cout << "---------------------\n\n";
        std::cout << "In C++, we use std::cout to print things out.\n";
        std::cout << "Printing things out allows us to basically output things to our computer screen.\n";
        std::cout << "Here is how:\n";
        std::cout << "std::cout << \"something\";\n";
        std::cout << "The reason why we put std::cout is to call C++'s printing operation.\n";
        std::cout << "The reason why we put \" << \" is to seperate the operator std::cout and what we are trying to print.\n";
        std::cout << "The reason why we put the double-quotes is so that we tell C++ print what is in the double-quotes. (why you need the double quotes is because if you remove them it will try to print a variable that has some form of data inside to print out, learn about this in creating a variable.)\n";
        std::cout << "To print a variable:\n";
        std::cout << "std::cout << something;\n";
        std::cout << "In order to print a variable, you must remove the double-quotes so C++ doesn't get confused if you are trying to print the word \"something\" or content in a variable called \"something\".\n";
        std::cout << "\n";
    }

    else if (send_input == "2")
    {
        std::cout << "\n---------------------\n";
        std::cout << "|                   |\n";
        std::cout << "|CREATING A VARIABLE|\n";
        std::cout << "|                   |\n";
        std::cout << "---------------------\n\n";
        std::cout << "In C++ we have variables.\n";
        std::cout << "They store content.\n";
        std::cout << "This content can consist of numbers, words, etc depending on how you specify the type of data you want along with your variable.\n";
        std::cout << "Here is the pattern in pseudo-code:\n";
        std::cout << "type_of_variable variable_name;\n";
        std::cout << "You can give it a piece of data as soon as you create it like this:\n";
        std::cout << "type_of_variable variable_name = variable_content;\n";
        std::cout << "Or after like this:\n";
        std::cout << "variable_name = variable_content;\n";
        std::cout << "Why are variables initialized this way? It allows for flexibility on what type of variable you want for the type of data you are needing to store.\n";
        std::cout << "Why do we need variables? variables give us an opportunity to store data we'll need later that we need our program to remember.\n";
        std::cout << "Here are some real examples:\n";
        std::cout << "int number = 5;\n";
        std::cout << "std::string sentence = \"Hello, World!\";\n";
        std::cout << "\n";
    }

    else if (send_input == "3")
    {
        std::cout << "\n--------------\n";
        std::cout << "|            |\n";
        std::cout << "|HEADER FILES|\n";
        std::cout << "|            |\n";
        std::cout << "--------------\n\n";
        std::cout << "In C++ we have header files.\n";
        std::cout << "With these we can \"include\" a file (which most likely ends in .h) so we can incorperate specific functions, macros, and more into our source code.\n";
        std::cout << "You can basically say that these header files are like additional packages with extra tools you can give your self to have the ability to do a task you want.\n";
        std::cout << "These come with API's and libraries usually so you can include them to have access to their features.\n";
        std::cout << "The reason why we have header files to manage these things in a proper and organized way.\n";
        std::cout << "\n";
    }

    else if (send_input == "4")
    {
        std::cout << "\n----------------------\n";
        std::cout << "|                    |\n";
        std::cout << "|THE STANDARD LIBRARY|\n";
        std::cout << "|                    |\n";
        std::cout << "----------------------\n\n";
        std::cout << "In C++ we have the standard library.\n";
        std::cout << "These are a bunch of header files (which you should also look at in this guide) that comes with C++ defined as standard.\n";
        std::cout << "The \"std\" in std::cout is basically saying that cout is from the standard llibrary, or its pretty much something standard in C++.\n";
        std::cout << "You can do a ton of things with just the standard library by it self, which means that you don't have to find a library you need as much.\n";
        std::cout << "\n";
    }

    else if (send_input == "5")
    {
        std::cout << "\n-----------\n";
        std::cout << "|         |\n";
        std::cout << "|FUNCTIONS|\n";
        std::cout << "|         |\n";
        std::cout << "-----------\n\n";
        std::cout << "In C++ we have functions.\n";
        std::cout << "This is pretty much when you want to basically shorten up or clean up your code.\n";
        std::cout << "You usually create these in a header file, and than include it in your main file.\n";
        std::cout << "A function is pretty much something that is simple.\n";
        std::cout << "A function is pretty much something that points to execute a bunch of lines of code.\n";
        std::cout << "You give your function a name.\n";
        std::cout << "After that, you give it the following C++ code you want it to execute after doing so.\n";
        std::cout << "The cool thing about functions, is that if you want to shorten your code even more, you can put a function inside of a function!\n";
        std::cout << "They look like this:\n";
        std::cout << "void funcion()\n";
        std::cout << "{\n";
        std::cout << "  std::cout << \"Hello\";\n";
        std::cout << "  std::cout << \"World\";\n";
        std::cout << "}\n\n";
        std::cout << "Now, when you type \"function();\" into your program, it is equivalent of basically putting in those two lines of code previously mentioned.\n";
        std::cout << "\n";
    }

    else if (send_input == "6")
    {
        std::cout << "\n-----------------\n";
        std::cout << "|               |\n";
        std::cout << "|TAKING IN INPUT|\n";
        std::cout << "|               |\n";
        std::cout << "-----------------\n\n";
        std::cout << "In C++, we use std::cin to take in input.\n";
        std::cout << "When we take in input, we are pretty much having the user enter in a value and storing it in a variable.\n";
        std::cout << "It looks like this:\n";
        std::cout << "std::cin >> variable\n";
        std::cout << "\n";
    }
}

void manl()
{
    std::cout << "\nEarlySM is an operating system based off of the menality of simplifying to make things easier.\n";
    std::cout << "In other words provinding the best experience combining usability and ease.\n\n";
    std::cout << "In this manual we will be talking about how we suppose to use an operating system with such mentality embeded in its foundation.\n\n";
    std::cout << "At first you are shown up with a login screen. Just put \"zaid\" to get in.\n\n";
    std::cout << "Afterwards, you are in the normal territory to be expected in of your average shell.\n\n";
    std::cout << "In order to find all of your commands, enter \"help\".\n\n";
    std::cout << "Once you do, you'll be shown all the commands you have.\n\n";
    std::cout << "As you could see, \"help\" is also a part of other commands meaning it is built within the same family.\n\n";
    std::cout << "Put a question mark before any command, and you will get a more detailed explanation on what it does. For example \"?help\".\n\n";
    std::cout << "EarlySM introduces something called \"function type commmands\" resembling how a function would be used in pogramming.\n\n";
    std::cout << "This makes the commands ever so much more flexible allowing for more control and specification to how you want a function to behave.\n\n";
    std::cout << "Thank you.\n\n";
}

void conv()
{
    std::string send_input;
    float decimal;

    std::cout << "\nChoose from the list what you want to convert:\n";
    std::cout << "milimeter to centimeter: Enter \"1\"\n";
    std::cout << "centimeter to milimeter: Enter \"2\"\n";
    std::cout << "centimeter to meter: Enter \"3\"\n";
    std::cout << "meter to centimeter: Enter \"4\"\n";
    std::cout << "meter to kilometer: Enter \"5\"\n";
    std::cout << "kilometer to meter: Enter \"6\"\n";
    std::cout << "inches to feet: Enter \"7\"\n";
    std::cout << "feet to inches: Enter \"8\"\n";
    std::cout << "feet to yards: Enter \"9\"\n";
    std::cout << "yard to feet: Enter \"10\"\n";
    std::cout << "yards to miles: Enter \"11\"\n";
    std::cout << "miles to yards: Emter \"12\"\n";
    std::cout << "inch to centimeter: Enter \"13\"\n";
    std::cout << "centimeter to inch: Enter \"14\"\n";
    std::cout << "->";
    std::cin >> send_input;

    if (send_input == "1")
    {
        std::cout << "\nEnter number: ";
        std::cin >> decimal;
        std::cout << decimal / 10 << " centimeters\n\n";
    }

    else if (send_input == "2")
    {
        std::cout << "\nEnter number: ";
        std::cin >> decimal;
        std::cout << decimal * 10 << " milimeters\n\n";
    }

    else if (send_input == "3")
    {
        std::cout << "\nEnter number: ";
        std::cin >> decimal;
        std::cout << decimal / 100 << " meters\n\n";
    }

    else if (send_input == "4")
    {
        std::cout << "\nEnter number: ";
        std::cin >> decimal;
        std::cout << decimal * 100 << " centimeters\n\n";
    }

    else if (send_input == "5")
    {
        std::cout << "\nEnter number: ";
        std::cin >> decimal;
        std::cout << decimal / 1000 << " kilometers\n\n";
    }

    else if (send_input == "6")
    {
        std::cout << "\nEnter number: ";
        std::cin >> decimal;
        std::cout << decimal * 1000 << " meters\n\n";
    }

    else if (send_input == "7")
    {
        std::cout << "\nEnter number: ";
        std::cin >> decimal;
        std::cout << decimal / 12 << " feet\n\n";
    }

    else if (send_input == "8")
    {
        std::cout << "\nEnter number: ";
        std::cin >> decimal;
        std::cout << decimal * 12 << " inches\n\n";
    }

    else if (send_input == "9")
    {
        std::cout << "\nEnter number: ";
        std::cin >> decimal;
        std::cout << decimal / 3 << " yards\n\n";
    }

    else if (send_input == "10")
    {
        std::cout << "\nEnter number: ";
        std::cin >> decimal;
        std::cout << decimal * 3 << " feet\n\n";
    }

    else if (send_input == "11")
    {
        std::cout << "\nEnter number: ";
        std::cin >> decimal;
        std::cout << decimal / 1760 << " miles\n\n";
    }

    else if (send_input == "12")
    {
        std::cout << "\nEnter number: ";
        std::cin >> decimal;
        std::cout << decimal * 1760 << " yards\n\n";
    }

    else if (send_input == "13")
    {
        std::cout << "\nEnter number: ";
        std::cin >> decimal;
        std::cout << decimal * 2.54 << " centimeters\n\n";
    }

    else if (send_input == "14")
    {
        std::cout << "\nEnter number: ";
        std::cin >> decimal;
        std::cout << decimal / 2.54 << " inches\n\n";
    }
}

void ostut()
{
    std::string os_tutorial_string;

    int break_alt = 0;

    std::cout << "\nThis is an interacive EarlySM tutorial. This tutorial should put you in the right direction.\n";
    std::cout << "First of all, lets type: \"help\"-> ";

    while (break_alt != 1)
    {
        std::cin >> os_tutorial_string;

        if (os_tutorial_string == "help")
        {
            help();
            break_alt = 1;
        }

        else
        {
            std::cout << "Please enter \"help\"-> ";
        }
    }

    break_alt = 0;

    std::cout << "These are our list of commands. Now please type \"?output\"-> ";

    while (break_alt != 1)
    {
        std::cin >> os_tutorial_string;

        if (os_tutorial_string == "?output")
        {
            std::cout << "\nThis function type command outputs any material specified.\n\noutput(*parameter*)\n\nFor example: output(number_pattern)\n\nHere are a list of parameters that work:\n\ntime\nsize_of_char\nsize_of_short\nsize_of_float\nsize_of_double\nsize_of_int\nnumber_pattern\ndir_info\n\n";
            break_alt = 1;
        }

        else
        {
            std::cout << "Please enter \"?output\"-> ";
        }
    }

    break_alt = 0;

    std::cout << "As we can see, this is how you get the explanation of a command. That is it.\n\n";
}

void builder()
{
    int width;
    int height;
    std::string build = "               *";
    std::string play = "Y";

    while (play == "Y")
    {
        std::cout << "\nWelcome to building creator. Please enter how wide you want your building to be (use a number): ";
        std::cin >> width;
        std::cout << "Height: ";
        std::cin >> height;

        for (int i = 2; i <= width; i++)
        {
            build = build + "*";
        }

        std::cout << "\n";

        for (int i = 0; i < height; i++)
        {
            std::cout << build << "\n";
        }

        std::cout << "**********************************************\n\n";

        std::cout << "Keep playing? Y/N: ";
        std::cin >> play;

        width = 0;
        height = 0;
        build = "               *";
    }
}

void rgbref()
{
    CONSOLE_SCREEN_BUFFER_INFOEX info; //info will help change our background
    info.cbSize = sizeof(CONSOLE_SCREEN_BUFFER_INFOEX);

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfoEx(hConsole, &info);

    int red;
    int green;
    int blue;

    std::string wait;
    std::string repeat = "Y";

    while (repeat == "Y")
    {
        std::cout << "\nWelcome to the RGB tester. Enter an RGB value to see how it looks like by changing the background color.\n";
        std::cout << "When done, your screen will reset to default color.\n";
        std::cout << "Please enter the value for red: ";
        std::cin >> red;
        std::cout << "Green: ";
        std::cin >> green;
        std::cout << "Blue: ";
        std::cin >> blue;

        info.ColorTable[0] = RGB(red, green, blue); //change background
        //info.ColorTable[3] = RGB(135, 206, 235); //some examples
        //info.ColorTable[15] = RGB(25, 25, 25);

        SetConsoleScreenBufferInfoEx(hConsole, &info);

        red = 0;
        green = 0;
        blue = 0;

        std::cout << "Continue? Y/N: ";
        std::cin >> repeat;
    }

    info.ColorTable[0] = RGB(0, 0, 0);

    SetConsoleScreenBufferInfoEx(hConsole, &info);
}

void inclip()
{
    std::string appender;

    int fix_style = 0;
    std::cout << "\nStore text in temporary clipboard (when done, hit enter, than type \"quit\"): ";

    while (appender != "quit")
    {
        if (fix_style == 1)
        {
            content = content + appender + " ";
        }
        std::cin >> appender;
        fix_style = 1;
    }
    std::cout << "\n";
}

void outclip()
{
    if (content == "")
    {
        std::cout << "\nThere is no text in your clipboard right now.\n\nUse the input_clipboard command to give it some data.\n\n";
    }

    else
    {
        std::cout << "\n" << content << "\n\n";
    }
}

void clearclip()
{
    content = "";
    std::cout << "\nClipboard cleared.\n\n";
}

void graph()
{
    int width1;
    int width2;
    int width3;
    int width4;
    int width5;

    std::string swidth1 = "";
    std::string swidth2 = "";
    std::string swidth3 = "";
    std::string swidth4 = "";
    std::string swidth5 = "";

    int height = 3;

    std::cout << "\nWelcome to the bar graph maker. you can choose values from 1 to 10 for the bars. There are 5 bars\n";
    std::cout << "First bar: ";
    std::cin >> width1;
    std::cout << "Second bar: ";
    std::cin >> width2;
    std::cout << "Third bar: ";
    std::cin >> width3;
    std::cout << "Fourth bar: ";
    std::cin >> width4;
    std::cout << "Fifth bar: ";
    std::cin >> width5;

    std::cout << "\n";

    for (int i = 0; i < width1; i++) //while i is less than the user inputed value of width1
    {
        swidth1 = swidth1 + "* "; //size of first bar
    }

    for (int i = 0; i < width2; i++)
    {
        swidth2 = swidth2 + "* "; //size of second bar
    }

    for (int i = 0; i < width3; i++)
    {
        swidth3 = swidth3 + "* "; //size of third bar
    }

    for (int i = 0; i < width4; i++)
    {
        swidth4 = swidth4 + "* "; //size of fourth bar
    }

    for (int i = 0; i < width5; i++)
    {
        swidth5 = swidth5 + "* "; //size of fifth bar
    }

    std::cout << "|0\n";

    for (int i = 0; i < 3; i++) //while i is less than 3 because I want the bar graphs to be thick
    {
        std::cout << "|" << swidth1 << "\n"; //print first bar
    }

    std::cout << "|1\n";

    for (int i = 0; i < 3; i++)
    {
        std::cout << "|" << swidth2 << "\n"; //print second bar
    }

    std::cout << "|2\n";

    for (int i = 0; i < 3; i++)
    {
        std::cout << "|" << swidth3 << "\n"; //print third bar
    }

    std::cout << "|3\n";

    for (int i = 0; i < 3; i++)
    {
        std::cout << "|" << swidth4 << "\n"; //print fourth bar
    }

    std::cout << "|4\n";

    for (int i = 0; i < 3; i++)
    {
        std::cout << "|" << swidth5 << "\n"; //print fifth bar
    }

    std::cout << "|5\n";

    std::cout << "|--------------------\n";
    std::cout << " 1 2 3 4 5 6 7 8 9 10\n\n";
}

void furead()
{
    std::string content;

    std::string file__name;

    std::fstream file;

    std::cout << "path: " << get_dir() << "\nfiles:\n";
    struct stat sb;
    auto get_file = get_dir();
    for (const auto& entry : std::filesystem::directory_iterator(get_file))
    {
        // Converting the path to const char * in the
        // subsequent lines
        std::filesystem::path outfilename = entry.path();
        std::string outfilename_str = outfilename.string();
        const char* path = outfilename_str.c_str();

        // Testing whether the path points to a
        // non-directory or not If it does, displays path
        if (stat(path, &sb) == 0 && !(sb.st_mode & S_IFDIR))
            std::cout << path << std::endl;
    }

    std::cout << "\nPlease enter the file you want to read: ";
    std::cin >> file__name;
    std::cout << "\nOutput: ";
    file.open(file__name);
    
    while (file >> content)
    {
        std::cout << content << " ";
    }
    
    std::cout << "\n\n";
}

void listfu()
{
    std::cout << "Cable types: \n\n";
    std::cout << "Cable: HDMI\n";
    std::cout << "Cable: USB\n";
    std::cout << "Cable: PS/2\n";
    std::cout << "Cable: RJ-45\n";
    std::cout << "Cable: Audio Jack\n";
    std::cout << "Cable: Display Port\n";
    std::cout << "Cable: Computer Power Cord\n\n";
    std::cout << "Computer parts: \n\n";
    std::cout << ": CPU\n";
    std::cout << ": CPU Fan\n";
    std::cout << ": Motherboard\n";
    std::cout << ": SSD, HDD\n";
    std::cout << ": DVD Player\n";
    std::cout << ": RAM, Memory\n";
    std::cout << ": Power Supply, PSU\n";
}

void sample_weather_app()
{
    std::cout << "\n*This is a sample, it doesn't work*\n\n";
    std::cout << "Your zip code: 10019.\n";
    std::cout << "Weather: 30F\n";
    std::cout << "Weather tomorrow: 32F\n\n";
    std::cout << "Weather on |Sun (today): 30F| Mon: 32F| Tu: 31F| Wed: 33F| Thur: 32F| Frid: 30F| Sat: 32F|\n\n";

}

void new_table()
{
    std::string temporA;
    std::string temporB;
    int count = 1;

    int size_listA;
    int size_listB;

    int incA = 0;
    int incB = 0;

    std::cout << "\nplease no spaces\n";
    std::cout << "enter \"done\" for both feilds when you are done\n\n";

    std::vector<std::string> listA;
    std::vector<std::string> listB;

    while (temporA != "done" || temporB != "done")
    {
        std::cout << "FEILD_A:" << count << " -> ";
        std::cin >> temporA;
        std::cout << "FEILD_B:" << count << " -> ";
        std::cin >> temporB;

        listA.push_back(temporA);
        listB.push_back(temporB);

        count++;
    }

    std::cout << "\n";

    listA.pop_back();
    listB.pop_back();

    size_listA = listA.size();
    size_listB = listB.size();

    while (incA != size_listA && incB != size_listB)
    {
        std::cout << listA.at(incA);
        std::cout << " : ";
        std::cout << listB.at(incB);
        std::cout << "\n";
        incA++;
        incB++;
    }

    std::cout << "\n";
}

void org_list()
{
    std::cout << "Enter a number than press \"enter\" to proceed to input your next number. Input (0) when your done: ";

    double input = 1;

    int size;

    std::vector<double> list;

    while (input != 0)
    {
        //std::cout << ": ";
        std::cin >> input;
        list.push_back(input);
    }
    
    std::cout << "\n";

    list.pop_back();

    size = list.size();

    std::sort(list.begin(), list.end());

    for (int i = 0; i < size; i++)
    {
        std::cout << list.at(i) << "\n";
    }
}

void info_in()
{
    std::cout << "\n************************************************************";
    std::cout << "\n*may you please enter the user of this computer (no spaces): ";
    std::cin >> comp_user;
    std::cout << "*may you please enter this computers name (no spaces): ";
    std::cin >> comp_name;
    std::cout << "*may you please enter the date of this card being written (no spaces): ";
    std::cin >> date;
    std::cout << "*may you please enter the use of the computer (no spaces): ";
    std::cin >> use;
    std::cout << "************************************************************\n\n";
}

void info_out()
{
    if (comp_user != "" || comp_name != "" || date != "" || use != "")
    {
        std::cout << "\n*********************************";
        std::cout << "\n*user of this computer: " << comp_user;
        std::cout << "\n*name of this computer: " << comp_name;
        std::cout << "\n*date of this card being written: " << date;
        std::cout << "\n*use of this computer: " << use;
        std::cout << "\n*********************************\n\n";
    }

    else
    {
        std::cout << "\ninput_computer_info command should be used to fill up info of this system\n\n";
    }
}

void pm()
{
    std::cout << "\nThis is a programming manual hoping that at the end it will teach you how to be a good programmer\n";
    std::cout << "In this tutorial we will be looking at all the cool aspects of programming.\n";
    std::cout << "In account that beginners may be looking at this, we hope to make sure that it is nice and easy to have you follow along.\n";
    std::cout << "First off, we need to show you a list of programming languages: C, C++, Python, Go, Fortran, and more.\n";
    std::cout << "Now, for common usage:\n";
    std::cout << "C is commonly used for: Drivers, operating systems, games, software, embedded systems, and more.\n";
    std::cout << "C++ is commonly used for: Same as the C programming language but when you want higher performance.\n";
    std::cout << "Python is commonly used for: Automated learning and intelligence, data analytics, search engine optimization, and more.\n";
    std::cout << "Go is commonly used for: Container service, network-cloud services, web services, utilities, microservices, datasciences and more.\n";
    std::cout << "Fortran is commonly used for: Science and Math. An example would be advanced math calculations, etc.\n";
    std::cout << "These are programming languages most affiliated with system programming, not web related (except for python).\n";
    std::cout << "What other types are out there?\n";
    std::cout << "There are programming languages mainly for websites, they are good combination of mark-up languages and things such as that.\n";
    std::cout << "The three main ones would be HTML, CSS, and JavaScript.\n\n";

}

void osversion()
{
    std::cout << "\n" << OS << " " << VERSION << "\n\n";
}

void speed()
{
    int chars = 1;
    int speed_a;

    std::cout << "\nspeed test: enter your speed (lower number is faster): ";
    std::cin >> speed_a;
   
    while (chars <= 1000)
    {
        std::cout << "     |     " << chars << " characters\n";
        chars++;
        Sleep(speed_a);
    }

    std::cout << "\n";
}

void ln()
{
    float number;
    std::string loopln = "0";
    while (loopln == "0")
    {
        std::cout << "\nPlease enter a number to see different calculations of it: ";
        std::cin >> number;
        std::cout << "\n";
        std::cout << "The absolute value of " << number << " is: " << abs(number);
        std::cout << "\n";
        std::cout << "The cubic root of " << number << " is: " << cbrt(number);
        std::cout << "\n";
        std::cout << "The truth(1) of " << number << " being finite or it being false(0) is: " << isfinite(number);
        std::cout << "\n";
        std::cout << "The truth(1) of " << number << " being normal or it being false(0) is: " << isnormal(number);
        std::cout << "\n";
        std::cout << "The rounded value of " << number << " is: " << round(number);
        std::cout << "\n";
        std::cout << "The square root of " << number << " is: " << sqrt(number);
        std::cout << "\n\n";
        std::cout << "0 to continue, 1 to close: ";
        std::cin >> loopln;
    }
    std::cout << "\n";
}

void osversiontext()
{
    typedef std::ofstream fmanpout; //file manipulator out
    fmanpout file("version.txt");
    file << OS << " " << VERSION;
    file.close();

    std::cout << "\nPrinted. Use the command output(dir_info) to see what directory you are in to see your file. It is called version.txt\n\n";
}

void testspeed()
{
    typedef std::ofstream fmanpout;
    fmanpout file("result.txt");

    std::cout << "\nThis application will test the speed of your computer to count up to a big number with a long long type variable.\n";
    std::cout << "We will count up to 1000000000 and test how fast it will take to do so.\n";
    std::string continue_;
    std::cout << "\ncontinue?:";
    std::cin >> continue_;

    long long huge_number = 0;

    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();

    while (huge_number < 1000000000)
    {
        huge_number++;
    }

    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

    std::cout << "\nIt took " << std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count() << " miliseconds to count to 1000000000.\n\n";

    std::string b;

    std::cout << "Print out result? (file name is result.txt, use the read_file command to see it). Input \"yes\" to do so or anything else not to: ";

    std::cin >> b;

    if (b == "yes")
    {
        file << "\nIt took " << std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count() << " miliseconds to count to 1000000000.";
    }

    std::cout << "\n";
}

void comp()
{
    std::cout << "\n(- PRINTING";
    std::cout << "\nTo print \"Hello world\" in C++ --- std::cout << \"Hello world\";";
    std::cout << "\nIn C --- printf(\"Hello world\");";
    std::cout << "\n-)\n";
    std::cout << "\n(- INPUT";
    std::cout << "\nTo input into a variable in C++ --- std::cin >> variable;";
    std::cout << "\nIn C --- scanf(%s, variable);";
    std::cout << "\n-)\n";
    std::cout << "\n(- STRING VARIABLE";
    std::cout << "\nTo create a string in C++ ---  std::string variable;";
    std::cout << "\nIn C --- char variable[];";
    std::cout << "\n-)";
    std::cout << "\n\n";
}

void aud()
{
    typedef int INTEGER;
    INTEGER freq;
    INTEGER mili;
    std::cout << "\nWelcome to the audio checker. Recomended frequency is (100). Input wanted frequency: ";
    std::cin >> freq;
    std::cout << "How long (in miliseconds): ";
    std::cin >> mili;

    Beep(freq, mili);

    std::cout << "\n";
}

void sys_cmd()
{
    std::string command;

    std::cout << "\nWelcome to the system command emulator.\n";
    std::cout << "Type \"quit\" to quit.\n";

    while (command != "quit")
    {
        std::cin >> command;
        char* command_equals = &command[0];
        std::system(command_equals);
    }

    std::cout << "\n";
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
    std::cout << "\nCompute numbers by adding them together.\n\nEnter following numbers like this:\n->1\n->2\n->=3\n\n";
}

void Qbar_graph_maker()
{
    std::cout << "\nWith values ranging from 1 to 10 create a bar graph with 5 bars of comparison.\n\n";
}

void Qcalc_AND()
{
    std::cout << "\nIf two numbers are equal, you get 1. if not you get 0.\n\nEnter following numbers like this:\n->5\n->5\n->=1\n\n";
}

void Qcalc_NAND()
{
    std::cout << "\nIf two numbers are not equal, you get 1. if equal you get 0.\n\nEnter following numbers like this:\n->5\n->5\n->=0\n\n";
}

void Qcar_finder()
{
    std::cout << "\nTake a quiz to know what car you will buy in the future.\n\n";
}

void Qclear_clipboard()
{
    std::cout << "\nClear the text stored in your clipboard when you execute this command to empty out your clipboard. Clipboards are temporary and erase on close.\n\n";
}

void Qclear_screen()
{
    std::cout << "\nBlank out your screen with a bunch of underscores to \"clear\" it.\n\n";
}

void Qcreate_a_building()
{
    std::cout << "\nConstruct a digital building by giving its width and height.\n\n";
}

void Qcreate_file()
{
    std::cout << "\nCreate a file and kind of \"write\" in it.\n\n";
}

void Qtable()
{
    std::cout << "\nFill out a 2 by 5 table.\n\n";
}

void Qtutorial()
{
    std::cout << "\nThis is a guide on how to program in C++.\n\n";
}

void Qdivision_calculator()
{
    std::cout << "\nCompute numbers by deviding them together.\n\nEnter following numbers like this:\n->4\n->2\n->=2\n\n";
}

void Qexit()
{
    std::cout << "\nExit the os.\n\n";
}

void Qexponent_calculator()
{
    std::cout << "\nCompute numbers by raising them by an exponent.\n\nEnter following numbers like this:\n->4\n->2\n->=16\n\n";
}

void Qfun_game()
{
    std::cout << "\nHave fun with a math function by putting in any number.\n\n";
}

void Qhardware()
{
    std::cout << "\nSee your hardware. (computer aspects)\n\n";
}

void Qinput_clipboard()
{
    std::cout << "\nType text into your clipboard to store text you need when you want to. This is temporary and will erase on close.\n\n";
}

void Qlist_of_electronic_parts()
{
    std::cout << "\nSee the parts that you may need for your computer from USB's to CPU's.\n\n";
}

void Qlist_random_nums()
{
    std::cout << "\nSpecify how many numbers you want, and give a range of what numbers you want to recieve.\n\n";
}

void Qlayout()
{
    std::cout << "\nThis function type command changes your terminal's layout.\n\nlayout(background color, text color)\n\nFor example: layout(red,blue)\n\nHere are a list of colors that work:\n\nblack\nblue\ngreen\naqua\nred\npurple\nyellow\nwhite\ngray\nlight_blue\nlight_green\nlight_aqua\nlight_red\nlight_purple\nlight_yellow\nbright_white\n\n";
}

void Qmanl()
{
    std::cout << "\nEarlySM user manual.\n\n";
}

void Qmultiplication_calculator()
{
    std::cout << "\nCompute numbers by multiplying them together.\n\nEnter following numbers like this:\n->1\n->2\n->=2\n\n";
}

void Qoutput()
{
    std::cout << "\nThis function type command outputs any material specified.\n\noutput(*parameter*)\n\nFor example: output(number_pattern)\n\nHere are a list of parameters that work:\n\ntime\nsize_of_char\nsize_of_short\nsize_of_float\nsize_of_double\nsize_of_int\nnumber_pattern\ndir_info\n\n";
}

void Qoutput_clipboard()
{
    std::cout << "\nGet the text stored in your clipboard when you execute this command to see whats inside. This is temporary and will erase on close.\n\n";
}

void QOS_GUIDE()
{
    std::cout << "\nThis is an interactive EarlySM tutorial to understand how to get things going. It is simple and short.\n\n";
}

void Qread_file()
{
    std::cout << "\nUse this command to read a file that you have available.\n\n";
}

void Qsentence_concat()
{
    std::cout << "\nEnter a bunch of words together, so that you can add all of them together to form a sentence.\n\n";
}

void Qsquare_root_calculator()
{
    std::cout << "\nCompute the square root of a number.\n\nEnter following numbers like this:\n->16\n->4\n\n";
}

void Qsubtraction_calculator()
{
    std::cout << "\nCompute numbers by subtracting them together.\n\nEnter following numbers like this:\n->2\n->1\n->=1\n\n";
}

void Qtest_rgb()
{
    std::cout << "\nInput RGB values in order to see how your color combo would look.\n\n";
}

void Qunit_convert()
{
    std::cout << "\nConvert between metric units and others.\n\n";
}

void Qwater_system()
{
    std::cout << "\nAn example of what I like to call \"algorithmic software\". It takes input and does a bunch of processed output to know what to do with your input. For example, here you are supporting 6 destinations that need water. In order to give all your water away proportionately to the most populated destination, the input (the water you have) gets proccessed to know this information.\n\n";
}

void Qweather()
{
    std::cout << "\nThis is a weather app, but it doesn't work right now, it is a sample for use later.\n\n";
}
//--
void Qalt_create_table()
{
    std::cout << "\nThis is an alternative to the create_table command.\n\n";
}

void Qorganize_numbers()
{
    std::cout << "\nInput a list of numbers, than it will be automatically organized.\n\n";
}

void Qinput_computer_info()
{
    std::cout << "\nUse this to fill in information about your computer.\n\n";
}

void Qoutput_computer_info()
{
    std::cout << "\nUse this to see this computer's info (you have to use the \"input_computer_info\" command before).\n\n";
}

void Qspeed_test()
{
    std::cout << "\nUse this program to test the speed of a line and how many chracter spaces it will pass.\n\n";
}

void Qabout_programming_updated()
{
    std::cout << "\nabout_programming updated.\n\n";
}

void QTHIS_VERSION()
{
    std::cout << "\nUse this command to tell what is the version and os that you are using.\n\n";
}

void Qprocess_number()
{
    std::cout << "\nUse this command to compute different types of processing on a certain number.\n\n";
}

void QTHIS_VERSIONprinttofile()
{
    std::cout << "\nPrint the output of the command THIS_VERSION to a text file.\n\n";
}

void Qtest_speed()
{
    std::cout << "\nTest computer counting speed.\n\n";
}

void Qcompare_C_CPP()
{
    std::cout << "\nSee the comparison of the different styles of C and C++.\n\n";
}

void Qaudio_checker()
{
    std::cout << "\nHeadphones/speakers beep test.\n\n";
}

void Qsystem_command_emulator()
{
    std::cout << "\nEmulate DOS and UNIX commands here.\n\n";
}

void openingscreenfunction()
{

    std::cout << "Please check your manual for usage.\nWhat would you like to do today? ";

    while (openingscreen != "exit")
    {
        LAYOUT_EXCUSE = 0;

        std::cin >> openingscreen;

        layout();

        output();

        if (openingscreen == "help")
        {
            std::cout << "Here are a list of commands:";
            help();
            openingscreenfunction();
        }

        else if (openingscreen == "?help")
        {
            Qhelp();
            openingscreenfunction();
        }

        /*else if (openingscreen == "test")
        {
            testspeed();
            openingscreenfunction();
        }*/

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

        else if (openingscreen == "about_programming_updated")
        {
            pm();
            openingscreenfunction();
        }

        else if (openingscreen == "?about_programming_updated")
        {
            Qabout_programming_updated();
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

        else if (openingscreen == "alt_create_table")
        {
            new_table();
            openingscreenfunction();
        }

        else if (openingscreen == "?alt_create_table")
        {
            Qalt_create_table();
            openingscreenfunction();
        }

        else if (openingscreen == "audio_checker")
        {
            aud();
            openingscreenfunction();
        }

        else if (openingscreen == "?audio_checker")
        {
            Qaudio_checker();
            openingscreenfunction();
        }

        else if (openingscreen == "bar_graph_maker")
        {
            graph();
            openingscreenfunction();
        }

        else if (openingscreen == "?bar_graph_maker")
        {
            Qbar_graph_maker();
            openingscreenfunction();
        }

        else if (openingscreen == "calc_AND")
        {
            calcAND();
            openingscreenfunction();
        }

        else if (openingscreen == "?calc_AND")
        {
            Qcalc_AND();
            openingscreenfunction();
        }

        else if (openingscreen == "calc_NAND")
        {
            calcNAND();
            openingscreenfunction();
        }

        else if (openingscreen == "?calc_NAND")
        {
            Qcalc_NAND();
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

        else if (openingscreen == "clear_clipboard")
        {
            clearclip();
            openingscreenfunction();
        }

        else if (openingscreen == "?clear_clipboard")
        {
            Qclear_clipboard();
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

        else if (openingscreen == "compare_C_C++")
        {
            comp();
            openingscreenfunction();
        }

        else if (openingscreen == "?compare_C_C++")
        {
            Qcompare_C_CPP();
            openingscreenfunction();
        }

        else if (openingscreen == "create_a_building")
        {
            builder();
            openingscreenfunction();
        }

        else if (openingscreen == "?create_a_building")
        {
            Qcreate_a_building();
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

        else if (openingscreen == "create_table")
        {
            table();
            openingscreenfunction();
        }

        else if (openingscreen == "?create_table")
        {
            Qtable();
            openingscreenfunction();
        }

        else if (openingscreen == "C++_GUIDE")
        {
            tutorial();
            openingscreenfunction();
        }

        else if (openingscreen == "?C++_GUIDE")
        {
            Qtutorial();
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

        else if (openingscreen == "input_clipboard")
        {
            inclip();
            openingscreenfunction();
        }

        else if (openingscreen == "?input_clipboard")
        {
            Qinput_clipboard();
            openingscreenfunction();
        }

        else if (openingscreen == "input_computer_info")
        {
            info_in();
            openingscreenfunction();
        }

        else if (openingscreen == "?input_computer_info")
        {
            Qinput_computer_info();
            openingscreenfunction();
        }

        else if (openingscreen == "?layout")
        {
            Qlayout();
            openingscreenfunction();
        }

        else if (openingscreen == "?layout()")
        {
            Qlayout();
            openingscreenfunction();
        }

        else if (openingscreen == "list_of_electronic_parts")
        {
            listfu();
            openingscreenfunction();
        }

        else if (openingscreen == "?list_of_electronic_parts")
        {
            Qlist_of_electronic_parts();
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

        else if (openingscreen == "manual")
        {
            manl();
            openingscreenfunction();
        }

        else if (openingscreen == "?manual")
        {
            Qmanl();
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

        else if (openingscreen == "organize_numbers")
        {
            org_list();
            openingscreenfunction();
        }

        else if (openingscreen == "?organize_numbers")
        {
            Qorganize_numbers();
            openingscreenfunction();
        }

        else if (openingscreen == "?output")
        {
            Qoutput();
            openingscreenfunction();
        }

        else if (openingscreen == "?output()")
        {
            Qoutput();
            openingscreenfunction();
        }

        else if (openingscreen == "output_clipboard")
        {
            outclip();
            openingscreenfunction();
        }

        else if (openingscreen == "?output_clipboard")
        {
            Qoutput_clipboard();
            openingscreenfunction();
        }

        else if (openingscreen == "output_computer_info")
        {
            info_out();
            openingscreenfunction();
        }

        else if (openingscreen == "?output_computer_info")
        {
            Qoutput_computer_info();
            openingscreenfunction();
        }

        else if (openingscreen == "OS_GUIDE")
        {
            ostut();
            openingscreenfunction();
        }

        else if (openingscreen == "?OS_GUIDE")
        {
            QOS_GUIDE();
            openingscreenfunction();
        }

        else if (openingscreen == "process_number")
        {
            ln();
            openingscreenfunction();
        }

        else if (openingscreen == "?process_number")
        {
            Qprocess_number();
            openingscreenfunction();
        }

        else if (openingscreen == "read_file")
        {
            furead();
            openingscreenfunction();
        }

        else if (openingscreen == "?read_file")
        {
            Qread_file();
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

        else if (openingscreen == "speed_test")
        {
            speed();
            openingscreenfunction();
        }

        else if (openingscreen == "?speed_test")
        {
            Qspeed_test();
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

        else if (openingscreen == "system_command_emulator")
        {
            sys_cmd();
            openingscreenfunction();
        }

        else if (openingscreen == "?system_command_emulator")
        {
            Qsystem_command_emulator();
            openingscreenfunction();
        }

        else if (openingscreen == "test_RGB")
        {
            rgbref();
            openingscreenfunction();
        }

        else if (openingscreen == "?test_RGB")
        {
            Qtest_rgb();
            openingscreenfunction();
        }

        else if (openingscreen == "test_speed")
        {
            testspeed();
            openingscreenfunction();
        }

        else if (openingscreen == "?test_speed")
        {
            Qtest_speed();
            openingscreenfunction();
        }

        else if (openingscreen == "THIS_VERSION")
        {
            osversion();
            openingscreenfunction();
        }

        else if (openingscreen == "?THIS_VERSION")
        {
            QTHIS_VERSION();
            openingscreenfunction();
        }

        else if (openingscreen == "THIS_VERSION->print-to-file")
        {
            osversiontext();
            openingscreenfunction();
        }

        else if (openingscreen == "?THIS_VERSION->print-to-file")
        {
            QTHIS_VERSIONprinttofile();
            openingscreenfunction();
        }

        else if (openingscreen == "unit_convert")
        {
            conv();
            openingscreenfunction();
        }

        else if (openingscreen == "?unit_convert")
        {
            Qunit_convert();
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

        else if (openingscreen == "weather")
        {
            sample_weather_app();
            openingscreenfunction();
        }

        else if (openingscreen == "?weather")
        {
            Qweather();
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
