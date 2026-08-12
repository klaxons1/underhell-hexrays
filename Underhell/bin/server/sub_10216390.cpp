unsigned int __thiscall sub_10216390(int this, int a2, char *Str)
{
  _DWORD *v5; // ebx
  int v6; // esi
  int v7; // edi
  const char *v8; // eax
  const char *v9; // ebx
  _DWORD *v10; // eax

  if ( !*(_BYTE *)(this + 16) )
    return 2;
  v5 = (_DWORD *)a2;
  v6 = __RTDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&IBreakableWithPropData `RTTI Type Descriptor',
         0);
  if ( !v6 || !*(_DWORD *)(this + 12) )
    return 3;
  v7 = sub_1042ACB0(Str, 0);
  if ( !v7 )
  {
    v8 = *(const char **)(*(int (__thiscall **)(_DWORD *, int *))(*v5 + 28))(v5, &a2);
    if ( !v8 )
      v8 = String;
    v9 = (const char *)v5[23];
    if ( !v9 )
      v9 = String;
    Warning("%s '%s' has a base specified as '%s', but there is no matching entry in propdata.txt.\n", v9, v8, Str);
    return 3;
  }
  if ( !*(_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v6 + 116))(v6, &a2) )
  {
    a2 = *(_DWORD *)v6;
    v10 = sub_10162BE0(&Str, Str);
    (*(void (__thiscall **)(int, _DWORD))(a2 + 112))(v6, *v10);
  }
  return sub_10215EB0((int)v5, v7, v7);
}
