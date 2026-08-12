int __thiscall sub_10151A40(int this)
{
  char *v2; // edi
  char *v3; // esi
  _DWORD *v5; // ecx

  sub_10150240((float *)this);
  v2 = *(char **)(this + 1064);
  if ( !v2 )
    v2 = (char *)String;
  v3 = (char *)(this + 808);
  if ( *(v3 - 724) )
  {
    *(v3 - 720) |= 1u;
    return sub_104299C0(v3, v2, 0xFFu);
  }
  else
  {
    v5 = (_DWORD *)*((_DWORD *)v3 - 196);
    if ( v5 )
    {
      *v5 |= 0x101u;
      *(_WORD *)(sub_10153460(v5) + 2) = 0;
    }
    return sub_104299C0(v3, v2, 0xFFu);
  }
}
