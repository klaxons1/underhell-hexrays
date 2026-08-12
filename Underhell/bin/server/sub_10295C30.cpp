char __thiscall sub_10295C30(int *this)
{
  char result; // al
  int v3; // esi
  double v4; // st7
  int v5; // esi
  _DWORD *v6; // ecx
  int v7; // ecx
  float v8[3]; // [esp+4h] [ebp-30h] BYREF
  float v9[3]; // [esp+10h] [ebp-24h] BYREF
  float v10[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v11[3]; // [esp+28h] [ebp-Ch] BYREF

  result = sub_100C0880(this[1], v10, v11);
  if ( result )
  {
    v3 = this[1];
    if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
      sub_100DAE60(this[1]);
    v9[0] = v11[0] - *(float *)(v3 + 580);
    v9[1] = v11[1] - *(float *)(v3 + 584);
    v4 = v11[2] - *(float *)(v3 + 588);
    v5 = this[1];
    v9[2] = v4;
    if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
      sub_100DAE60(v5);
    v6 = (_DWORD *)this[1];
    v8[0] = v10[0] - *(float *)(v5 + 580);
    v8[1] = v10[1] - *(float *)(v5 + 584);
    v8[2] = v10[2] - *(float *)(v5 + 588);
    result = sub_1025F360(v6, (int)v8, (int)v9);
    v7 = this[1];
    if ( *(_DWORD *)(v7 + 424) )
      return sub_10027740(v7);
  }
  return result;
}
