/* 
 * File:   SOUNDS.h
 * Author: ALEX AXM
 *
 * Created on 26 de diciembre de 2015, 07:42 PM
 */

#ifndef SOUNDS_H
#define	SOUNDS_H

#ifdef	__cplusplus
extern "C" {
#endif

    unsigned int a=0;
    #define TRIGGER LATBbits.LATB5	//AQUI DEFINE EL PIN DE SALIDA DE FRECUENCIAS PARA CONECTAR BOCINA
    
    
    void SOUND(char nota,char sostenido,char escala, int ciclos);
    
   
    void SOUND(char nota,char sostenido,char escala,int ciclos)
    {
        if (sostenido=='#') sostenido=1;
        else sostenido=0;
        
        switch(escala)
        {   
            case 0:
                switch(nota)
        {
            case 'C': 
                
                    if (!sostenido)
                    {
                        while (a<ciclos)
                {
                TRIGGER=1; // DO0
                retardo_us(31250);
                TRIGGER=0;
                retardo_us(31250);
                a++;
                }
                a=0;
                      
                    }
                    else
                    {
                while (a<ciclos)
                {
                TRIGGER=1;// DO#0
                retardo_us(29411);
                TRIGGER=0;
                retardo_us(29411);
                a++;
                }
                a=0; 
                    }
            break;
             
            case 'D': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;// RE0
                retardo_us(27777);
                TRIGGER=0;
                retardo_us(27777);
                a++;
                }
                a=0;
                }
         
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;// RE#0
                retardo_us(25000);
                TRIGGER=0;
                retardo_us(25000);
                a++;
                }
                a=0;
                }
            break;
            case 'E': 
                while (a<ciclos)
                {
                TRIGGER=1;// MI0
                retardo_us(23809);
                TRIGGER=0;
                retardo_us(23809);
                a++;
                }
                a=0;
            break;
            case 'F':
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1; // FA0
                retardo_us(22727);
                TRIGGER=0;
                retardo_us(22727);
                a++;
                }
                a=0;
                }
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;// FA#0
                retardo_us(21739);
                TRIGGER=0;
                retardo_us(21739);
                a++;
                }
                a=0;
                }
            break;
            
            case 'G': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;// SOL0
                retardo_us(20000);
                TRIGGER=0;
                retardo_us(20000);
                a++;
                }
                a=0;
                }
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;// SOL#0
                retardo_us(19230);
                TRIGGER=0;
                retardo_us(19230);
                a++;
                }
                a=0;
                }
            break;
            case 'A': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;// LA0
                retardo_us(17857);
                TRIGGER=0;
                retardo_us(17857);
                a++;
                }
                a=0;
                }
                else
                {
               while (a<ciclos)
                {
                TRIGGER=1; // LA#0
                retardo_us(17241);
                TRIGGER=0;
                retardo_us(17241);
                a++;
                }
                a=0;
                }
            break;
            case 'B': 
                while (a<ciclos)
                {
                TRIGGER=1;// SI0
                retardo_us(16129);
                TRIGGER=0;
                retardo_us(16129);
                a++;
                }
                a=0;
            break;
            
           
        }
          break; 
            case 1:
                switch(nota)
        {
            case 'C': 
                
                    if (!sostenido)
                    {
                        while (a<ciclos)
                {
                TRIGGER=1; // DO1
                retardo_us(15151);
                TRIGGER=0;
                retardo_us(15151);
                a++;
                }
                a=0;
                      
                    }
                    else
                    {
                while (a<ciclos)
                {
                TRIGGER=1;// DO#1
                retardo_us(14285);
                TRIGGER=0;
                retardo_us(14285);
                a++;
                }
                a=0; 
                    }
            break;
             
            case 'D': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;// RE1
                retardo_us(13513);
                TRIGGER=0;
                retardo_us(13513);
                a++;
                }
                a=0;
                }
         
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;// RE#1
                retardo_us(12820);
                TRIGGER=0;
                retardo_us(12820);
                a++;
                }
                a=0;
                }
            break;
            case 'E': 
                while (a<ciclos)
                {
                TRIGGER=1;// MI1
                retardo_us(12195);
                TRIGGER=0;
                retardo_us(12195);
                a++;
                }
                a=0;
            break;
            case 'F':
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1; // FA1
                retardo_us(11363);
                TRIGGER=0;
                retardo_us(11363);
                a++;
                }
                a=0;
                }
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;// FA#1
                retardo_us(10869);
                TRIGGER=0;
                retardo_us(10869);
                a++;
                }
                a=0;
                }
            break;
            case 'G': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;// SOL1
                retardo_us(10204);
                TRIGGER=0;
                retardo_us(10204);
                a++;
                }
                a=0;
                }
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;// SOL#1
                retardo_us(9615);
                TRIGGER=0;
                retardo_us(9615);
                a++;
                }
                a=0;
                }
            break;
            case 'A': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;// LA1
                retardo_us(9099);
                TRIGGER=0;
                retardo_us(9099);
                a++;
                }
                a=0;
                }
                else
                {
               while (a<ciclos)
                {
                TRIGGER=1; // LA#1
                retardo_us(8620);
                TRIGGER=0;
                retardo_us(8620);
                a++;
                }
                a=0;
                }
            break;
            case 'B': 
                while (a<ciclos)
                {
                TRIGGER=1;// SI1
                retardo_us(8064);
                TRIGGER=0;
                retardo_us(8064);
                a++;
                }
                a=0;
            break;
            
           
        }
          break; 
            case 2:
                
                 switch(nota)
        {
            case 'C': 
                
                    if (!sostenido)
                    {
                        while (a<ciclos)
                {
                TRIGGER=1; // DO2
                retardo_us(7692);
                TRIGGER=0;
                retardo_us(7692);
                a++;
                }
                a=0;
                      
                    }
                    else
                    {
                while (a<ciclos)
                {
                TRIGGER=1;// DO#2
                retardo_us(7246);
                TRIGGER=0;
                retardo_us(7246);
                a++;
                }
                a=0; 
                    }
            break;
             
            case 'D': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;// RE2
                retardo_us(6849);
                TRIGGER=0;
                retardo_us(6849);
                a++;
                }
                a=0;
                }
         
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;// RE#2
                retardo_us(6410);
                TRIGGER=0;
                retardo_us(6410);
                a++;
                }
                a=0;
                }
            break;
            case 'E': 
                while (a<ciclos)
                {
                TRIGGER=1;// MI2
                retardo_us(6097);
                TRIGGER=0;
                retardo_us(6097);
                a++;
                }
                a=0;
            break;
            case 'F':
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1; // FA2
                retardo_us(5747);
                TRIGGER=0;
                retardo_us(5747);
                a++;
                }
                a=0;
                }
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;// FA#2
                retardo_us(5376);
                TRIGGER=0;
                retardo_us(5376);
                a++;
                }
                a=0;
                }
            break;
            case 'G': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;// SOL2
                retardo_us(5102);
                TRIGGER=0;
                retardo_us(5102);
                a++;
                }
                a=0;
                }
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;// SOL#2
                retardo_us(4807);
                TRIGGER=0;
                retardo_us(4807);
                a++;
                }
                a=0;
                }
            break;
            case 'A': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;// LA2
                retardo_us(4545);
                TRIGGER=0;
                retardo_us(4545);
                a++;
                }
                a=0;
                }
                else
                {
               while (a<ciclos)
                {
                TRIGGER=1; // LA#2
                retardo_us(4273);
                TRIGGER=0;
                retardo_us(4273);
                a++;
                }
                a=0;
                }
            break;
            case 'B': 
                while (a<ciclos)
                {
                TRIGGER=1;// SI2
                retardo_us(4032);
                TRIGGER=0;
                retardo_us(4032);
                a++;
                }
                a=0;
            break;
            
           
        }
          break; 
            case 3:
                
                 switch(nota)
        {
            case 'C': 
                
                    if (!sostenido)
                    {
                        while (a<ciclos)
                {
                TRIGGER=1; // DO3
                retardo_us(3816);
                TRIGGER=0;
                retardo_us(3816);
                a++;
                }
                a=0;
                      
                    }
                    else
                    {
                while (a<ciclos)
                {
                TRIGGER=1;// DO#3
                retardo_us(3597);
                TRIGGER=0;
                retardo_us(3597);
                a++;
                }
                a=0; 
                    }
            break;
             
            case 'D': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;// RE3
                retardo_us(3401);
                TRIGGER=0;
                retardo_us(3401);
                a++;
                }
                a=0;
                }
         
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;// RE#3
                retardo_us(3205);
                TRIGGER=0;
                retardo_us(3205);
                a++;
                }
                a=0;
                }
            break;
            case 'E': 
                while (a<ciclos)
                {
                TRIGGER=1;// MI3
                retardo_us(3030);
                TRIGGER=0;
                retardo_us(3030);
                a++;
                }
                a=0;
            break;
            case 'F':
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1; // FA3
                retardo_us(2857);
                TRIGGER=0;
                retardo_us(2857);
                a++;
                }
                a=0;
                }
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;// FA#3
                retardo_us(2702);
                TRIGGER=0;
                retardo_us(2702);
                a++;
                }
                a=0;
                }
            break;
            case 'G': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;// SOL3
                retardo_us(2551);
                TRIGGER=0;
                retardo_us(2551);
                a++;
                }
                a=0;
                }
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;// SOL#3
                retardo_us(2403);
                TRIGGER=0;
                retardo_us(2403);
                a++;
                }
                a=0;
                }
            break;
            case 'A': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;// LA3
                retardo_us(2272);
                TRIGGER=0;
                retardo_us(2272);
                a++;
                }
                a=0;
                }
                else
                {
               while (a<ciclos)
                {
                TRIGGER=1; // LA#3
                retardo_us(2145);
                TRIGGER=0;
                retardo_us(2145);
                a++;
                }
                a=0;
                }
            break;
            case 'B': 
                while (a<ciclos)
                {
                TRIGGER=1;// SI3
                retardo_us(2024);
                TRIGGER=0;
                retardo_us(2024);
                a++;
                }
                a=0;
            break;
            
           
        }
          break; 
            case 4:
            switch(nota)
        {
            case 'C': 
                
                    if (!sostenido)
                    {
                        while (a<ciclos)
                {
                TRIGGER=1; //262 HZ 3.816ms 3816 us DO4
                retardo_us(1908);
                TRIGGER=0;
                retardo_us(1908);
                a++;
                }
                a=0;
                      
                    }
                    else
                    {
                while (a<ciclos)
                {
                TRIGGER=1;//278 HZ 3.597ms 3597 us DO#4
                retardo_us(1798);
                TRIGGER=0;
                retardo_us(1798);
                a++;
                }
                a=0; 
                    }
            break;
             
            case 'D': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;//294 HZ 3.401ms 3401 us RE4
                retardo_us(1700);
                TRIGGER=0;
                retardo_us(1700);
                a++;
                }
                a=0;
                }
         
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;//311 HZ 3.215ms 3215 us RE#4
                retardo_us(1607);
                TRIGGER=0;
                retardo_us(1607);
                a++;
                }
                a=0;
                }
            break;
            case 'E': 
                while (a<ciclos)
                {
                TRIGGER=1;//330 HZ 3.030ms 3030 us MI4
                retardo_us(1515);
                TRIGGER=0;
                retardo_us(1515);
                a++;
                }
                a=0;
            break;
            case 'F':
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1; //349 HZ 2.865ms 2865 us FA4
                retardo_us(1433);
                TRIGGER=0;
                retardo_us(1433);
                a++;
                }
                a=0;
                }
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;//370 HZ 2.702ms 2702 us FA#4
                retardo_us(1351);
                TRIGGER=0;
                retardo_us(1351);
                a++;
                }
                a=0;
                }
            break;
            case 'G': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;//392 HZ 2.551ms 2551 us SOL4
                retardo_us(1275);
                TRIGGER=0;
                retardo_us(1275);
                a++;
                }
                a=0;
                }
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;//415 HZ 2.409ms 2409 us SOL#4
                retardo_us(1205);
                TRIGGER=0;
                retardo_us(1205);
                a++;
                }
                a=0;
                }
            break;
            case 'A': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;//440 HZ 2.272ms 2272 us LA4
                retardo_us(1136);
                TRIGGER=0;
                retardo_us(1136);
                a++;
                }
                a=0;
                }
                else
                {
               while (a<ciclos)
                {
                TRIGGER=1; //466 HZ 2.145ms 2145 us LA#4
                retardo_us(1073);
                TRIGGER=0;
                retardo_us(1073);
                a++;
                }
                a=0;
                }
            break;
            case 'B': 
                while (a<ciclos)
                {
                TRIGGER=1;//494 HZ 2.024ms 2024 us SI4
                retardo_us(1012);
                TRIGGER=0;
                retardo_us(1012);
                a++;
                }
                a=0;
            break;
            
           
        }
          break; 
          
            case 5:
                
                 switch(nota)
        {
            case 'C': 
                
                    if (!sostenido)
                    {
                        while (a<ciclos)
                {
                TRIGGER=1; // DO5
                retardo_us(956);
                TRIGGER=0;
                retardo_us(956);
                a++;
                }
                a=0;
                      
                    }
                    else
                    {
                while (a<ciclos)
                {
                TRIGGER=1;// DO#5
                retardo_us(902);
                TRIGGER=0;
                retardo_us(902);
                a++;
                }
                a=0; 
                    }
            break;
             
            case 'D': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;// RE5
                retardo_us(851);
                TRIGGER=0;
                retardo_us(851);
                a++;
                }
                a=0;
                }
         
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;// RE#5
                retardo_us(803);
                TRIGGER=0;
                retardo_us(803);
                a++;
                }
                a=0;
                }
            break;
            case 'E': 
                while (a<ciclos)
                {
                TRIGGER=1;// MI5
                retardo_us(758);
                TRIGGER=0;
                retardo_us(758);
                a++;
                }
                a=0;
            break;
            case 'F':
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1; // FA5
                retardo_us(715);
                TRIGGER=0;
                retardo_us(715);
                a++;
                }
                a=0;
                }
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;// FA#5
                retardo_us(675);
                TRIGGER=0;
                retardo_us(675);
                a++;
                }
                a=0;
                }
            break;
            case 'G': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;// SOL5
                retardo_us(637);
                TRIGGER=0;
                retardo_us(637);
                a++;
                }
                a=0;
                }
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;// SOL#5
                retardo_us(601);
                TRIGGER=0;
                retardo_us(601);
                a++;
                }
                a=0;
                }
            break;
            case 'A': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;// LA5
                retardo_us(568);
                TRIGGER=0;
                retardo_us(568);
                a++;
                }
                a=0;
                }
                else
                {
               while (a<ciclos)
                {
                TRIGGER=1; // LA#5
                retardo_us(536);
                TRIGGER=0;
                retardo_us(536);
                a++;
                }
                a=0;
                }
            break;
            case 'B': 
                while (a<ciclos)
                {
                TRIGGER=1;// SI5
                retardo_us(506);
                TRIGGER=0;
                retardo_us(506);
                a++;
                }
                a=0;
            break;
            
           
        }
          break; 
            case 6:
                 switch(nota)
        {
            case 'C': 
                
                    if (!sostenido)
                    {
                        while (a<ciclos)
                {
                TRIGGER=1; // DO6
                retardo_us(477);
                TRIGGER=0;
                retardo_us(477);
                a++;
                }
                a=0;
                      
                    }
                    else
                    {
                while (a<ciclos)
                {
                TRIGGER=1;// DO#6
                retardo_us(451);
                TRIGGER=0;
                retardo_us(451);
                a++;
                }
                a=0; 
                    }
            break;
             
            case 'D': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;// RE6
                retardo_us(425);
                TRIGGER=0;
                retardo_us(425);
                a++;
                }
                a=0;
                }
         
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;// RE#6
                retardo_us(402);
                TRIGGER=0;
                retardo_us(402);
                a++;
                }
                a=0;
                }
            break;
            case 'E': 
                while (a<ciclos)
                {
                TRIGGER=1;// MI6
                retardo_us(379);
                TRIGGER=0;
                retardo_us(379);
                a++;
                }
                a=0;
            break;
            case 'F':
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1; // FA6
                retardo_us(358);
                TRIGGER=0;
                retardo_us(358);
                a++;
                }
                a=0;
                }
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;// FA#6
                retardo_us(339);
                TRIGGER=0;
                retardo_us(339);
                a++;
                }
                a=0;
                }
            break;
            case 'G': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;// SOL6
                retardo_us(319);
                TRIGGER=0;
                retardo_us(319);
                a++;
                }
                a=0;
                }
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;// SOL#6
                retardo_us(301);
                TRIGGER=0;
                retardo_us(301);
                a++;
                }
                a=0;
                }
            break;
            case 'A': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;// LA6
                retardo_us(284);
                TRIGGER=0;
                retardo_us(284);
                a++;
                }
                a=0;
                }
                else
                {
               while (a<ciclos)
                {
                TRIGGER=1; // LA#6
                retardo_us(268);
                TRIGGER=0;
                retardo_us(268);
                a++;
                }
                a=0;
                }
            break;
            case 'B': 
                while (a<ciclos)
                {
                TRIGGER=1;// SI6
                retardo_us(253);
                TRIGGER=0;
                retardo_us(253);
                a++;
                }
                a=0;
            break;
            
           
        }
          break; 
          
            case 7:
                 switch(nota)
        {
            case 'C': 
                
                    if (!sostenido)
                    {
                        while (a<ciclos)
                {
                TRIGGER=1; // DO7
                retardo_us(239);
                TRIGGER=0;
                retardo_us(239);
                a++;
                }
                a=0;
                      
                    }
                    else
                    {
                while (a<ciclos)
                {
                TRIGGER=1;// DO#7
                retardo_us(225);
                TRIGGER=0;
                retardo_us(225);
                a++;
                }
                a=0; 
                    }
            break;
             
            case 'D': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;// RE7
                retardo_us(213);
                TRIGGER=0;
                retardo_us(213);
                a++;
                }
                a=0;
                }
         
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;// RE#7
                retardo_us(202);
                TRIGGER=0;
                retardo_us(202);
                a++;
                }
                a=0;
                }
            break;
            case 'E': 
                while (a<ciclos)
                {
                TRIGGER=1;// MI7
                retardo_us(189);
                TRIGGER=0;
                retardo_us(189);
                a++;
                }
                a=0;
            break;
            case 'F':
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1; // FA7
                retardo_us(179);
                TRIGGER=0;
                retardo_us(179);
                a++;
                }
                a=0;
                }
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;// FA#7
                retardo_us(168);
                TRIGGER=0;
                retardo_us(168);
                a++;
                }
                a=0;
                }
            break;
            case 'G': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;// SOL7
                retardo_us(159);
                TRIGGER=0;
                retardo_us(159);
                a++;
                }
                a=0;
                }
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;// SOL#7
                retardo_us(150);
                TRIGGER=0;
                retardo_us(150);
                a++;
                }
                a=0;
                }
            break;
            case 'A': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;// LA7
                retardo_us(142);
                TRIGGER=0;
                retardo_us(142);
                a++;
                }
                a=0;
                }
                else
                {
               while (a<ciclos)
                {
                TRIGGER=1; // LA#7
                retardo_us(134);
                TRIGGER=0;
                retardo_us(134);
                a++;
                }
                a=0;
                }
            break;
            case 'B': 
                while (a<ciclos)
                {
                TRIGGER=1;// SI7
                retardo_us(126);
                TRIGGER=0;
                retardo_us(126);
                a++;
                }
                a=0;
            break;
            
           
        }
          break; 
            case 8:
                 switch(nota)
        {
            case 'C': 
                
                    if (!sostenido)
                    {
                        while (a<ciclos)
                {
                TRIGGER=1; // DO8
                retardo_us(119);
                TRIGGER=0;
                retardo_us(119);
                a++;
                }
                a=0;
                      
                    }
                    else
                    {
                while (a<ciclos)
                {
                TRIGGER=1;// DO#8
                retardo_us(113);
                TRIGGER=0;
                retardo_us(113);
                a++;
                }
                a=0; 
                    }
            break;
             
            case 'D': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;// RE8
                retardo_us(106);
                TRIGGER=0;
                retardo_us(106);
                a++;
                }
                a=0;
                }
         
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;// RE#8
                retardo_us(100);
                TRIGGER=0;
                retardo_us(100);
                a++;
                }
                a=0;
                }
            break;
            case 'E': 
                while (a<ciclos)
                {
                TRIGGER=1;// MI8
                retardo_us(95);
                TRIGGER=0;
                retardo_us(95);
                a++;
                }
                a=0;
            break;
            case 'F':
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1; // FA8
                retardo_us(89);
                TRIGGER=0;
                retardo_us(89);
                a++;
                }
                a=0;
                }
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;// FA#8
                retardo_us(84);
                TRIGGER=0;
                retardo_us(84);
                a++;
                }
                a=0;
                }
            break;
            case 'G': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;// SOL8
                retardo_us(80);
                TRIGGER=0;
                retardo_us(80);
                a++;
                }
                a=0;
                }
                else
                {
                while (a<ciclos)
                {
                TRIGGER=1;// SOL#8
                retardo_us(75);
                TRIGGER=0;
                retardo_us(75);
                a++;
                }
                a=0;
                }
            break;
            case 'A': 
                if (!sostenido)
                {
                while (a<ciclos)
                {
                TRIGGER=1;// LA8
                retardo_us(71);
                TRIGGER=0;
                retardo_us(71);
                a++;
                }
                a=0;
                }
                else
                {
               while (a<ciclos)
                {
                TRIGGER=1; // LA#8
                retardo_us(67);
                TRIGGER=0;
                retardo_us(67);
                a++;
                }
                a=0;
                }
            break;
            case 'B': 
                while (a<ciclos)
                {
                TRIGGER=1;// SI8
                retardo_us(63);
                TRIGGER=0;
                retardo_us(63);
                a++;
                }
                a=0;
            break;
            
           
        }
          break; 
        }
            
        
        if (nota=='S')
        {
                while (a<ciclos)
                {
                TRIGGER=0;
                retardo_ms(1);
                a++;
                }
                a=0;
        }
       
       
        
        
    }



#ifdef	__cplusplus
}
#endif

#endif	/* SOUNDS_H */

