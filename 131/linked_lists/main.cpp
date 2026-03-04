#include <iostream>
#include <vector>

using namespace std;

// --- BOILERPLATE: DO NOT MODIFY ---
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Helper to quickly build lists for testing
Node* buildList(const vector<int>& vals) {
    if (vals.empty()) return nullptr;
    Node* head = new Node(vals[0]);
    Node* curr = head;
    for (size_t i = 1; i < vals.size(); ++i) {
        curr->next = new Node(vals[i]);
        curr = curr->next;
    }
    return head;
}
// -----------------------------------


// =========================================
// TODO 1: Find the Minimum Node
// =========================================
// Traverse the list and return a POINTER to the node with the smallest data value.
// If the list is empty, return nullptr.
Node* findMinimum(Node* head) {
    // TODO: Implement your logic here
    
    return nullptr;
}


// =========================================
// TODO 2: Find the Maximum Node
// =========================================
// Traverse the list and return a POINTER to the node with the largest data value.
// If the list is empty, return nullptr.
Node* findMaximum(Node* head) {
    // TODO: Implement your logic here
    
    return nullptr;
}


// =========================================
// TODO 3: Find the Middle Node
// =========================================
// Return a POINTER to the middle node of a linked list. 
// If there are two middle nodes (even length), return the second middle node.
// HINT: Use two pointers! One that moves one step, and one that moves two steps.

Node* findMiddle(Node* head) {
    // TODO: Implement your logic here
    
    return nullptr; 
}


// =========================================
// TODO 4: Detect a Cycle
// =========================================
// Return true if there is a cycle in the linked list, and false otherwise.
// A cycle exists if some node in the list can be reached again by continuously 
// following the 'next' pointer.
// HINT: Think about what happens if a slow runner and a fast runner are on a circular track!

bool hasCycle(Node* head) {
    // TODO: Implement your logic here
    
    return false;
}


// --- TESTING SUITE: DO NOT MODIFY ---
void runTests() {
    int passed = 0;
    int total = 9;

    cout << "--- Running Tests ---\n\n";

    // Build test lists
    Node* t1 = buildList({1, 2, 3, 4, 5});          // Odd length
    Node* t2 = buildList({1, 2, 3, 4, 5, 6});       // Even length
    Node* t3 = buildList({10, 2, 8, 1, 5, 9});      // Unsorted
    Node* t4 = buildList({-5, -10, 0, 3});          // Negatives
    Node* emptyList = nullptr;

    // Test 1 & 2: Min and Max of standard unsorted list
    Node* min1 = findMinimum(t3);
    Node* max1 = findMaximum(t3);
    if (min1 && min1->data == 1) { cout << "[PASS] Test 1: Minimum of {10,2,8,1,5,9} is 1\n"; passed++; }
    else { cout << "[FAIL] Test 1: Expected 1\n"; }
    
    if (max1 && max1->data == 10) { cout << "[PASS] Test 2: Maximum of {10,2,8,1,5,9} is 10\n"; passed++; }
    else { cout << "[FAIL] Test 2: Expected 10\n"; }

    // Test 3 & 4: Min and Max with negative numbers
    Node* min2 = findMinimum(t4);
    Node* max2 = findMaximum(t4);
    if (min2 && min2->data == -10) { cout << "[PASS] Test 3: Minimum with negatives is -10\n"; passed++; }
    else { cout << "[FAIL] Test 3: Expected -10\n"; }

    if (max2 && max2->data == 3) { cout << "[PASS] Test 4: Maximum with negatives is 3\n"; passed++; }
    else { cout << "[FAIL] Test 4: Expected 3\n"; }

    // Test 5: Min/Max of empty list (Edge Case)
    if (findMinimum(emptyList) == nullptr && findMaximum(emptyList) == nullptr) { 
        cout << "[PASS] Test 5: Empty list handled correctly (returns nullptr)\n"; passed++; 
    } else { cout << "[FAIL] Test 5: Empty list should return nullptr\n"; }

    // Test 6: Find middle of odd-length list
    Node* mid1 = findMiddle(t1);
    if (mid1 && mid1->data == 3) { cout << "[PASS] Test 6: Middle of {1,2,3,4,5} is 3\n"; passed++; }
    else { cout << "[FAIL] Test 6: Expected 3\n"; }

    // Test 7: Find middle of even-length list
    Node* mid2 = findMiddle(t2);
    if (mid2 && mid2->data == 4) { cout << "[PASS] Test 7: Middle of {1,2,3,4,5,6} is 4\n"; passed++; }
    else { cout << "[FAIL] Test 7: Expected 4\n"; }

    // Test 8: No cycle in a standard list
    if (!hasCycle(t1)) { cout << "[PASS] Test 8: No cycle detected in standard list\n"; passed++; }
    else { cout << "[FAIL] Test 8: Falsely detected a cycle\n"; }

    // Test 9: Detect a cycle
    Node* cycleList = buildList({1, 2, 3, 4, 5});
    // Manually create cycle: The '5' node points back to the '1' node
    cycleList->next->next->next->next->next = cycleList; 
    
    if (hasCycle(cycleList)) { cout << "[PASS] Test 9: Cycle successfully detected\n"; passed++; }
    else { cout << "[FAIL] Test 9: Failed to detect cycle\n"; }


    cout << "\nScore: " << passed << " / " << total << " Tests Passed.\n";
    if (passed == total) {
        cout << "Great job! All tests passed!\n";
    }
}

int main() {
    runTests();
    return 0;
}
