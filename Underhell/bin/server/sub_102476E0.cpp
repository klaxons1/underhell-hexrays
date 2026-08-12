char __thiscall sub_102476E0(int this, int a1)
{
  const char *v3; // edi
  const char *v4; // eax
  const char *v5; // eax

  if ( !*(_BYTE *)(this + 24) )
    return sub_1015E240(a1);
  v3 = *(const char **)(this + 52);
  if ( !v3 )
    v3 = String;
  if ( sub_10429530(v3, "everything") )
    return 1;
  v4 = *(const char **)(a1 + 92);
  if ( !v4 )
    v4 = String;
  if ( sub_10429530(v3, v4) )
    return 1;
  v5 = *(const char **)(a1 + 260);
  if ( !v5 )
    v5 = String;
  return sub_10429530(v3, v5) != 0;
}
