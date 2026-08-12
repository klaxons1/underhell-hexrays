float *__thiscall sub_10111630(int this)
{
  char v1; // al
  int v2; // esi

  if ( (*(_BYTE *)(this + 36) & 0x40) != 0 )
    return &flt_106F1CB4;
  v1 = *(_BYTE *)(this + 41);
  if ( v1 == 2 || !v1 )
    return &flt_106F1CB4;
  v2 = *(_DWORD *)(this + 4);
  if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
    sub_100DAE60(*(_DWORD *)(this + 4));
  return (float *)(v2 + 704);
}
