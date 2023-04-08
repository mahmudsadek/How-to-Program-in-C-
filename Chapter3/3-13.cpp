#include <iostream>
using namespace std;

class Invoice {

    private:
        string partNumber;
        string partDiscription;
        int quantity;
        float pricePerItem;
    
    public:

        Invoice(string partNum, string partDisc, int quantityNum, float priceNum)
        {   
            setPartNumber(partNum);
            setPartDiscription(partDisc);
            setQuantity(quantityNum);
            setPricePerItem(priceNum);
        }

        void setPartNumber(string number)
        {
            partNumber = number;
        }

        void setPartDiscription(string discription)
        {
            partDiscription = discription;
        }

        void setQuantity(int number)
        {
            if (number >= 0){
                quantity = number;
            }else {
                quantity = 0;
            }
        }

        void setPricePerItem(float price)
        {
            if (price >= 0){
                pricePerItem = price;
            }else {
                pricePerItem = 0;
            }
        }

        string getPartNumber()
        {
            return partNumber;
        }

        string getPartDiscription()
        {
            return partDiscription;
        }

        int getQuantity()
        {
            return quantity;
        }

        float getPricePerItem()
        {
            return pricePerItem;
        }

        int getInvoiceAmount ()
        {
            return getQuantity()*getPricePerItem();
        }
};

int main() {

    Invoice invoice("000wqd", "good item", 3, 23.99);
    cout << invoice.getInvoiceAmount() << endl;
    invoice.setPricePerItem(19.98);
    cout << invoice.getPricePerItem() << endl;
}