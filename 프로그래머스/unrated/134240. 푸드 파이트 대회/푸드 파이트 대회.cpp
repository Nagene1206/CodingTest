#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    string left = "";
    string right = "";
    
    for(int i=1;i<food.size();i++)
    {
        for(int j=0;j<food[i]/2;j++)
        {
            left += to_string(i);
            right = to_string(i)+right;
        }
    }
    
    answer = left + "0" + right;
    
    return answer;
}