char __thiscall sub_102AE160(_DWORD *this, int a2, int a3, char *ArgList, int a5)
{
  int *v6; // esi
  char *v7; // edi
  _DWORD *v9; // edi
  char v10; // bl
  int v11; // esi
  _DWORD *v12; // eax

  if ( a3 == -1 )
    v6 = 0;
  else
    v6 = *(int **)(*this + 20 * a3);
  v7 = ArgList;
  if ( sub_102AA720(v6, ArgList) )
  {
    sub_102ADD10((int)word_10482A60, "Attribute \"%s\" was defined more than once.\n", v7);
    return 0;
  }
  else
  {
    sub_102AA700(v6, 1);
    v9 = sub_102AAB50(v6, v7);
    if ( v6 )
      sub_102AA700(v6, 0);
    v10 = sub_102AECF0(this, a2, a5, &a3);
    if ( v10 )
    {
      if ( a3 == -1 )
        v11 = 0;
      else
        v11 = *(_DWORD *)(*this + 20 * a3);
      sub_102AD1A0(v9, 1);
      v12 = (_DWORD *)v9[2];
      if ( v12 )
        *v12 = v11;
    }
    return v10;
  }
}
