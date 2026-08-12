void __thiscall sub_10413430(_DWORD *this, int *a2)
{
  const char **v3; // ecx
  const char *v4; // eax
  const char *v5; // esi
  char *v6; // eax
  _DWORD *v7; // eax
  const char *v8; // eax

  v3 = (const char **)(a2 + 2);
  if ( a2[6] == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
    {
LABEL_3:
      v5 = 0;
      goto LABEL_4;
    }
  }
  else
  {
    v4 = sub_1010D460((int)v3);
  }
  if ( !v4 || !*v4 )
    goto LABEL_3;
  v5 = v4;
LABEL_4:
  v6 = (char *)v5;
  if ( !v5 )
    v6 = (char *)String;
  v7 = sub_1012BF20(&dword_1069E3E0, 0, v6, 0, *a2, a2[1], 0);
  if ( v7 )
  {
    this[449] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v7 + 8))(v7);
  }
  else
  {
    if ( !v5 )
      v5 = String;
    v8 = (const char *)this[23];
    if ( !v8 )
      v8 = String;
    DevWarning("%s: Could not find target '%s'!\n", v8, v5);
  }
}
