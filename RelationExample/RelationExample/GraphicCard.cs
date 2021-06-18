using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RelationExample
{
    class GraphicCard
    {
        private int dRam;

        public int DRam { get => dRam; set => dRam = value; }

        public GraphicCard(int dRam)
        {
            this.dRam = dRam;
        }
    }
}
