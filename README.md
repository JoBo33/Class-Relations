# Class-Relations
Representation of the relations between classes in C++ and C#

## Assoziation

Eine Assoziation stellt eine Beziehung zwischen den Objekten von Klassen dar. Die Darstellung kann Kardinalitäten, Assoziations- und Rollennamen enthalten.
Unterschieden wird zwischen unidirektionale (gerichtete) und bidirektionale Assoziation. Die bidirektionale Assoziation beschreibt eine gegenseitige Bekanntschaft zwischen den Klassen. D. h., dass ein Objekt der einen Klasse in der anderen Klasse verwendet wird und andersrum. Bei der gerichteten Assoziation ist die Beziehung einseitig, also weiß nur eine der beiden Klassen, dass die andere Klasse existiert. 

![Beispiel Assoziation](https://github.com/JoBo33/Class-Relations/blob/main/Examples/Association.png "Beispiel Assoziation")

#### Beispiel C#
```ruby
            CheckingAccount account = new CheckingAccount(12345678);
            BankCustomer customer = new BankCustomer(87654321);
            customer.FindCheckingAccount(account);
```

#### Beispiel C++
```ruby
	CheckingAccount account(1234567);
	BankCustomer customer(7654321);
	customer.FindCheckingAccount(account);
```

In dem obigen Beispiel ist zu erkennen, dass die Klasse "BankCustomer" bei der Methode "FindCheckingAccount" ein Objekt der Klasse "CheckingAccount" übergeben bekommt. Das bedeutet, dass die Klasse "BankCustomer" eine Beziehung zu der Klasse "CheckingAccount" hat. Da lediglich in einer Methode ein Objekt benötigt wird ist es eine Assoziation.


## Aggregation 

Eine Aggregation ist eine besondere Form der Assoziation. Die Beziehung wird häufig als eine "Has a"-Beziehung. An Hand dieser Bezeichnung kann erkennen, dass die eine Klasse ein Teil der anderen Klasse ist. Jedoch kann die Klasse die einen Teil der anderen Klasse bildet auch ohne die andere Klasse existieren.

![Beispiel Aggregation](https://github.com/JoBo33/Class-Relations/blob/main/Examples/Aggregation.png "Beispiel Aggregation")

#### Beispiel C#
```ruby
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
```

#### Beispiel C++
```ruby
            CPU cpu(8);
            GraphicCard rtx(12);
            {
              Computer com1(cpu, rtx);
              com1.PrintCPUCores();
              com1.PrintDRam(); 
              {
                GraphicCard gtx(6);
                Computer com2(cpu, gtx);
                com2.PrintCPUCores();
                com2.PrintDRam();
              }
            }
            Computer com3(cpu, rtx);
            com3.PrintCPUCores();
            com3.PrintDRam();
```
  
Wie im Beispiel zu erkennen, sind die Klassen "CPU" und "GraphicCard" Teile der Klasse "Computer", da sind bei der Erstellung eines Objects dem Konstruktor übergeben werden. Man kann die Objekte der Klassen "CPU" und "GraphicCard" jedoch auch nutzen, wenn der Lebenszyklus des Objektes "com1" beendet ist. Im Beispiel werden die Objekte "rtx" und "cpu" nicht nur bei dem Objekt "com1" verwendet sondern auch bei dem Objekt "com3".


## Komposition

Eine Komposition beschreibt eine noch engere Beziehung als die Aggregation. Der Unterschied zwischen der Aggregation und der Komposition ist, dass die Objekte der Teilklasse, die Teil der Aggregatklasse sind, denselben Lebenszyklus wie das Objekt der Aggregatklasse haben. Das bedeutet, wenn das Objekt der Aggregatklasse gelöscht wird, werden auch die dazugehörigen Objekte der Teilklasse gelöscht.

![Beispiel Komposition](https://github.com/JoBo33/Class-Relations/blob/main/Examples/Composition.png "Beispiel Komposition")

#### Beispiel C#
```ruby
            Building building = new Building(new Room[4] { new Room(50,2.5f), new Room(70, 2.5f), new Room(10, 2.5f), new Room(100, 2.5f)});
            building.PrintRoomSize(building.CalculateVolume());
```

#### Beispiel C++
```ruby
	   {
		Room room[4] = { Room(10, 2.5f), Room(10, 2.5f), Room(10, 2.5f), Room(10, 2.5f) };
		Building building(room);
		building.PrintRoomSize(building.CalculateVolume()); 
	   }
```
 Im Beispiel ist zu erkennen, dass die Objekte der Teilklassen (hier: Room), wie auch bei der Aggregation schon bei der Instanziierung benötigt werden. Hinzu kommt jedoch, dass die Objekte der Klasse "Room" gelöscht werden, sobald das Objekt der Klasse "Building" nicht mehr existiert, da z. B. beim C# Beispiel die Objekte der Teilklasse bei der  Erzeugung des Objektes der Klasse "Building" erzeugt werden.


 ## Vererbung
 
 Bei der Vererbung erbt eine sog. Subklasse von einer sog. Basisklasse. Das bedeutet, dass die Subklasse auf alle Attribute und Methoden, die nicht private sind, zugreifen kann und wenn die Basisklasse es erlaubt, kann die Subklasse diese auch anpassen/verändern. Aus diesem Grund spricht man auch davon, dass die Subklasse eine Spezialisierung von einer Basisklasse ist. 
 
 ![Beispiel Vererbung](https://github.com/JoBo33/Class-Relations/blob/main/Examples/Inheritance.png "Beispiel Vererbung")
 
 #### Beispiel C#
 ```ruby
	    class Rectangle : Quadrangle
```
 Oben ist zusehen, wie eine Vererbung in C# aussieht. Im Folgenden wird gezeigt, dass die Subklassen auf die Methoden der Oberklasse zugreifen kann.
 ```ruby
            Quadrangle quadrangle = new Quadrangle(5,3,7,6);
            quadrangle.PrintArea(10);
            quadrangle.PrintPerimeter(8);
            Rectangle rectangle = new Rectangle(5, 10);
            rectangle.PrintArea(rectangle.CalculateArea());
            rectangle.PrintPerimeter(rectangle.CalculatePerimeter());
```

#### Beispiel C++
```ruby
	    class Rectangle :
		    public Quadrangle
```
Oben ist zusehen, wie eine Vererbung in C++ aussieht. Im Folgenden wird gezeigt, dass die Subklassen auf die Methoden der Oberklasse zugreifen kann.
```ruby
	    Quadrangle quadrangle(5,3,9,6);
	    quadrangle.PrintPerimeter(quadrangle.CalculatePerimeter());
	    quadrangle.PrintArea(35);
	    Rectangle rectangle(5, 10);
	    rectangle.PrintPerimeter(rectangle.CalculatePerimeter());
	    rectangle.PrintArea(rectangle.CalculateArea());
```

Die Methoden "PrintPerimeter" und "PrintArea" sind erstmals in der Klasse "Quadrangle" definiert worden. Jedoch haben die Unterklassen diese geerbt, da sie public sind. Zudem sind sie mit dem Schlüsselwort "virtual" gekennzeichnet. Das bedeutet, dass die Unterklassen die Methoden überschreiben können aber nicht müssen. Im Beispiel werden die Methoden zwar überschrieben, an der Main-Methode würde sich jedoch nichts ändern, wenn diese nicht überschrieben werden würden, d. h., dass die Unterklassen auf die Methoden der Oberklassen zugreifen können.
