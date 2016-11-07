/*------ ----------Example Demo------------------------
Compilation Command: 

1) g++ -o demo demo.cpp csv_parser.cpp

                     (OR)

1) g++ -c csv_parser.cpp -std=c++11
2) g++ -c demo.cpp -std=c++11
3) g++ demo.o csv_parser.o -o demo -std=c++11
------------------------------------------------------*/

#include "csv_parser.hpp"
#include <string>
#include <vector>

using namespace std;
int main()
{
  csv_parser csv("test_3.csv");
  
  //For getting values according to row number and column number. Remember it starts from (1,1) and not (0,0)
  string value = csv.get_value(3,4);
  
  //For getting a particular row in the CSV file
  string line = csv.get_line(3);
  
  //For getting number of fields in a particular row.
  int total_fields = csv.fields(csv.get_line(3));
  int total_lines = csv.total_lines();
  string a = "3.444";
  double v = std::stod(a);
  cout << "v is: " << v << endl;
  cout<<"Value in (3,4) :"<<value<<endl;
  cout <<"Total lines: " << total_lines <<endl;
  cout<<"Row 3: "<<line<<endl;
  cout<<"Total fields in row 3:"<<total_fields<<endl;
  std::vector< std::vector<double> > matrix = csv.get_matrix();
  cout<<"matrix.size: " << matrix.size() << endl;
  
}
