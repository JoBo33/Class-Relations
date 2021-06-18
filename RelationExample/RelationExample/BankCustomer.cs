using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RelationExample
{
    class BankCustomer
    {
        private int customerNumber;

        public int GetCustomerNumber()
        {
            return customerNumber;
        }
        public void SetCustomerNumber(int number)
        {
            customerNumber = number;
        }

        public BankCustomer(int customerNumber)
        {
            this.customerNumber = customerNumber;
        }

        public void FindCheckingAccount(CheckingAccount account)
        {
            Console.WriteLine("The account number of the customer with customer number {0} is: {1}", customerNumber, account.GetAccNumber());
        }
    }
}
