#include <iostream>
using namespace std;
float cost(float quantity, string city, string product);
main()
{
   float quantity;
   string city, product;
   cout << "Enter City Name in lower case (sofia/plovdiv/varna) : ";
   cin >> city;
   cout << "Enter product name in lower case (cofee/water/beer/sweets/peanuts) : ";
   cin >> product;
   cout << "Enter Quantity : ";
   cin >> quantity;

   cout << "Total Cost: " << cost(quantity, city, product) << endl;
}

float cost(float quantity, string city, string product)
{
   float check;
   if (city == "sofia")
   {
      if (product == "cofee")
      {
         return 0.50 * quantity;
      }
      else if (product == "water")
      {
         return 0.80 * quantity;
      }
      else if (product == "beer")
      {
         return 1.20 * quantity;
      }
      else if (product == "sweets")
      {
         return 1.45 * quantity;
      }
      else if (product == "peanuts")
      {
         return 1.60 * quantity;
      }
      else
      {
         return 0;
      }
   }
   else if (city == "plovdiv")
   {
      if (product == "cofee")
      {
         return 0.40 * quantity;
      }
      else if (product == "water")
      {
         return 0.70 * quantity;
      }
      else if (product == "beer")
      {
         return 1.15 * quantity;
      }
      else if (product == "sweets")
      {
         return 1.30 * quantity;
      }
      else if (product == "peanuts")
      {
         return 1.50 * quantity;
      }
      else
      {
         return 0;
      }
   }
   else if (city == "varna")
   {
      if (product == "cofee")
      {
         return 0.45 * quantity;
      }
      else if (product == "water")
      {
         return 0.70 * quantity;
      }
      else if (product == "beer")
      {
         return (1.10 * quantity);
      }
      else if (product == "sweets")
      {
         return 1.35 * quantity;
      }
      else if (product == "peanuts")
      {
         return 1.55 * quantity;
      }
      else
      {
         return 0;
      }
   }
   else
      return 0;
}
