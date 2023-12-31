#include <iostream>
#include <string>
#include <vector>
#include "OrderBookEntry.h"
#include "MerkelMain.h"

using namespace std;



int main()
{
    MerkelMain app{};
    app.printMenu();
}
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

    // cout << "The price is " << order1.price << endl;

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

   /*
    vector<OrderBookEntry> orders;

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

    //cout << "The price is " << orders[1].price << endl;

    for(OrderBookEntry& order : orders)
    {
        cout << "The price is: " << order.price << endl;
        cout << "The amount is: " << order.amount << endl;
        cout << "The timestamp is: " << order.timestamp << endl;
        cout << "The product is: " << order.product << endl;
        //cout << "OrderType is: " << order.orderType << endl1;
        cout << " " << endl;
    }

    /*
    for (unsigned int i = 0; i < orders.size(); ++i)
    {
        cout << "The price is " << orders.at(i).price << endl;
    }
    */