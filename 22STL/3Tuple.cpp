#include <iostream>
#include <tuple> // this library is must for including the tuple function in the program.
using namespace std;
// this how the tupple msut include the tuple library in your program.
// tuple<datatype, dataype....> objectname as many dadatype u can write.
// make_tuple this hlep to make the tupple;
// to print out the elemen of the tuple use get.<index start from o to max-1 in this angular barckets>(in brakcets object name);
// u can comapre two tupple.
int main()
{
    tuple<int, string, string, int> t1, t2, t3, t4;
    t1 = make_tuple(1, "Durgesh", "04-04-1999", 4);
    t2 = make_tuple(2, "Vishal", "04-04-1999", 18);
    t3 = make_tuple(3, "More", "23-04-1999", 5);
    t4 = make_tuple(4, "Neeraj", "15-07-1998", 16);
    cout << "sr.no  Name   Dob " << endl;
    cout << get<0>(t1) << "   "<< get<1>(t1) << " " << get<2>(t1) << " " << get<3>(t1) << endl;
    cout << get<0>(t2) << "   "<< get<1>(t2) << " " << get<2>(t2) << endl;
    cout << get<0>(t3) << "   "<< get<1>(t3) << " " << get<2>(t3) << endl;
    cout << get<0>(t4) << "   "<< get<1>(t4) << " " << get<2>(t4);

    return 0;
}