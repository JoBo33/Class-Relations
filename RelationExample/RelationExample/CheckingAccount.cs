using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RelationExample
{
    class CheckingAccount
    {
        private int accNumber;

        public int GetAccNumber()
        {
            return accNumber;
        }
        public void SetAccNumber(int number)
        {
            accNumber = number;
        }

        public CheckingAccount(int accNumber)
        {
            this.accNumber = accNumber;
        }


    }
}
