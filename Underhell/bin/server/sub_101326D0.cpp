unsigned int __thiscall sub_101326D0(int this)
{
  unsigned int v2; // eax
  char *v3; // eax
  _DWORD *v4; // eax
  unsigned int result; // eax
  unsigned int v6; // eax
  int v7; // edi
  float v8; // [esp+4h] [ebp-30h]
  float v9[3]; // [esp+14h] [ebp-20h] BYREF
  float v10[3]; // [esp+20h] [ebp-14h] BYREF
  int v11; // [esp+2Ch] [ebp-8h]

  sub_1042CBA0("r_flashlightscissor");
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v11 + 8))(v11, "0");
  v2 = *(_DWORD *)(this + 800);
  if ( v2 == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != v2 >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1] )
  {
    v3 = *(char **)(this + 212);
    if ( v3 )
    {
      v4 = sub_1012BF20(&dword_1069E3E0, 0, v3, 0, 0, 0, 0);
      sub_100C0E40((unsigned int *)(this + 800), (int)v4);
    }
  }
  result = *(_DWORD *)(this + 800);
  if ( result != -1 )
  {
    result >>= 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] == result )
    {
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1] )
      {
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        v6 = *(_DWORD *)(this + 800);
        if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != v6 >> 12 )
          v7 = 0;
        else
          v7 = off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
        if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
          sub_100DAE60(v7);
        v10[0] = *(float *)(v7 + 580) - *(float *)(this + 580);
        v10[1] = *(float *)(v7 + 584) - *(float *)(this + 584);
        v10[2] = *(float *)(v7 + 588) - *(float *)(this + 588);
        sub_10422540(v10, v9);
        sub_100E0EA0(this, v9);
        v8 = *(float *)(dword_106B31C8 + 12) + 0.1;
        return sub_100EC4A0((int *)this, v8, 0);
      }
    }
  }
  return result;
}
