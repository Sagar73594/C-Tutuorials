// ************************* STL MAPS ****************************//

// MAPS ARE USED TO REPLICATE ASSOCIATIVE ARRAYS
// MAPS CONTAIN SORTED KEY-VALUE PAIR IN WHICH EACH KEY IS UNIQUE AND CANNOT BE CHANGED, AND IT CAN BE INSERTED OR DELTED BUT CANNOT BE ALTERED.
// THE ASSCOIATIVE ARAY MEANS THAT THE INDEX OF  ARRAY CAN BE STRING INT FLOAT OR ANY DATATYPE.
// FOR EXAMPLE THE PYTHON - DICTIONARY DADATYPE.
// MAPS ARE ALAWYS SORTED ITS KEY IN SORTED ORDER. MEANS THE INDEX.
// IN CASE THE KEYS ARE IN STRING THEY ARE SORTED IN DICTIONARY ORDER.
// MOST IMP KEY MUST BE UNIQUE.
// TIME COMPLEXITY (OlogN)
#include <iostream>
#include <map> // this libaray is for the map.
using namespace std;

int main()
{
  map<int, int> person;

  // person.insert(pair<int, int>(1, 25));
  // person.insert({6, 50});
  // person.insert({2, 30});
  // person.insert({5, 45});
  // person.insert({3, 35});
  // person.insert({4, 40});
  // person.insert({-4, 40});
  // person.insert({-1, 40});

  person[1] = 40;
  person[2] = 30;
  person[3] = 20;
  person[4] = 10;
  person[5] = 110;
  person[6] = 60;

  map<int, int>::iterator itr;

  for (itr = person.begin(); itr != person.end(); itr++)
  {
    cout << itr->first << "  " << itr->second << " ";
  }
  cout << endl;

  if (person.count(7) == 1 && person.at(7) > 88)
  {
    cout << "yes" << endl;
  }
  else
  {
    cout << "no" << endl;
    /* code */
  }
  for (itr = person.begin(); itr != person.end(); itr++)
  {
    cout << itr->first << "  " << itr->second << " ";
  }
  cout << endl;

  if (person[6] > 49)
  {
    cout << "yes1" << endl;
  }
  else
  {
    cout << "no1" << endl;
  }
  for (itr = person.begin(); itr != person.end(); itr++)
  {
    cout << itr->first << "  " << itr->second << " ";
  }
  cout << endl;
  // cout << person.at(3) << endl;
  // cout << person[2] << endl;

  // cout << person.size() << endl;
  // cout << person.max_size() << endl;
  // cout << person.erase(4);

  // for (auto itr : person)
  // {
  //   cout << itr.first << "  " << itr.second << endl;
  // }

  return 0;
}
