//this is header file that defines what the CashRegister class looks like

class CashRegister{
    private:
        int itemCount; //count of items purchased
        double totalPrice; //sum of prices of items purchased
        double items[100]; //individual prices
    public:
        CashRegister();
        void clear(); //reset itemCount, totalPrice to 0
        void addItem(double price); //add an item to the items array
        double getTotal() const; //return the totalPrice 
        int getCount() const; //return the itemCount
        void displayItems();
};