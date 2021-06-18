using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RelationExample
{
    class CPU
    {
        private int numberOfCores;
        public int NumberOfCores { get => numberOfCores; set => numberOfCores = value; }
        
        public CPU (int cores)
        {
            numberOfCores = cores;
        }

    }
}
