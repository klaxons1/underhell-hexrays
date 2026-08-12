int __thiscall sub_1010C5D0(
        float *this,
        _BYTE *a2,
        _BYTE *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9,
        int a10,
        int a11,
        int a12)
{
  float *v12; // eax
  float *v13; // esi
  _BYTE *v14; // eax
  _BYTE *v15; // eax
  float *v16; // ecx
  float *i; // edx
  int result; // eax

  v12 = (float *)sub_1042FCC0(56);
  if ( v12 )
  {
    v12[3] = NAN;
    v12[4] = NAN;
    v12[6] = NAN;
    v12[7] = 0.0;
    v12[10] = NAN;
    v12[11] = 0.0;
    v13 = v12;
  }
  else
  {
    v13 = 0;
  }
  v14 = a2;
  *v13 = *(float *)(dword_106B31C8 + 12) + a9;
  if ( !a2 || !*a2 )
    v14 = 0;
  *((_DWORD *)v13 + 1) = v14;
  v15 = a3;
  v13[6] = NAN;
  if ( !a3 || !*a3 )
    v15 = 0;
  *((_DWORD *)v13 + 2) = v15;
  if ( a10 )
    v13[3] = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)a10 + 8))(a10);
  else
    v13[3] = NAN;
  if ( a11 )
    v13[4] = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)a11 + 8))(a11);
  else
    v13[4] = NAN;
  *((_DWORD *)v13 + 7) = a4;
  *((_DWORD *)v13 + 8) = a5;
  *((_DWORD *)v13 + 9) = a6;
  *((_DWORD *)v13 + 10) = a7;
  *((_DWORD *)v13 + 5) = a12;
  v16 = this;
  *((_DWORD *)v13 + 11) = a8;
  for ( i = (float *)*((_DWORD *)this + 12); i; i = (float *)*((_DWORD *)i + 12) )
  {
    if ( *v13 < (double)*i )
      break;
    v16 = i;
  }
  v13[12] = v16[12];
  *((_DWORD *)v13 + 13) = v16;
  *((_DWORD *)v16 + 12) = v13;
  result = *((_DWORD *)v13 + 12);
  if ( result )
    *(_DWORD *)(result + 52) = v13;
  return result;
}
