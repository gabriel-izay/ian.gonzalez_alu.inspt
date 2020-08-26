//tp2_ej1_a_b_c_gonzalezZayas
#include<stdio.h>
void main(){
int​ x = ​2​, y = ​6​, z = ​4;
​if​ (x>y || x<z)
{
​printf​(​"Verdadero"​);
}
​else
{
​printf​(​"Falso"​);
}
}
void mainb(){
    int​ x = ​2​, y = ​6​;
​if​ (x < y && x == y)
{
​printf​(​"Verdadero"​);
}
​else
{
​printf​(​"Falso"​);
}
}
void mainC (){
    int​ x = ​2​, y = ​6​;
​if​ ((x < y && x != y) || !(x == y))
{
​printf​(​"Verdadero"​);
}
​else
{
​printf​(​"Falso"​);
}
}
