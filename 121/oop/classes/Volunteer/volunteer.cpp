#include <iostream>

class Food {
public:
  std::string GetName() const { return name_; }
  void SetName(const std::string &name) { name_ = name; }
  int GetQuantity() const { return quantity_; }
  void SetQuantity(int quantity) { quantity_ = quantity; }

  std::string DisplayName() const {
    return std::to_string(quantity_) + " x " + name_;
  }

private:
  std::string name_;
  int quantity_;
};

class Volunteer {
public:
  Volunteer() : name_{"John Doe"}, branch_{"CSU Fullerton"} {}
  Volunteer(const std::string &name, const std::string &branch)
      : name_{name}, branch_{branch} {}
  Volunteer(const int payrate, const std::string &name)
      : payrate_{payrate}, name_{name} {}
  Volunteer(Volunteer &vol) : name_{vol.GetName()}, branch_{vol.GetBranch()} {}
  std::string GetName() const { return name_; }
  int GetPayrate() const { return payrate_; }
  void SetName(const std::string &name) { name_ = name; }
  std::string GetBranch() const { return branch_; }
  void SetBranch(const std::string &branch) { branch_ = branch; }

  void RequestFood(const std::string &name, int quantity) const {
    std::cout << std::to_string(quantity) << " x " << name << "requested.\n";
  }
  void RequestFood(const Food &f) const {
    std::cout << f.DisplayName() << "requested.\n";
  }

private:
  std::string name_;
  std::string branch_;
  int payrate_;
};

int main() {
  Volunteer tuffy{};
  Volunteer tiffy{"Tiffy", "CSU Fullerton"};
  Volunteer taffy{4, "Taffy"};
  std::cout << tuffy.GetName() << std::endl;
  std::cout << tiffy.GetName() << std::endl;
  std::cout << taffy.GetPayrate() << std::endl << std::endl;

  Volunteer joel{tiffy};
  std::cout << joel.GetName() << std::endl;
  return 0;
}
