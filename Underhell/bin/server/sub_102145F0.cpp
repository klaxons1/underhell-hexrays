void __thiscall sub_102145F0(int this, int a2)
{
  int v3; // ebx
  int i; // esi
  unsigned int v5; // eax
  _BYTE *v6; // ecx

  v3 = *(_DWORD *)(this + 1660);
  if ( v3 > 0 )
  {
    for ( i = 0; i < v3; ++i )
    {
      v5 = *(_DWORD *)(*(_DWORD *)(this + 1648) + 4 * i);
      if ( v5 != -1 && off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 1648) + 4 * i) & 0xFFF) + 2] == v5 >> 12 )
      {
        v6 = (_BYTE *)off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 1648) + 4 * i) & 0xFFF) + 1];
        if ( v6 )
          sub_10214340(v6, a2);
      }
    }
  }
  sub_10214340((_BYTE *)this, a2);
}
