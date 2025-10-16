#include "VendingMachine_solved.cpp"

int main() {
    // 1. Setup the Vending Machine and Snacks
    VendingMachine machine("CSUF Library, 1st Floor");
    Snack chips("Chips", 1.75);
    Snack chocolate("Chocolate Bar", 2.00);
    Snack soda("Soda", 2.50);

    machine.addItem("A1", chips, 1); // Only 1 bag of chips
    machine.addItem("A2", chocolate, 5);
    machine.addItem("B1", soda, 3);
    
    machine.displayItems();

    // 2. Run Purchase Tests
    std::cout << "\n--- SIMULATING PURCHASES ---\n" << std::endl;

    // Test 1: Successful Purchase
    double myMoney = 5.00;
    std::cout << "Attempting to buy 'Soda' (B1) with $5.00..." << std::endl;
    if (machine.purchase("B1", myMoney)) {
        std::cout << "Success! Change received: $" << myMoney << std::endl;
    }
    std::cout << "--------------------" << std::endl;

    // Test 2: Insufficient Funds
    myMoney = 1.00;
    std::cout << "Attempting to buy 'Chips' (A1) with $1.00..." << std::endl;
    machine.purchase("A1", myMoney);
    std::cout << "--------------------" << std::endl;

    // Test 3: Buying last item
    myMoney = 2.00;
    std::cout << "Attempting to buy 'Chips' (A1) with $2.00..." << std::endl;
    if (machine.purchase("A1", myMoney)) {
         std::cout << "Success! Change received: $" << myMoney << std::endl;
    }
    std::cout << "--------------------" << std::endl;
    
    // Test 4: Item now out of stock
    myMoney = 2.00;
    std::cout << "Attempting to buy 'Chips' (A1) again..." << std::endl;
    machine.purchase("A1", myMoney);
    std::cout << "--------------------" << std::endl;
    
    // Test 5: Item does not exist
    myMoney = 3.00;
    std::cout << "Attempting to buy from non-existent slot 'C3'..." << std::endl;
    machine.purchase("C3", myMoney);
    std::cout << "--------------------" << std::endl;

    // 3. Test Restocking
    std::cout << "\n--- SIMULATING RESTOCK ---\n" << std::endl;
    std::cout << "Restocking 'Chips' (A1) with 10 bags." << std::endl;
    machine.restock("A1", 10);
    
    std::cout << "Attempting to restock non-existent slot 'C3'..." << std::endl;
    machine.restock("C3", 5);
    
    // 4. Display Final State
    machine.displayItems();

    return 0;
}
