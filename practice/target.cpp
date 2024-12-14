#include<bits\stdc++.h>
using namespace std;


int main()
{
  int t;
  cin>>t;

  while(t-->0)
  {
    vector<pair<int,int>>pr;
    char arr[10][10];

    for(int i=0;i<10;i++)
    {
      for(int j=0;j<10;j++)
      {
        char ch;
        cin>>ch;
        arr[i][j]==ch;

        if(ch=='X')
        {
          pr.push_back(make_pair(i,j));
        }
      }
    }
    int score=0;

    for(int i=0;i<pr.size();i++)
    {
      int x = pr[i].first;
      int y = pr[i].second;

      if(x>3 && x<6 && y>3 && y<6)
      {
        score+=5;
      }
      else if(x>2 && x<7 && y>2 && y<7)
      {
        score+=4;
      }
      else if(x>1 && x<8 && y>1 && y<8)
      {
        score+=3;
      }
      else if(x>0 && x< 9&& y>0 && y<9)
      {
        score+=2;
      }
      else if( x>=0 && x<=9 && y>=0 && y<=9)
      {
        score+=1;
      }
    }
    cout<<score<<endl;
  }
}