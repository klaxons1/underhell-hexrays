int __thiscall sub_1010C6E0(
        float *this,
        int a2,
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
  float *v13; // eax
  float *v14; // esi
  double v15; // st7
  _BYTE *v16; // eax
  float *v17; // edx
  float *i; // ecx
  int result; // eax

  v13 = (float *)sub_1042FCC0(56);
  if ( v13 )
  {
    v13[3] = NAN;
    v13[4] = NAN;
    v13[6] = NAN;
    v13[7] = 0.0;
    v13[10] = NAN;
    v13[11] = 0.0;
    v14 = v13;
  }
  else
  {
    v14 = 0;
  }
  v15 = *(float *)(dword_106B31C8 + 12) + a9;
  v14[1] = 0.0;
  *v14 = v15;
  if ( a2 )
    v14[6] = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    v14[6] = NAN;
  v16 = a3;
  if ( !a3 || !*a3 )
    v16 = 0;
  *((_DWORD *)v14 + 2) = v16;
  if ( a10 )
    v14[3] = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)a10 + 8))(a10);
  else
    v14[3] = NAN;
  if ( a11 )
    v14[4] = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)a11 + 8))(a11);
  else
    v14[4] = NAN;
  *((_DWORD *)v14 + 7) = a4;
  *((_DWORD *)v14 + 8) = a5;
  *((_DWORD *)v14 + 9) = a6;
  *((_DWORD *)v14 + 10) = a7;
  *((_DWORD *)v14 + 5) = a12;
  *((_DWORD *)v14 + 11) = a8;
  v17 = (float *)*((_DWORD *)this + 12);
  for ( i = this; v17; v17 = (float *)*((_DWORD *)v17 + 12) )
  {
    if ( *v14 < (double)*v17 )
      break;
    i = v17;
  }
  v14[12] = i[12];
  *((_DWORD *)v14 + 13) = i;
  *((_DWORD *)i + 12) = v14;
  result = *((_DWORD *)v14 + 12);
  if ( result )
    *(_DWORD *)(result + 52) = v14;
  return result;
}
