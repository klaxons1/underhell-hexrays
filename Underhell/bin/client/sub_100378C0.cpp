int __thiscall sub_100378C0(int this)
{
  unsigned int v1; // ecx
  _DWORD *v2; // eax
  unsigned int v3; // ecx

  if ( (*(_BYTE *)(this + 112) & 1) != 0
    && !*(_BYTE *)(this + 316)
    && (v1 = *(_DWORD *)(this + 324), v1 != -1)
    && (v2 = (_DWORD *)((char *)off_103DCD74 + 16 * (v1 & 0xFFF) + 4), v3 = v1 >> 12, v2[1] == v3)
    && *v2
    && v2[1] == v3 )
  {
    return *v2;
  }
  else
  {
    return 0;
  }
}
