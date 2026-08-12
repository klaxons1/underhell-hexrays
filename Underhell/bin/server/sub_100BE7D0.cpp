double __thiscall sub_100BE7D0(_DWORD *this, int a2, int a3, float a4)
{
  int v5; // esi
  double v6; // st7

  if ( a2 )
  {
    v5 = a3;
    if ( a3 >= 0 )
    {
      v6 = a4;
      sub_10100260(a2, a3, a4, (int)&a2);
      a4 = v6;
      sub_100BD990(this + 228, v5, (float *)&a2);
    }
  }
  return a4;
}
