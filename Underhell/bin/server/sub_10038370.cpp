void __thiscall sub_10038370(int this)
{
  _DWORD *v1; // ecx

  if ( *(_BYTE *)(this + 84) )
  {
    *(_BYTE *)(this + 88) |= 1u;
  }
  else
  {
    v1 = *(_DWORD **)(this + 24);
    if ( v1 )
    {
      *v1 |= 0x101u;
      *(_WORD *)(sub_10153460() + 2) = 0;
    }
  }
}
