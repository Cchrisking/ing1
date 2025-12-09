int main(int argc, char const *argv[]) {
  int x = 3, y = 6, z=6;
  int xPoint1 = 3, yPoint1 = 5, zPoint1 = 6;
  int xPoint2 = 6, yPoint2 = 2, zPoint2 = 8;
  int xPoint3 = 12, yPoint3 = -3, zPoint3 = 5;
  x = 4;
  y = 8;
  z = 2;
if (estDansLaZone(x, y, z, 0, 0, 0, 10, 5, 5)) {
  /*
  to do ......
  */
 }
 /*declaratrion et initialisation*/
 Point monPoint = {4,9,7, 0,189,230, 'c'};
struct Point monPoint = { 1.0f, 2.0f, 3.0f };
printf("x: %.2f y: %.2f z: %.2f\n", monPoint.x, monPoint.y, monPoint.z);
// %.2f (%f) indique que l'on affiche que 2 chiffres après la virgule
printf("Veuillez entrer les coordonnées x, y, et z d'un point :\n");
scanf("%f %f %f", &monPoint.x, &monPoint.y, &monPoint.z);
printf("x: %.2f y: %.2f z: %.2f\n", monPoint.x, monPoint.y, monPoint.z);
return 0;
}
