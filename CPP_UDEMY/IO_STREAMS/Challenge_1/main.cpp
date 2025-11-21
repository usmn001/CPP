// Section 19
// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using std::cout;
using std::setw;
using std::setfill;
using std::setprecision;
using std::left;
using std::right;
using std::endl;
using std::string;
using std::setprecision;
using std::fixed;

struct City {
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

int main()
{
    Tours tours
        { "Tour Ticket Prices from Miami",
            {
                {
                    "Colombia", { 
                        { "Bogota", 8778000, 400.98 },
                        { "Cali", 2401000, 424.12 },
                        { "Medellin", 2464000, 350.98 },
                        { "Cartagena", 972000, 345.34 } 
                    },
                },
                {
                    "Brazil", { 
                        { "Rio De Janiero", 13500000, 567.45 },
                        { "Sao Paulo", 11310000, 975.45 },
                        { "Salvador", 18234000, 855.99 }
                    },
                },
                {
                    "Chile", { 
                        { "Valdivia", 260000, 569.12 }, 
                        { "Santiago", 7040000, 520.00 }
                },
            },
                { "Argentina", { 
                    { "Buenos Aires", 3010000, 723.77 } 
                } 
            },
        }
    };


   
    
    string a = "Country";
    string b = "City";
    string c = "Population";
    string d = "Price";  

    int total_width {70};
    int cont_width  {20};
    int city_width  {20};
    int pop_width   {15};
    int cost_width  {15};
    
    
    // Unformatted display so you can see how to access the vector elements
   cout<<"0123456789012345678901234567890123456789012345678901234567890123456789012345678900123456789012345678901234567890"<<"\n";
   
   int title_length = tours.title.length();
    
    cout<<setw((total_width-tours.title.length())/2)<<""<<right<<tours.title<<"\n \n";   

    cout << setw(cont_width) << left << "Country" 
                   << setw(city_width) <<left<< "City" 
                   << setw(pop_width) <<right<<"Population" 
                   << setw(cost_width) <<right<< "Price" 
                   << "\n";

    cout <<setw(total_width) <<setfill('-') <<"\n";   // display total_width dashes

    cout<<setprecision(2)<<fixed;
    cout<<setfill(' ');                  
  for(Country country : tours.countries) 
   {   // loop through the countries

    for (size_t i = 0; i<country.cities.size(); ++i) {
            std::cout << std::setw(cont_width) << left <<  ((i == 0) ? country.name : "") // conditional operator
                           << std::setw(city_width) << left << country.cities.at(i).name 
                           << std::setw(pop_width-3) << right<< country.cities.at(i).population 
                           << std::setw(cost_width+2) << right << country.cities.at(i).cost 
                           << std::endl;
        }


    }
   
    cout<< std::endl << std::endl;
    return 0;
}
