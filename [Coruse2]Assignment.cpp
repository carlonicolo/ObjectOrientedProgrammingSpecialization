#include <iostream>
#include<string>
#include<vector>

class OrderBookEntry
{
    
     public:           // parts of class seen from outside.
         enum class OrderBookType
         {
             bid,
             ask
         };

         // Constructor declaration
         OrderBookEntry(double _price, double _amount, std::string _timestamps, std::string _products, OrderBookType _orderType);

         // CLass Variables
         double price; 
         double amount;
         std::string products;
         std::string timestamps;
         OrderBookType orderType;


}; // note the semi-colon.

// Constructor definition and initialization via member initializer lists.
OrderBookEntry::OrderBookEntry(double _price, double _amount, std::string _timestamps, std::string _products, OrderBookEntry::OrderBookType _orderType)
    : price(_price), amount(_amount), timestamps(_timestamps), products(_products), orderType(_orderType)
{
    // Constructor body (if needed)
}

// Challenge Problems Implementing Functions 
double computeAveragePrice(std::vector<OrderBookEntry>& entries){
       if (entries.empty()) return 0;

       double sum = 0;
       for (const auto& entry : entries){
           sum += entry.price;
       }
       return sum / entries.size();
}


double computeLowPrice(std::vector<OrderBookEntry>& entries){
       if (entries.empty()) return 0;

       double low = entries[0].price;
       for (const auto& entry : entries){
            if (entry.price < low){
                low = entry.price;
            }
       }

       return low;
}

double computeHighPrice(std::vector<OrderBookEntry> &entries)
{
    if (entries.empty())
        return 0;

    double high = entries[0].price;
    for (const auto &entry : entries)
    {
        if (entry.price > high)
        {
            high = entry.price;
        }
    }

    return high;
}

double computePriceSpread(std::vector<OrderBookEntry> &entries)
{
    if (entries.empty())
        return 0.0;

    double low = entries[0].price;
    double high = entries[0].price;

    for (const auto &entry : entries)
    {
        if (entry.price < low)
        {
            low = entry.price;
        }
        if (entry.price > high)
        {
            high = entry.price;
        }
    }
    return high - low;
}

    void printMenu()
{
    // 1 print help
    std::cout << "1: Print help " << std::endl;
    // 2 print exchange stats
    std::cout << "2: Print exchange stats" << std::endl;
    // 3 make an offer
    std::cout << "3: Make an offer " << std::endl;
    // 4 make a bid 
    std::cout << "4: Make a bid " << std::endl;
    // 5 print wallet
    std::cout << "5: Print wallet " << std::endl;
    // 6 continue   
    std::cout << "6: Continue " << std::endl;

    std::cout << "============== " << std::endl;
}

void printHelp()
{
    std::cout << "Help - your aim is to make money. Analyse the market and make bids and offers. " << std::endl;
}

void  printMarketStats()
{
    std::cout << "Market looks good. " << std::endl;
}

void enterOffer()
{
    std::cout << "Mark and offer - enter the amount " << std::endl;
}

void enterBid()
{
    std::cout << "Make a bid - enter the amount" << std::endl;
}

void printWallet()
{
    std::cout << "Your wallet is empty. " << std::endl;
}
        
void gotoNextTimeframe()
{
    std::cout << "Going to next time frame. " << std::endl;
}
 
int getUserOption()
{
    int userOption;

    std::cout << "Type in 1-6" << std::endl;
    std::cin >> userOption;
    std::cout << "You chose: " << userOption << std::endl;
    return userOption;
}

void processUserOption(int userOption)
{
    if (userOption == 0) // bad input
    {
        std::cout << "Invalid choice. Choose 1-6" << std::endl;
    }
    if (userOption == 1) // bad input
    {
        printHelp();
    }
    if (userOption == 2) // bad input
    {
        printMarketStats();
    }
    if (userOption == 3) // bad input
    {
        enterOffer();
    }
    if (userOption == 4) // bad input
    {
        enterBid();
    }
    if (userOption == 5) // bad input
    {
        printWallet();
    }
    if (userOption == 6) // bad input
    {
        gotoNextTimeframe();
    }       
}

int main()
{
    // Creating 2 objects two enter two values from the datasheet
    OrderBookEntry obe1(5000.01, 0.001, "2020/03/17 17:01:24.884492", "BTC/USDT", OrderBookEntry::OrderBookType::bid);
    OrderBookEntry obe2(10.01, 0.01, "2020/03/17 17:15:24.884492", "BTC/USDT", OrderBookEntry::OrderBookType::ask);
    OrderBookEntry obe3(1199.01, 0.03, "2020/03/13 17:13:24.884392", "BTC/USDT", OrderBookEntry::OrderBookType::bid);
    OrderBookEntry obe4(10892.2, 23.1, "2020/04/13 12:13:24.884392", "BTC/USDT", OrderBookEntry::OrderBookType::bid);

    // Create a Vector of Objects
    std::vector<OrderBookEntry> entries;
    entries.push_back(obe1);
    entries.push_back(obe2);
    entries.push_back(obe3);
    entries.push_back(obe4);

    // Printing out entries from the the vector

    for (OrderBookEntry& E : entries)
    {
        std::cout << "Price of Entries: " << E.price << std::endl;

    }

    
    // Displaying the statistics from the functions
    double averagePrice = computeAveragePrice(entries);
    double lowPrice = computeLowPrice(entries);
    double highPrice = computeHighPrice(entries);
    double spread = computePriceSpread(entries);

    std::cout << " " << std::endl;

    std::cout << "### Basic statistics ###" << std::endl;
    std::cout << "Average Price: " << averagePrice << std::endl;
    std::cout << "Lowest Price: " << lowPrice << std::endl;
    std::cout << "Highest Price: " << highPrice << std::endl;
    std::cout << "Price Spread: " << spread<< std::endl;

    std::cout << "#######################" << std::endl;



    /* while (true)
    {
        printMenu();
        int userOption = getUserOption();
        processUserOption(userOption);
    } */
    return 0;
}