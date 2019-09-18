#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
	int answer = 0;
	int toDoIndex = 0;
	int sum = 0;
	int sec = 0;
	int truckSize = truck_weights.size();
	queue<int> q; // 다리 위의 트럭
	for (int i = 0; i < bridge_length; i++) {
		q.push(0);
	}

	toDoIndex = 0;
	while (!q.empty()) {
		sec++;
		sum -= q.front();
		q.pop();
		if (toDoIndex <= truckSize-1) {
			if (truck_weights[toDoIndex] + sum <= weight) {
				q.push(truck_weights[toDoIndex]);
				sum += truck_weights[toDoIndex];
				toDoIndex++;
			}
			else {
				q.push(0);
			}
		}
		
	}

	answer = sec;
	return answer;
}
int main() {
	vector<int> truck_weights;
	truck_weights.push_back(1);
	truck_weights.push_back(1);
	truck_weights.push_back(1);
	truck_weights.push_back(1);


	printf("%d", solution(2, 10, truck_weights));
	return 0;
}