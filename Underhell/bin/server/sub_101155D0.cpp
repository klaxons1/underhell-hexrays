int __thiscall sub_101155D0(int this)
{
  char *v2; // edi
  char *v3; // esi
  _DWORD *v5; // ecx

  sub_100E38F0((float *)this);
  v2 = *(char **)(this + 1104);
  if ( !v2 )
    v2 = (char *)String;
  v3 = (char *)(this + 844);
  if ( *(v3 - 760) )
  {
    *(v3 - 756) |= 1u;
    return sub_104299C0(v3, v2, 0x104u);
  }
  else
  {
    v5 = (_DWORD *)*((_DWORD *)v3 - 205);
    if ( v5 )
    {
      *v5 |= 0x101u;
      *(_WORD *)(sub_10153460(v5) + 2) = 0;
    }
    return sub_104299C0(v3, v2, 0x104u);
  }
}
