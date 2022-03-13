#include <string>
#include <vector>
#include <algorithm>
#include<cmath>


using namespace std;

/*���α׷��ӽ� ����� kit - ���ǰ�� */
vector<int> one = { 1,2,3,4,5 };
vector<int> two = { 2,1,2,3,2,4,2,5 };
vector<int> thr = { 3,3,1,1,2,2,4,4,5,5 };

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> they(3);
    for (int i = 0; i < answers.size(); i++) {
        if (answers[i] == one[i % one.size()]) they[0]++;
        if (answers[i] == two[i % two.size()]) they[1]++;
        if (answers[i] == thr[i % thr.size()]) they[2]++;
    }
    int they_max = *max_element(they.begin(), they.end());
    for (int i = 0; i < 3; i++) {
        if (they[i] == they_max) answer.push_back(i + 1);
    }
    return answer;
}



/*���α׷��ӽ� ����� kit - ī�� */
vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int a1, a2;
    int sum = brown + yellow;
    int sqrtyellow = sqrt(yellow);

    for (int i = 1; i <= sqrtyellow; i++) {
        if (yellow % i == 0) {
            a2 = i;
            a1 = yellow / i;
        }
        if ((a1 + 2) * (a2 + 2) == sum) {
            a1 = a1 + 2;
            a2 = a2 + 2;
            break;
        }
    }
    answer.push_back(a1);
    answer.push_back(a2);
    return answer;
}