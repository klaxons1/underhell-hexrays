double __thiscall sub_101E3350(_BYTE *this, float a2, int a3)
{
  double v4; // st7
  double v5; // st7
  float v7; // [esp+10h] [ebp-4h]

  v7 = sub_101E3230((int)this, a2, 0);
  v4 = 1.0;
  if ( (this[92] & 2) != 0 )
  {
    v5 = sub_101E32F0((int)this, a2);
    if ( a3 )
    {
      if ( a3 == 1 && v5 < 0.5 )
        return (v5 + v5) * v7;
    }
    else if ( v5 > 0.5 )
    {
      v5 = 1.0 - v5;
      return (v5 + v5) * v7;
    }
    v4 = (float)1.0;
  }
  return v4 * v7;
}
