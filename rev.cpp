#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> maxHeap;

    // Inserting elements
    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(20);
    maxHeap.push(5);

    // Finding and removing max element
    std::cout << "Max element: " << maxHeap.top() << std::endl;

    // Removing the max element
    maxHeap.pop(); // O(log n)
    
    std::cout << "Next max element: " << maxHeap.top() << std::endl;

    return 0;
}
