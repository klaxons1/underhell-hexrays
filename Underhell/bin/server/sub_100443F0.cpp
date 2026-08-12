int __thiscall sub_100443F0(_DWORD *this, int a2, float *a3)
{
  int result; // eax
  float *v4; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st5
  _BYTE v9[12]; // [esp+0h] [ebp-Ch] BYREF

  result = sub_100223E0(this);
  if ( result == 2 )
  {
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      sub_100DAE60(a2);
    v4 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 504))(a2, v9);
    v5 = *v4 - *(float *)(a2 + 580);
    v6 = v4[1] - *(float *)(a2 + 584);
    v7 = v4[2];
    result = (int)a3;
    v8 = v7 - *(float *)(a2 + 588);
    *a3 = v5 + *a3;
    a3[1] = v6 + a3[1];
    a3[2] = v8 + a3[2];
  }
  return result;
}
