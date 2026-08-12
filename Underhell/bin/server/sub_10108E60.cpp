int __thiscall sub_10108E60(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  int result; // eax
  bool v6; // zf
  unsigned int v7; // eax
  int v8; // ecx
  float v9; // [esp+0h] [ebp-Ch]

  v2 = *(_DWORD *)(this + 880);
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  result = sub_10260340(*(char **)(this + 912), v4);
  if ( (_BYTE)result && !*(_BYTE *)(this + 976) )
  {
    v6 = *(_BYTE *)(this + 928) == 0;
    *(_DWORD *)(this + 800) = 0;
    if ( !v6 || (*(_DWORD *)(this + 248) & 0x20) != 0 )
    {
      *(_DWORD *)(this + 196) = (*(_DWORD *)(this + 248) & 0x100) != 0 ? sub_1010AA70 : 0;
    }
    else
    {
      v9 = *(float *)(this + 808) + *(float *)(dword_106B31C8 + 12);
      sub_100EC4A0((int *)this, v9, 0);
      sub_100EC3F0((_DWORD *)this, (int)sub_10108B40, 0.0, 0);
    }
    *(_DWORD *)(this + 1116) = 1;
    v7 = *(_DWORD *)(this + 880);
    if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 2] != v7 >> 12 )
      v8 = 0;
    else
      v8 = off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 1];
    return sub_1010DD80(v8, this, 0.0);
  }
  return result;
}
