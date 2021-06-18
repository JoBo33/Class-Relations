using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RelationExample
{
    class Rectangle  : Quadrangle
    {

        public Rectangle(float sideLengthA, float sideLengthB) : base(sideLengthA, sideLengthB, sideLengthA, sideLengthB)
        {}

        public float CalculateArea()
        {
            return sideLengthA * sideLengthB;
        }

        public override void PrintPerimeter(float perimeter)
        {
            Console.WriteLine("The perimeter of the rectangle is: " + perimeter);
        }

        public override void PrintArea(float area)
        {
            Console.WriteLine("The area of the rectangle is: " + area);
        }
    }
}
