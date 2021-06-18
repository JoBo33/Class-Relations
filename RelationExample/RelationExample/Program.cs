using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RelationExample
{
    class Program
    {

        static void Main(string[] args)
        {
            #region Inheritance

            Console.WriteLine("Inheritance");
            Quadrangle quadrangle = new Quadrangle(5,3,7,6);
            quadrangle.PrintArea(10);
            quadrangle.PrintPerimeter(8);
            Rectangle rectangle = new Rectangle(5, 10);
            rectangle.PrintArea(rectangle.CalculateArea());
            rectangle.PrintPerimeter(rectangle.CalculatePerimeter());
            Square square = new Square(5);
            square.PrintArea(square.CalculateArea());
            square.PrintPerimeter(square.CalculatePerimeter());
            Console.WriteLine();
            #endregion


            #region Composition

            Console.WriteLine("Composition");
            Building building = new Building(new Room[4] { new Room(50,2.5f), new Room(70, 2.5f), new Room(10, 2.5f), new Room(100, 2.5f), });
            building.PrintRoomSize(building.CalculateVolume());
            Console.WriteLine();
            #endregion


            #region Aggregation

            Console.WriteLine("Aggregation");
            CPU cpu = new CPU(8);
            GraphicCard rtx = new GraphicCard(12);
            {
                Computer com1 = new Computer(cpu, rtx);
                com1.PrintCPUCores();
                com1.PrintDRam();
                {
                    GraphicCard gtx = new GraphicCard(6);
                    Computer com2 = new Computer(cpu, gtx);
                    com2.PrintCPUCores();
                    com2.PrintDRam();
                }
            }
            Computer com3 = new Computer(cpu, rtx);
            com3.PrintCPUCores();
            com3.PrintDRam();
            #endregion

            #region Association

            Console.WriteLine("Association");
            CheckingAccount account = new CheckingAccount(12345678);
            BankCustomer customer = new BankCustomer(87654321);
            customer.FindCheckingAccount(account);
            Console.WriteLine();
            #endregion

            Console.ReadKey();
        }
    }
}
