void __thiscall sub_103E5830(int this)
{
  _DWORD *v2; // esi
  unsigned int v3; // eax
  int v4; // ecx
  int v5; // eax
  unsigned int v6; // ecx
  void *v7; // ecx
  unsigned int v8; // eax
  int v9; // esi
  int v10[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( (*(_BYTE *)(this + 236) & 4) != 0 )
  {
    if ( *(_DWORD *)(this + 1716) == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 1716) & 0xFFF) + 2] != *(_DWORD *)(this + 1716) >> 12 )
    {
      v2 = 0;
    }
    else
    {
      v2 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 1716) & 0xFFF) + 1];
    }
    if ( (v2[63] & 0x800) != 0 )
      sub_100DAE60((int)v2);
    v10[0] = v2[145];
    v10[1] = v2[146];
    v10[2] = v2[147];
    v3 = *(_DWORD *)(this + 1716);
    if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1716) & 0xFFF) + 2] != v3 >> 12 )
      v4 = 0;
    else
      v4 = off_1061BE18[4 * (*(_DWORD *)(this + 1716) & 0xFFF) + 1];
    v5 = sub_100BEF30(v4, "magnetcable_a");
    if ( v5 >= 0 )
    {
      v6 = *(_DWORD *)(this + 1716);
      if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1716) & 0xFFF) + 2] != v6 >> 12 )
        v7 = 0;
      else
        v7 = (void *)off_1061BE18[4 * (*(_DWORD *)(this + 1716) & 0xFFF) + 1];
      sub_100BD6D0(v7, v5, (int)v10, 0, 0, 0);
    }
    v8 = *(_DWORD *)(this + 1720);
    if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1720) & 0xFFF) + 2] != v8 >> 12 )
      v9 = 0;
    else
      v9 = off_1061BE18[4 * (*(_DWORD *)(this + 1720) & 0xFFF) + 1];
    if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
      sub_100DAE60(v9);
    sub_1011BC50((float *)(v9 + 580), (float *)v10, 255, 255, 255, 1, 0.1);
  }
  sub_10207750(this);
}
