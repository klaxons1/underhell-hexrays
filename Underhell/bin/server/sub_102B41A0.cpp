int __thiscall sub_102B41A0(int this, int a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // eax
  float v9; // [esp+0h] [ebp-Ch]

  v3 = *(_DWORD *)(this + 3872);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (v3 & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( v4[1] == v5 )
    {
      if ( *v4 )
      {
        if ( v4[1] == v5 )
          v6 = *v4;
        else
          v6 = 0;
        sub_1025FAC0(v6);
        *(_DWORD *)(this + 3872) = -1;
      }
    }
  }
  v7 = off_10660BC0;
  *(_BYTE *)(this + 3868) = 1;
  v9 = *(float *)(dword_106B31C8 + 12) + 3.0;
  return sub_100EC3F0((_DWORD *)this, (int)sub_102B3CD0, v9, v7);
}
