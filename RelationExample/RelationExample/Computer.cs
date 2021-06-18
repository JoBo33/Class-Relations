using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RelationExample
{
    class Computer
    {
        private CPU cpu;
        private GraphicCard graphicCard;

        public Computer(CPU cpu, GraphicCard graphicCard)
        {
            this.cpu = cpu;
            this.graphicCard = graphicCard;
        }

        public void PrintCPUCores()
        {
            Console.WriteLine("The CPU of the computer has {0} cores", cpu.NumberOfCores);
        }
        public void PrintDRam()
        {
            Console.WriteLine("The graphic card of the computer has {0} gb dRam" , graphicCard.DRam);
        }
    }
}
