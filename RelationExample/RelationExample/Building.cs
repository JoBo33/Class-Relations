using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RelationExample
{
    class Building
    {
        private Room[] room;

        public Building(Room[] room)
        {
            this.room = room;
        }

        public float CalculateVolume()
        {
            float volume = 0;
            for (int i = 0; i < room.Length; i++)
            {
                volume += room[i].Area * room[i].Height;
            }
            return volume;
        }

        public void PrintRoomSize(float size)
        {
            Console.WriteLine("The volume of the building is: " + size);
        }
    }
}
