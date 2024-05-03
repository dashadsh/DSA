// Here we can perform a level-order traversal of the binary tree 
// while maintaining the connection between nodes at the same level 
// using the next pointers. 

// We can utilize a QUEUE for the level-order traversal.

// Here's how you can approach it:

// Start with the root node and enqueue it into a queue.
// While the queue is not empty:
// a. Dequeue a node from the front of the queue.
// b. Connect the dequeued node with the node at the front of the queue (if it exists and belongs to the same level).
// c. Enqueue the left and right children of the dequeued node (if they exist).
// Repeat this process until the queue is empty.

#include <iostream>
#include <queue>

int main() {
    // Create a queue of integers
    std::queue<int> q;

    // Add elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Access the front element of the queue
    std::cout << "Front element of the queue: " << q.front() << std::endl;

    // Remove the front element
    q.pop();

    // Check if the queue is empty
    if (!q.empty()) {
        std::cout << "Front element of the queue after popping: " << q.front() << std::endl;
    } else {
        std::cout << "Queue is empty!" << std::endl;
    }

    return 0;
}
