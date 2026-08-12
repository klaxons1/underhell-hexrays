float *__thiscall sub_1000E6B0(float *this, float *a2, float a3)
{
  double v3; // st7
  double v4; // st6
  long double v6; // st6
  long double v7; // st6
  double v8; // st7
  double v9; // st5
  double v10; // st4
  double v11; // st5
  double v12; // st6
  double v13; // st6
  double v14; // st7
  double v15; // st5
  double v16; // st4
  float *result; // eax
  double v18; // st6
  double v19; // st2
  double v20; // st7
  float v21; // [esp+1Ch] [ebp-18h]
  float v22; // [esp+24h] [ebp-10h]
  float v23; // [esp+28h] [ebp-Ch]
  float v24; // [esp+2Ch] [ebp-8h]
  float v25; // [esp+2Ch] [ebp-8h]
  float v26; // [esp+30h] [ebp-4h]
  float v27; // [esp+40h] [ebp+Ch]

  v3 = 1.0;
  v4 = a3;
  if ( a3 <= 1.0 )
  {
    if ( v4 < 0.0 )
      v4 = 0.0;
  }
  else
  {
    v4 = 1.0;
  }
  v6 = v4 * (*(float *)(dword_10401754 + 44) - *(float *)(dword_1040170C + 44)) + *(float *)(dword_1040170C + 44);
  v22 = v6;
  v7 = fabs(v6) * 0.5;
  v26 = v7;
  v27 = 1.0 - v7;
  while ( 1 )
  {
    v21 = v3;
    v24 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            -1.0,
            LODWORD(v21))
        * v27;
    v25 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            -1.0,
            1.0)
        * v26
        + v24;
    v23 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            -1.0,
            1.0)
        * v27;
    v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
           dword_10413198,
           -1.0,
           1.0)
       * v26
       + v23;
    if ( v22 >= 0.0 )
    {
      v12 = 1.0;
      v11 = v25;
    }
    else
    {
      v9 = v25;
      if ( v25 < 0.0 )
      {
        v11 = -1.0 - v9;
        v10 = 1.0;
      }
      else
      {
        v10 = 1.0;
        v11 = 1.0 - v9;
      }
      v12 = v10;
      v8 = v8 < 0.0 ? -1.0 - v8 : v10 - v8;
    }
    if ( v8 * v8 + v11 * v11 <= v12 )
      break;
    v3 = v12;
  }
  v13 = v11;
  v14 = v8 * a2[1];
  v15 = this[6] * v14;
  v16 = this[7] * v14;
  result = this + 9;
  v18 = v13 * *a2;
  v19 = this[4] * v18 + this[1];
  v20 = v14 * this[8] + v18 * this[5] + this[2];
  this[9] = v15 + this[3] * v18 + *this;
  this[10] = v16 + v19;
  this[11] = v20;
  return result;
}
