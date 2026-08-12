void __thiscall sub_10405F40(int *this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // esi
  float v6; // [esp+4h] [ebp-18h]

  v6 = *(float *)(dword_106B31C8 + 12) + 1.0;
  sub_100EC4A0(this, v6, off_106866E8);
  v2 = this[103];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[103] & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( off_1061BE18[4 * (this[103] & 0xFFF) + 2] == v4 )
    {
      if ( *v3 )
      {
        if ( off_1061BE18[4 * (this[103] & 0xFFF) + 2] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
          sub_100DAE60(v5);
        if ( (this[63] & 0x800) != 0 )
          sub_100DAE60((int)this);
        off_10689714();
        sub_102428B0((int)this, 0.1, 0.0);
      }
    }
  }
}
