#include <iostream>
#include <string>

int main() {
    // Declare variables for the user's input
    std::string name, city, college, profession, animal, pet_name;
    int age;

    // Ask the user to enter the required information
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cin.ignore();  // Ignore the newline character in the input buffer
    
    std::cout << "Enter the name of a city: ";
    std::getline(std::cin, city);
    
    std::cout << "Enter the name of a college: ";
    std::getline(std::cin, college);
    
    std::cout << "Enter a profession: ";
    std::getline(std::cin, profession);
    
    std::cout << "Enter a type of animal: ";
    std::getline(std::cin, animal);
    
    std::cout << "Enter a pet's name: ";
    std::getline(std::cin, pet_name);

    // Display the story
    std::cout << "\nThere once was a person named " << name << " who lived in " << city << ". ";
    std::cout << "At the age of " << age << ", " << name << " went to college at " << college << ". ";
    std::cout << name << " graduated and went to work as a " << profession << ". ";
    std::cout << "Then, " << name << " adopted a(n) " << animal << " named " << pet_name << ". ";
    std::cout << "They both lived happily ever after!\n";

    return 0;
}
