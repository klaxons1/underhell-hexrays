void __thiscall sub_10027DA0(int this, float *a2)
{
  unsigned __int8 v3; // al
  double v5; // st7
  int v6; // eax
  float *v7; // esi
  double v8; // st7
  int v9; // eax
  double v10; // st7
  float v11; // [esp+1Ch] [ebp+8h]

  v3 = *(_BYTE *)(this + 84);
  if ( v3 >= 0xFu )
  {
    if ( v3 <= 0x10u )
    {
      if ( RandomInt(0, 49) )
      {
        if ( !RandomInt(0, 49) )
        {
          RandomInt(0, 1);
          v11 = RandomFloat(-10.0, 10.0);
          v9 = RandomInt(0, 2);
          a2[4 * v9 + 3] = v11 + a2[4 * v9 + 3];
        }
      }
      else
      {
        v6 = RandomInt(0, 1);
        if ( v6 == 1 )
          v6 = 2;
        v7 = &a2[4 * v6];
        v8 = RandomFloat(1.0, 1.484);
        *v7 = v8 * *v7;
        v7[1] = v7[1] * v8;
        v7[2] = v8 * v7[2];
      }
    }
    else if ( v3 == 17 )
    {
      v5 = (*((float *)off_103DC81C + 3) - *(float *)(this + 96)) * 10.0 + 1.0;
      if ( v5 > 2.0 )
        v5 = 2.0;
      a2[1] = a2[1] * v5;
      a2[5] = a2[5] * v5;
      a2[9] = v5 * a2[9];
    }
  }
  v10 = *(float *)(this + 1400);
  if ( 1.0 != v10 )
  {
    *a2 = *a2 * v10;
    a2[1] = a2[1] * v10;
    a2[2] = a2[2] * v10;
    a2[4] = v10 * a2[4];
    a2[5] = a2[5] * v10;
    a2[6] = v10 * a2[6];
  }
}
