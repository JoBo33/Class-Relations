using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RelationExample
{
    class Room
    {
        private int area;
        private float height;

        public Room(int area, float height)
        {
            this.area = area;
            this.height = height;
        }

        public float Height { get => height; set => height = value; }
        public int Area { get => area; set => area = value; }


    }
}
