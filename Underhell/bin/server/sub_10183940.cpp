char __thiscall sub_10183940(int this, char *String1, char *Source)
{
  char *v4; // esi
  _DWORD *v5; // ecx

  if ( String1 == "materialName" || !_stricmp(String1, "materialName") )
  {
    v4 = (char *)(this + 800);
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
LABEL_8:
      sub_104299C0(v4, Source, 0xFFu);
      return 1;
    }
    v5 = *(_DWORD **)(this + 24);
    goto LABEL_6;
  }
  if ( String1 == "materialVar" || !_stricmp(String1, "materialVar") )
  {
    v4 = (char *)(this + 1055);
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      goto LABEL_8;
    }
    v5 = *(_DWORD **)(this + 24);
LABEL_6:
    if ( v5 )
    {
      *v5 |= 0x101u;
      *(_WORD *)(sub_10153460(v5) + 2) = 0;
    }
    goto LABEL_8;
  }
  return sub_100EBE90(this, String1, Source);
}
