int __thiscall sub_1013F950(int *this, float a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  float v7; // [esp+8h] [ebp-Ch]

  v3 = this[200];
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (this[200] & 0xFFF) + 1];
    if ( v4[1] == v3 >> 12 )
    {
      v5 = *v4;
      if ( v5 )
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v5 + 724))(v5, 0.0, LODWORD(a2));
    }
  }
  sub_100EC3F0(this, (int)sub_1013F940, 0.0, 0);
  v7 = *(float *)(dword_106B31C8 + 12) + a2;
  return sub_100EC4A0(this, v7, 0);
}
