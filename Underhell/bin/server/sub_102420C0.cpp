int __thiscall sub_102420C0(int this, float *a2, float *a3)
{
  double v4; // st7
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  double v10; // st7
  int result; // eax
  float v12; // [esp+Ch] [ebp-Ch]
  float v13; // [esp+10h] [ebp-8h]

  v4 = *(float *)(this + 828) * 0.5;
  v12 = v4;
  if ( !*(_BYTE *)(this + 836) )
  {
    v5 = *(_DWORD *)dword_106B31F0;
    v6 = sub_100D7240((void *)this);
    v7 = (*(int (__thiscall **)(int, int))(v5 + 116))(dword_106B31F0, v6);
    v8 = *(_DWORD *)dword_106B31F0;
    v13 = (float)v7;
    v9 = sub_100D7240((void *)this);
    v10 = (double)(*(int (__thiscall **)(int, int))(v8 + 120))(dword_106B31F0, v9);
    if ( v13 > v10 )
      v10 = v13;
    v4 = v10 * v12;
  }
  *a2 = -v4;
  a2[1] = -v4;
  a2[2] = -v4;
  *a3 = v4;
  a3[1] = v4;
  a3[2] = v4;
  result = *(_DWORD *)(this + 252) >> 11;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    result = sub_100DAE60(this);
  *a2 = *a2 + *(float *)(this + 580);
  a2[1] = a2[1] + *(float *)(this + 584);
  a2[2] = *(float *)(this + 588) + a2[2];
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    result = sub_100DAE60(this);
  *a3 = *a3 + *(float *)(this + 580);
  a3[1] = a3[1] + *(float *)(this + 584);
  a3[2] = a3[2] + *(float *)(this + 588);
  return result;
}
