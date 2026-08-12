void __thiscall sub_10313230(float *this, float *a2, float *a3, float *a4)
{
  double i; // st7
  double v6; // st7
  double v7; // st5
  float v8; // [esp+Ch] [ebp-Ch]
  float v9; // [esp+24h] [ebp+Ch]

  *a4 = *a3;
  a4[1] = a3[1];
  a4[2] = a3[2];
  for ( i = 1.0; ; i = 1.0 )
  {
    v8 = i;
    v9 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           -1.0,
           LODWORD(v8));
    v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           -1.0,
           1.0);
    v7 = v9;
    if ( v6 * v6 + v7 * v7 <= 1.0 )
      break;
  }
  *a4 = v7 * this[1029] + *a4;
  a4[1] = v6 * this[1029] + a4[1];
  *a4 = *a4 - *a2;
  a4[1] = a4[1] - a2[1];
  a4[2] = a4[2] - a2[2];
  off_10689714();
}
