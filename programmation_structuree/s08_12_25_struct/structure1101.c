void lecturePoint(Point2D *point){
  printf("Entrez le  coordonnées de X:\n");
  scanf("%d", &point->x);
  printf("Entrez le  coordonnées de Y:\n");
  scanf("%d", &point->y);
}
void affichePoint(Point2D point){
  printf("Point: (%d, %d)\n", point.x, point.y);
}
float distance(Point2D a, Point2D b){
  int delatX = b.x-a.x;
  int delatY = b.x-a.x;
  int delta = pow (delatX, 2)-pow(delatY, 2);
  float distance = sqrt(delta);
  return distance;
}

int main(int argc, char const *argv[]) {
  /*Example*/
  Point2D pointDepart ={15, 12};
  Point2D pointArrivee;
  lecturePoint(&pointArrivee);
  printf("pointDepart ", affichePoint(pointDepart));
  printf("pointArrivee ", affichePoint(pointArrivee));
  return 0;
}
