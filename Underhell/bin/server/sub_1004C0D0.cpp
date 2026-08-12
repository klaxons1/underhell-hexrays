bool __thiscall sub_1004C0D0(int this)
{
  char *v2; // eax
  int v3; // eax
  int v5; // edi
  char *v6; // eax

  if ( *(_WORD *)(this + 822) == 0xFFFF )
  {
    v2 = *(char **)(this + 800);
    if ( !v2 )
      v2 = (char *)String;
    v3 = sub_1012BF20(0, v2, 0, 0, 0, 0);
    if ( !v3 )
    {
      *(_WORD *)(this + 822) = 0;
      return 0;
    }
    *(_WORD *)(this + 822) = 0;
    v5 = v3;
    while ( !*(_BYTE *)(v3 + 844) )
    {
      v6 = *(char **)(v3 + 804);
      if ( !v6 )
        v6 = (char *)String;
      v3 = sub_1012BF20(0, v6, 0, 0, 0, 0);
      if ( !v3 )
        return *(_WORD *)(this + 822) == 1;
      if ( v3 == v5 )
        return *(_WORD *)(this + 822) == 1;
    }
    *(_WORD *)(this + 822) = 1;
  }
  return *(_WORD *)(this + 822) == 1;
}
