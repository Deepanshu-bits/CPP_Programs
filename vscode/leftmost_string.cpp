#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{

int count[255] = {0};

std::string sentence = "Hello World";
for(int i = 0; i < 3; i++)
{
   ++count[sentence[i]];
}
for(int i=0;i<255;i++)
cout<< count[i]<<" ";
for(int i = 0; i < 255; i++)
{
   if( count[i] > 0)
   {
      cout << "Letter "  << (char)(count[i]+'a')<< ": " << count[i] << '\n';
   }
}

    return 0;
}