double __thiscall sub_1013E5D0(char *this, float a2, float a3)
{
  int v3; // esi
  _DWORD *v4; // eax
  int v5; // edi
  int v6; // edx
  int v7; // edx
  int v8; // edx
  double v9; // st7
  int v10; // edx
  double v11; // st6
  float *v12; // esi
  int v13; // eax
  double v14; // st3
  double v15; // st1
  double v16; // st2
  double result; // st7
  double v18; // rt2
  double v19; // st3
  double v20; // st4
  float *v21; // ecx
  double v22; // st6
  int v23; // [esp+0h] [ebp-4h]

  if ( *(_DWORD *)(dword_1043B094 + 48) != 1 )
    return -1.0;
  v3 = 0;
  v4 = this + 44;
  v5 = 4;
  do
  {
    v6 = *(v4 - 11);
    if ( v6 == 3 || v6 == 2 )
      v3 += *(v4 - 7);
    if ( *v4 == 3 || *v4 == 2 )
      v3 += v4[4];
    v7 = v4[11];
    if ( v7 == 3 || v7 == 2 )
      v3 += v4[15];
    v8 = v4[22];
    if ( v8 == 3 || v8 == 2 )
      v3 += v4[26];
    v4 += 44;
    --v5;
  }
  while ( v5 );
  v23 = v3;
  if ( v3 )
  {
    v9 = 0.0;
    v10 = 15;
    v11 = 0.0;
    v12 = (float *)(this + 684);
    do
    {
      v13 = *((_DWORD *)v12 - 6);
      if ( v13 != 3 && v13 != 2 )
        break;
      v14 = a2 * 0.0099999998 - v9;
      v15 = (double)*((int *)v12 - 2) / (double)v23;
      v16 = *v12 - *(v12 - 1);
      if ( v15 >= v14 )
      {
        if ( a3 < 0.0 )
        {
          v20 = v14;
        }
        else
        {
          v18 = v14;
          v19 = 0.0099999998 * a3;
          v20 = v18;
          if ( v19 >= *(float *)&this[44 * v10 + 20] && v19 <= *(float *)&this[44 * v10 + 24] )
            return v19;
        }
        v21 = (float *)&this[44 * v10];
        result = 1.0 - (v20 / v15 * v16 + v11);
        if ( result <= v21[6] )
          v22 = result;
        else
          v22 = v21[6];
        if ( v22 < v21[5] )
          return v21[5];
        if ( result > v21[6] )
          return v21[6];
        return result;
      }
      v12 -= 11;
      --v10;
      v9 = v9 + v15;
      v11 = v11 + v16;
    }
    while ( v10 >= 0 );
  }
  return -1.0;
}
