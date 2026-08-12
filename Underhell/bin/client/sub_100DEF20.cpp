int __stdcall sub_100DEF20(float a1, int a2, int a3)
{
  int v3; // esi
  int v4; // eax

  if ( -1.0 == a1 )
  {
    v3 = (sub_10076740() - a2) / 2;
  }
  else
  {
    if ( a1 >= 0.0 )
      v4 = (int)((double)sub_10076740() * a1);
    else
      v4 = (int)((double)sub_10076740() * (a1 + 1.0) - (double)a3);
    v3 = v4;
  }
  if ( v3 + a2 > sub_10076740() )
    return sub_10076740() - a2;
  if ( v3 >= 0 )
    return v3;
  return 0;
}
