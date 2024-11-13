#include <iostream>
#include <vector>
#include <string>

void printMenu()
{
    //1 print help
    std::cout << "1: Print help" << std::endl;
    //2 print exchange stats
    std::cout << "2: Print exchange stats" << std::endl;
    //3 make an offer
    std::cout << "3: Make an offer" << std::endl;
    //4 make a bid
    std::cout << "4: Make a bid" << std::endl;
    //5 print my wallet
    std::cout << "5: Print wallet" << std::endl;
    //6 Next / time step (continue..)
    std::cout << "6: Continue " << std::endl;

    std::cout << "==================" << std::endl;
}


void printHelp()
{
    std::cout << "Help - your aim is to make money. Analyse the market and make bids and offers" << std::endl;  
}

void printMarketStat()
{
    std::cout << "Market looks good" << std::endl;  
}


void enterOffer()
{
    std::cout << "Make an offer" << std::endl; 
}

void enterBid()
{
    std::cout << "Make a bid - Enter the amount" << std::endl; 
}


void  printWallet()
{
    std::cout << "Your wallet is empty" << std::endl;  
}

void  gotoNextTimeframe()
{
    std::cout << "Going to next time frame." << std::endl; 
}
 


int getUserOption()
{
    int userOption; 
    std::cout << "Select option 1-6 " << std::endl;
    std::cin >> userOption;
    std::cout << "Selected option: " << userOption << std::endl;
    
    return userOption;
}


void processUserOption(int userOption)
{
    if (userOption == 0 ) //bad input
    {
        std::cout << "Invalid input! Select 1-6" << std::endl;  
    }
    if (userOption == 1) //bad input
    {
        printHelp();
    }
    if (userOption == 2) //bad input
    {
        printMarketStat(); 
    }
    if (userOption == 3) //bad input
    {
        enterOffer();
    }
    if (userOption == 4) //bad input
    {
        enterBid();  
    }
    if (userOption == 5) //bad input
    {
        printWallet();
    }
    if (userOption == 6) //bad input
    {
        gotoNextTimeframe();  
    }
}




int main()
{
    while (true)
    {
        printMenu();                        //call the function (menu)
        int userOption = getUserOption();   //receive user input
        processUserOption(userOption);      //process user input
    }

    return 0;
}
