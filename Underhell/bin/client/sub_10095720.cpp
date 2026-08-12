int __thiscall sub_10095720(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = this[7] + 44 * a2;
  if ( (*(_BYTE *)(v2 + 36) & 0xC) != 0 || !v2 )
    return 0;
  else
    return v2 + 4;
}
