void __thiscall sub_100F6B30(_DWORD *this)
{
  int i; // edi
  unsigned int v3; // eax
  _BYTE *v4; // ecx
  int j; // edi
  int v6; // ecx
  unsigned int v7; // eax
  int *v8; // ecx
  int v9; // ecx

  for ( i = this[1061] - 1; i >= 0; --i )
  {
    v3 = *(_DWORD *)(this[1058] + 4 * i);
    if ( v3 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this[1058] + 4 * i) & 0xFFF) + 2] == v3 >> 12
      && (v4 = (_BYTE *)off_1061BE18[4 * (*(_DWORD *)(this[1058] + 4 * i) & 0xFFF) + 1]) != 0
      && v4[756] )
    {
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 400))(v4);
    }
    else
    {
      if ( this[1061] - i - 1 > 0 )
        memcpy((void *)(this[1058] + 4 * i), (const void *)(this[1058] + 4 * i + 4), 4 * (this[1061] - i - 1));
      --this[1061];
    }
  }
  for ( j = this[1061] - 1; j >= 0; --j )
  {
    v6 = this[1058];
    v7 = *(_DWORD *)(v6 + 4 * j);
    if ( v7 != -1
      && (v8 = &off_1061BE18[4 * (*(_DWORD *)(v6 + 4 * j) & 0xFFF) + 1], v8[1] == v7 >> 12)
      && (v9 = *v8) != 0
      && *(_BYTE *)(v9 + 756) )
    {
      if ( (*(_BYTE *)(v9 + 255) & 1) != 0 )
        sub_101C6AC0();
    }
    else
    {
      if ( this[1061] - j - 1 > 0 )
        memcpy((void *)(this[1058] + 4 * j), (const void *)(this[1058] + 4 * j + 4), 4 * (this[1061] - j - 1));
      --this[1061];
    }
  }
}
