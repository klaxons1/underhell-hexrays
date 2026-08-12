void __thiscall sub_100F1860(int this)
{
  bool v2; // zf

  v2 = (*(_DWORD *)(this + 7024))-- == 1;
  if ( v2 && (*(_BYTE *)(this + 6720) & 0x40) != 0 )
  {
    if ( (unsigned __int8)sub_101FA3E0(this + 16) )
      *(_BYTE *)(this + 6720) |= 2u;
  }
}
