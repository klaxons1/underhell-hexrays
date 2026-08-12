int __thiscall sub_101F2990(int this)
{
  unsigned int v2; // eax
  int v3; // ecx
  int result; // eax
  float v5; // [esp+0h] [ebp-Ch]

  if ( *(_BYTE *)(this + 4185) )
  {
    *(_BYTE *)(this + 4185) = 0;
    v2 = *(_DWORD *)(this + 4032);
    if ( v2 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4032) & 0xFFF) + 2] != v2 >> 12 )
      v3 = 0;
    else
      v3 = off_1061BE18[4 * (*(_DWORD *)(this + 4032) & 0xFFF) + 1];
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 836))(v3, 1);
    *(_BYTE *)(this + 4186) = 0;
  }
  else
  {
    *(_BYTE *)(this + 4185) = 1;
    sub_101F0050((void *)this);
    v5 = *(float *)(dword_106B31C8 + 12) + 0.40000001;
    return sub_100EC4A0((int *)this, v5, (int)"KickContext");
  }
  return result;
}
