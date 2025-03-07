#include <iostream>

int count_days_date(std::string date)
{
    int month = (int)(date[0] - 48 )*10+(int)(date[1]-48);
    int day = (int)(date[3] - 48)*10+(int)(date[4] - 48);
    
    return (month-1)*30 + day;
}

int main()
{
    int n, m;
    std::cin >> n; 

    int prices[360] = {};
    prices[0] = 14900;

    for(int i = n; i > 0; i--)
    {
        std::string date;
        int price;
        std::cin >> date >> price;

        
        prices[count_days_date(date)-1] = price; 
    }

    int last_price = 0;
    for(int i = 0; i < 360; i++)
    {
        if(prices[i] == 0)
            prices[i] = last_price;
        else
            last_price = prices[i];
    }

    std::cin >> m;

    for(int i = 0; i < m; i++)
    {
        std::string date;
        std::cin >> date;
        
        std::cout << prices[count_days_date(date)-1] << std::endl;
    }

    return 0;
}