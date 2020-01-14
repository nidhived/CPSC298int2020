#include <iostream>
using namespace std;

int main(int argc, cahr **argv){

  cout << "command line arg count:" << argc << endl;
  if (argc < 2){
    cout << "invalid usage. pls provide input" << endl;
    exit(-1);
  }
  cout << "hello world. my name is: " <<argv[1] << endl;
//  cout << "adding 1 more";
  return 0;
}
