#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Supermarket {
private:
    vector<int> cosmetics;
    vector<int> groceries;
    vector<int> beverages;
    int customerId;

public:
    Supermarket() {
        customerId = getCustomerId();
        loadPrices();
    }

    int getCustomerId() {
        int customer_id;
        ifstream fr("customerid.txt");
        if (!fr) {
            ofstream br("customerid.txt");
            br << "0";
            br.close();
            customer_id = 0;
        } else {
            fr >> customer_id;
            fr.close();
        }
        customer_id++;
        ofstream br("customerid.txt");
        br << customer_id;
        br.close();
        return customer_id;
    }

    void loadPrices() {
        loadPriceFile("price_cos.txt", cosmetics);
        loadPriceFile("price_gro.txt", groceries);
        loadPriceFile("price_bev.txt", beverages);
    }

    void loadPriceFile(const string& filename, vector<int>& items) {
        ifstream fr(filename);
        if (!fr) {
            ofstream br(filename);
            if (filename == "price_cos.txt") {
                br << "4\n10\n25\n50\n75";
            } else if (filename == "price_gro.txt") {
                br << "5\n100\n15\n50\n150\n160";
            } else if (filename == "price_bev.txt") {
                br << "5\n20\n65\n25\n10\n30";
            }
            br.close();
            fr.open(filename);
        }
        int n;
        fr >> n;
        items.resize(n);
        for (int i = 0; i < n; i++) {
            fr >> items[i];
        }
        fr.close();
    }

    int calculateTotal(const vector<int>& quantities, const vector<int>& items) {
        int total = 0;
        for (size_t i = 0; i < items.size(); i++) {
            total += items[i] * quantities[i];
        }
        return total;
    }

    void printBill(const string& name, double phone_number, const vector<int>& brr, const vector<int>& crr, const vector<int>& drr) {
        int cosmetics_total = calculateTotal(brr, cosmetics);
        int grocery_total = calculateTotal(crr, groceries);
        int beverage_total = calculateTotal(drr, beverages);
        int total = cosmetics_total + grocery_total + beverage_total;

        ofstream billFile("bills.txt", ios::app);

        cout << "\n\n";
        cout << "                          BILL SLIP\n";
        cout << "                   ----------------------\n";
        cout << "                      Customer Details\n";
        cout << "                  ------------------------\n";
        cout << "Customer Name : " << name << endl;
        cout << "Customer Mobile Number : " << phone_number << endl;
        cout << "Customer Serial No: " << customerId << endl;
        cout << "-------------------------------\n";

        billFile << "\n\n";
        billFile << "                          BILL SLIP\n";
        billFile << "                   ----------------------\n";
        billFile << "                      Customer Details\n";
        billFile << "                  ------------------------\n";
        billFile << "Customer Name : " << name << endl;
        billFile << "Customer Mobile Number : " << phone_number << endl;
        billFile << "Customer Serial No: " << customerId << endl;
        billFile << "-------------------------------\n";

        cout << "\nCOSMETICS\n";
        billFile << "\nCOSMETICS\n";
        for (size_t i = 0; i < cosmetics.size(); i++) {
            cout << "Item " << (i + 1) << " (per piece " << cosmetics[i] << ") : " << brr[i] << endl;
            billFile << "Item " << (i + 1) << " (per piece " << cosmetics[i] << ") : " << brr[i] << endl;
        }
        cout << "-------------------------------\n";
        billFile << "-------------------------------\n";

        cout << "\nGROCERIES\n";
        billFile << "\nGROCERIES\n";
        for (size_t i = 0; i < groceries.size(); i++) {
            cout << "Item " << (i + 1) << " (per packet " << groceries[i] << ") : " << crr[i] << endl;
            billFile << "Item " << (i + 1) << " (per packet " << groceries[i] << ") : " << crr[i] << endl;
        }
        cout << "-------------------------------\n";
        billFile << "-------------------------------\n";

        cout << "\nBEVERAGES\n";
        billFile << "\nBEVERAGES\n";
        for (size_t i = 0; i < beverages.size(); i++) {
            cout << "Item " << (i + 1) << " (per piece " << beverages[i] << ") : " << drr[i] << endl;
            billFile << "Item " << (i + 1) << " (per piece " << beverages[i] << ") : " << drr[i] << endl;
        }
        cout << "-------------------------------\n\n\n";
        billFile << "-------------------------------\n\n\n";

        cout << "Total Grocery  Price  : " << grocery_total << endl;
        cout << "Total Cosmetic  Price : " << cosmetics_total << endl;
        cout << "Total Beverage  Price : " << beverage_total << endl;
        cout << "Total Amount Of All Items: " << total << " Taka\n";
        cout << "-----------------------------------------------------------------------------\n\n";
        cout << "N.B: We Saved The List Of Purchased Items In Our History.\n\n\n";

        billFile << "Total Grocery  Price  : " << grocery_total << endl;
        billFile << "Total Cosmetic  Price : " << cosmetics_total << endl;
        billFile << "Total Beverage  Price : " << beverage_total << endl;
        billFile << "Total Amount Of All Items: " << total << " Taka\n";
        billFile << "-----------------------------------------------------------------------------\n\n";
        billFile << "N.B: We Saved The List Of Purchased Items In Our History.\n\n\n";

        billFile.close();
    }
};

int main() {
    Supermarket supermarket;

    while (true) {
        string name;
        double phone_number;
        vector<int> brr(4), crr(5), drr(5);

        cout << "Customer Name: ";
        getline(cin, name);
        cout << "Customer Mobile Number: ";
        cin >> phone_number;

        cout << "\nCOSMETICS\n";
        cout << "Body Soap (per piece 10): ";
        cin >> brr[0];
        cout << "Hair Cream (per piece 25): ";
        cin >> brr[1];
        cout << "Hair Spray (per piece 50): ";
        cin >> brr[2];
        cout << "Body Spray (per piece 75): ";
        cin >> brr[3];

        cout << "\nGROCERIES\n";
        cout << "Sugar (per packet 100): ";
        cin >> crr[0];
        cout << "Tea (per packet 15): ";
        cin >> crr[1];
        cout << "Coffee (per packet 50): ";
        cin >> crr[2];
        cout << "Rice (per packet 150): ";
        cin >> crr[3];
        cout << "Wheat (per packet 160): ";
        cin >> crr[4];

        cout << "\nBEVERAGES\n";
        cout << "MOJO (per piece 20): ";
        cin >> drr[0];
        cout << "BLU (per piece 65): ";
        cin >> drr[1];
        cout << "COCA COLA (per piece 25): ";
        cin >> drr[2];
        cout << "POTATO (per packet 10): ";
        cin >> drr[3];
        cout << "ALOOZ (per packet 30): ";
        cin >> drr[4];

        supermarket.printBill(name, phone_number, brr, crr, drr);

        char choice;
        cout << "Do you want to process another customer? (y/n): ";
        cin >> choice;
        cin.ignore(); // Clear the newline character from the input buffer
        if (choice != 'y' && choice != 'Y') {
            break;
        }
    }

    return 0;
}
