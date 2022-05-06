using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Relations
{

    #region Vererbung
    public class Schachfigur
    {
        public bool BereitsGeschlagen(bool geschlagen)
        {
            return geschlagen;
        }
    }

    class Dame : Schachfigur
    {

    }

    class Koenig : Schachfigur
    {

    }

    #endregion

    #region Komposition
    // Objete der Klassen, die Teile anderer Klassen sind, werden als Klassenvariablen genutzt;
    class Auto
    {
        private Motor motor;
        private Reifen reifen;
        private Sitze sitze;

        public Auto(Motor motor, Reifen reifen, Sitze sitze)
        {
            this.motor = motor;
            this.reifen = reifen;
            this.sitze = sitze;
        }
    }
    class Motor
    {

    }
    class Reifen
    {
        private int anzahlReifen;
    }
    class Sitze
    {
        private int anzahlSitze;
    }
    #endregion

    #region Aggregation
    class Schule
    {
        private Lehrer lehrer;

        public Schule(Lehrer lehrer)
        {
            this.lehrer = lehrer;
        }
    }

    class Lehrer
    {
        private string name;

        public Lehrer(string name)
        {
            this.name = name;
        }
    }
    #endregion

    #region Assoziation
    class Kreis
    {
        private float radius;

        public Kreis(float radius)
        {
            this.radius = radius;
        }
        public void gebeMittelpunktUndRadiusAus(Punkt punkt)
        {
            Console.WriteLine("Der Mittelpunkt ist: ({0} / {1}) und der Kreis hat einen Radius von {3} cm." , 
                punkt.GetXKoord(), punkt.GetYKoord(), radius);
        }
    }
    class Punkt
    {
        private float xKoord, yKoord;

        public Punkt(float x, float y)
        {
            xKoord = x;
            yKoord = y;
        }

        public float GetXKoord()
        {
            return xKoord;
        }
        public float GetYKoord()
        {
            return yKoord;
        }
    }
    #endregion



    class Program
    {
        static void Main(string[] args)
        {
            Dame dame = new Dame();
            dame.BereitsGeschlagen(false);


            Auto auto = new Auto(new Motor(), new Reifen(), new Sitze());
            

            Lehrer bob = new Lehrer("Bob");
            {
                Schule schule = new Schule(bob);
            }
            Console.WriteLine(bob.ToString()); //der Lehrer existiert unabhängig von der Schule


            Kreis kreis = new Kreis(5);
            Punkt punkt = new Punkt(10, 20);
            kreis.gebeMittelpunktUndRadiusAus(punkt);


            Console.ReadLine();
        }
    }
}
