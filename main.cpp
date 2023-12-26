#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum class OrderBookType
{
    bid,
    ask
};

class OrderBookEntry
{
public:
    OrderBookEntry(double _price,
                   double _amount,
                   string _timestamp,
                   string _product,
                   OrderBookType _orderType)
        : price(_price),
          amount(_amount),
          timestamp(_timestamp),
          product(_product),
          orderType(_orderType)
    {
        /*
        this->price = _price;
        this->amount = _amount;
        this->timestamp = _timestamp;
        this->product = _product;
        this->orderType = _orderType;
        */
    }

    double price;
    double amount;
    string timestamp;
    string product;
    OrderBookType orderType;
};

void printMenu()
{
    // 1 print help
    std::cout << "1: Print help " << std::endl;
    // 2 print exchange stat
    std::cout << "2: Print exchange stats " << std::endl;
    // 3 make an offer
    std::cout << "3: Make an offer " << std::endl;
    // 4 make a bid
    std::cout << "4: Make a bid " << std::endl;
    // 5 print wallet
    std::cout << "5: Print wallet " << std::endl;
    // 6 continue
    std::cout << "6: Continue " << std::endl;
}

void printHelp()
{
    std::cout << "Help - your aim is to make money. Analyse the market and make bids and offers" << std::endl;
}

void printMarketStats()
{
    std::cout << "Market looks good" << std::endl;
}

void enterOffer()
{
    std::cout << "Mark an offer" << std::endl;
}

void enterBid()
{
    std::cout << "Make a bid - enter the amount" << std::endl;
}

void printWallet()
{
    std::cout << "Your wallet is empty. " << std::endl;
}

void gotoNextTimeFrame()
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
    if (userOption <= 0 || userOption > 6)
    {
        std::cout << "Invalid choice. Choose 1-6" << std::endl;
    }
    if (userOption == 1)
    {
        printHelp();
    }
    if (userOption == 2)
    {
        printMarketStats();
    }
    if (userOption == 3)
    {
        enterOffer();
    }
    if (userOption == 4)
    {
        enterBid();
    }
    if (userOption == 5)
    {
        printWallet();
    }
    if (userOption == 6)
    {
        gotoNextTimeFrame();
    }
    std::cout << "====================" << std::endl;
}

int main()
{

    /*
    double price = 5319.450228;
    double amount = 0.00020075;
    std::string timestamp{"2020/03/17 17:01:24.884492"};
    std::string product{"BTC/USDT"};
    std::string orderType{"anything"};
    OrderBookType orderType = OrderBookType::bid;
    */

    // vectors
    /*
    std::vector<double> prices;
    vector<double> amounts;
    vector<string> timestamps;
    vector<string> products;
    vector<OrderBookType> orderTypes;

    prices.push_back(5000.01);
    amounts.push_back(0.001);
    timestamps.push_back("2020/03/17 17:01:24.884492");
    products.push_back("BTC/USDT");
    orderTypes.push_back(OrderBookType::bid);

    prices.push_back(100.01);
    amounts.push_back(0.001);
    timestamps.push_back("2020/03/17 17:01:24.884492");
    products.push_back("BTC/USDT");
    orderTypes.push_back(OrderBookType::bid);

    cout << "prices: " << prices[0] << endl;
    cout << "prices: " << prices[1] << endl;
    */

    /*
    while (true)
    {
        printMenu();
        int userOption = getUserOption();
        processUserOption(userOption);
        std::cout << "====================" << std::endl;
    }

    return 0;
    */

    /*
    order1.price = 100000;
    order1.amount = 0.002;
    order1.timestamp = "2020/03/17 17:01:24.884492";
    order1.product = "BTC/USDT";
    order1.orderType = OrderBookType::bid;
    */

    //cout << "The price is " << order1.price << endl;

    vector<OrderBookEntry> orders;

    /*
    OrderBookEntry order1{1000,
                          0.02,
                          "2020/03/17 17:01:24.884492",
                          "BTC/USDT",
                          OrderBookType::bid};

    OrderBookEntry order2{3000,
                          0.02,
                          "2020/03/17 17:01:24.884492",
                          "BTC/USDT",
                          OrderBookType::bid};

    orders.push_back(order1);
    orders.push_back(order2);
    */

    orders.push_back(OrderBookEntry{1000,
                                    0.02,
                                    "2020/03/17 17:01:24.884492",
                                    "BTC/USDT",
                                    OrderBookType::bid});

    orders.push_back(OrderBookEntry{3000,
                                    0.02,
                                    "2020/03/17 17:01:24.884492",
                                    "BTC/USDT",
                                    OrderBookType::bid});
    
    cout << "The price is " << orders[1].price << endl;

    
}