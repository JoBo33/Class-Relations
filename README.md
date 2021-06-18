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
