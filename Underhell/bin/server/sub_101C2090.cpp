int __thiscall sub_101C2090(int this, float *a2, float *a3)
{
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx
  _DWORD *v7; // eax
  const char *v8; // eax
  int result; // eax
  const char *v10; // [esp-4h] [ebp-1Ch]
  float v11[3]; // [esp+Ch] [ebp-Ch] BYREF

  v4 = *(_DWORD *)(this + 308);
  if ( v4 != -1 )
  {
    v5 = &off_1061BE18[4 * (v4 & 0xFFF) + 1];
    v6 = v4 >> 12;
    if ( v5[1] == v6 )
    {
      if ( *v5 )
      {
        if ( v5[1] == v6 )
          v7 = (_DWORD *)*v5;
        else
          v7 = 0;
        v10 = sub_100D6390(v7);
        v8 = sub_100D6390((_DWORD *)this);
        Warning("pushing entity (%s) that has parent (%s)!\n", v8, v10);
      }
    }
  }
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v11[0] = *(float *)(this + 580);
  v11[1] = *(float *)(this + 584);
  v11[2] = *(float *)(this + 588);
  sub_101C13F0(v11, this, a2, a3);
  if ( 0.0 != a3[11] )
    sub_100E0D20(this, a3 + 3);
  sub_100DCB50((void *)this, (int)v11);
  result = *((_DWORD *)a3 + 19);
  if ( result )
    return sub_101C6C90(result, a3);
  return result;
}
