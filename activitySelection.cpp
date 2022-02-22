#include<bits/stdc++.h>
#include<string>
using namespace std;

struct activity {
  string name;
  int start;
  int end;
};

bool compare(activity a1, activity a2) 
{
  if(a1.end < a2.end)
    return 1;
  else
    return 0;
}

int main() {

  //taking in Input.
  struct activity newact[6];

  for(int i=0; i<6; i++) {
    cin >> newact[i].name;
    cin >> newact[i].start;
    cin >> newact[i].end;
  }

  // Initial sort.

  sort(newact, newact+5, compare);
  cout << "--------" << endl;
  for(int i=0; i<6; i++) {
    cout << newact[i].name << endl;
    cout << newact[i].start << endl;
    cout << newact[i].end << endl;
    cout << "-x-" << endl;
  }

  // Printing order of right execution
  int end=newact[0].end;
  for(int i=0; i<6; i++) {
    if(i==0) {
      cout << newact[i].name << " ->";
    }
    else {
      if(newact[i].start >= end) {
        cout << newact[i].name << " ->";
        end = newact[i].end;
      }
    }
  }
}
