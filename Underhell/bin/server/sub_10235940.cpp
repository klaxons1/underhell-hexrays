void __thiscall sub_10235940(int this)
{
  _DWORD *v2; // ecx

  if ( (*(_BYTE *)(this + 72) & 1) != 0 )
  {
    v2 = *(_DWORD **)(this + 8);
    *v2 |= 0x101u;
    *(_WORD *)(sub_10153460(v2) + 2) = 0;
    *(_BYTE *)(this + 72) &= ~1u;
  }
}
