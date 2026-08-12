int __stdcall sub_101B91F0(int a1)
{
  if ( a1 >= 1200 )
  {
    DevMsg(1, "%s: VPhysics exceeded collision check limit (%d)!!!\nInterpenetration may result!\n", "SERVER", a1);
    return 0;
  }
  else
  {
    DevMsg(1, "%s: VPhysics Collision detection getting expensive, check for too many convex pieces!\n", "SERVER");
    return 1200 - a1;
  }
}
