using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RelationExample
{
    class Quadrangle
    {
        protected float sideLengthA;
        protected float sideLengthB;
        protected float sideLengthC;
        protected float sideLengthD;

        public Quadrangle(float sideLengthA, float sideLengthB, float sideLengthC, float sideLengthD)
        {
            this.sideLengthA = sideLengthA;
            this.sideLengthB = sideLengthB;
            this.sideLengthC = sideLengthC;
            this.sideLengthD = sideLengthD;
        }

        public virtual float CalculatePerimeter()
        {
            return sideLengthA + sideLengthB + sideLengthC + sideLengthD;
        }
        public virtual void PrintPerimeter(float perimeter)
        {
            Console.WriteLine("The perimeter of the Quadrangle is: " + perimeter);
        }

        public virtual void PrintArea(float area)
        {
            Console.WriteLine("The Area of the Quadrangle is: " + area);
        }
    }
}
