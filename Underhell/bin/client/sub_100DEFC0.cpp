int __stdcall sub_100DEFC0(float a1, int a2)
{
  int v2; // eax
  int v3; // esi

  if ( -1.0 == a1 )
  {
    v2 = (int)((double)(sub_10076720() - a2) * 0.5);
  }
  else if ( a1 >= 0.0 )
  {
    v2 = (int)((double)sub_10076720() * a1);
  }
  else
  {
    v2 = (int)((double)sub_10076720() * (a1 + 1.0) - (double)a2);
  }
  v3 = v2;
  if ( v2 + a2 > sub_10076720() )
    return sub_10076720() - a2;
  if ( v3 >= 0 )
    return v3;
  return 0;
}
