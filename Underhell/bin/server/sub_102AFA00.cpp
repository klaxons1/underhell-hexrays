void __thiscall sub_102AFA00(int this, char *Source)
{
  char *v2; // esi
  _DWORD *v3; // ecx

  if ( Source )
  {
    v2 = (char *)(this + 800);
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(_DWORD **)(this + 24);
      if ( v3 )
      {
        *v3 |= 0x101u;
        *(_WORD *)(sub_10153460(v3) + 2) = 0;
      }
    }
    sub_104299C0(v2, Source, 0xFFu);
  }
}
