void __thiscall sub_100F2FF0(int this)
{
  bool v1; // zf
  int v2; // esi

  v1 = (*(_DWORD *)(this + 248))-- == 1;
  if ( v1 && (*(_BYTE *)(this + 236) & 2) != 0 )
  {
    v2 = this + 8;
    if ( !sub_100EB1D0((unsigned __int16 *)(this + 8)) )
      *(_DWORD *)(v2 + 148) |= 1u;
  }
}
