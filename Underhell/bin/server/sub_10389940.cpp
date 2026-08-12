double __thiscall sub_10389940(_DWORD *this, float a2, float a3, float *a4, float *a5)
{
  double v7; // st5
  double v8; // st6
  float v9; // [esp+0h] [ebp-30h]
  float v10; // [esp+4h] [ebp-2Ch]
  float v11; // [esp+18h] [ebp-18h]
  float v12; // [esp+1Ch] [ebp-14h]
  float v13; // [esp+20h] [ebp-10h]
  float v14; // [esp+24h] [ebp-Ch]
  float v15; // [esp+28h] [ebp-8h]
  float v16; // [esp+2Ch] [ebp-4h]

  if ( sub_1004AE70(this, 0, 1) && sub_1004AE70(this, 14, 15) )
    return 0.0;
  if ( a2 <= 1000.0 )
  {
    v14 = *a4;
    v15 = a4[1];
    v16 = a4[2];
    v11 = *a5;
    v12 = a5[1];
    v13 = a5[2];
    off_10689714();
    off_10689714();
    if ( v15 * v12 + v11 * v14 + v16 * v13 <= 0.94999999 )
    {
      if ( fabs(a4[2]) >= 50.0 || a2 >= 1000.0 )
      {
        v7 = 300.0;
        if ( a3 <= 450.0 )
        {
          if ( a3 >= 300.0 )
            v7 = a3;
          v8 = 300.0;
        }
        else
        {
          v8 = 300.0;
          v7 = 450.0;
        }
        v10 = v8;
        v9 = v7;
        return sub_1001F0E0(v9, v10, 450.0, 1.0, 0.0);
      }
      else
      {
        return 1.0;
      }
    }
    else
    {
      return 8.0;
    }
  }
  else
  {
    if ( a2 > 2000.0 )
      return 0.0;
    return 0.000099999997;
  }
}
