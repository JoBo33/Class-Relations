using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RelationExample
{
    class Square : Quadrangle
    {

        public Square(float sideLengthA) : base(sideLengthA, sideLengthA, sideLengthA, sideLengthA)
        {}

        public float CalculateArea()
        {
            return sideLengthA * sideLengthA;
        }

        public override void PrintPerimeter(float perimeter)
        {
            Console.WriteLine("The perimeter of the square is: " + perimeter);
        }

        public override void PrintArea(float area)
        {
            Console.WriteLine("The area of the square is: " + area);
        }
    }
}
