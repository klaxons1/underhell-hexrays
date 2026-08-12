int __usercall sub_10417E50@<eax>(int a1@<edi>, int *a2)
{
  int v2; // eax
  bool v3; // cc
  const char *v4; // eax
  int v5; // edi
  _DWORD *v6; // esi
  int result; // eax
  int v8; // edi
  const char **v9; // ebx
  const char *v10; // ecx
  const char *v11; // eax

  v2 = *a2;
  if ( *a2 < 4 || (v2 & 1) != 0 )
    return Msg("Format: ent_keyvalue <entity id> \"key1\"=\"value1\" \"key2\" \"value2\" ... \"keyN\" \"valueN\"\n");
  v3 = v2 <= 1;
  v4 = String;
  if ( !v3 )
    v4 = (const char *)a2[259];
  v5 = atoi(v4);
  v6 = (_DWORD *)sub_1012BC10(&dword_1069E3E0, 0);
  if ( !v6 )
    return Msg("Entity ID %d not found.\n", a1);
  while ( v6[26] != v5 )
  {
    v6 = (_DWORD *)sub_1012BC10(&dword_1069E3E0, (int)v6);
    if ( !v6 )
      return Msg("Entity ID %d not found.\n", a1);
  }
  result = *a2;
  v8 = 2;
  if ( *a2 > 2 )
  {
    v9 = (const char **)(a2 + 260);
    do
    {
      if ( v8 < 0 || v8 >= result )
        v10 = String;
      else
        v10 = *v9;
      if ( v8 + 1 < 0 || v8 + 1 >= result )
        v11 = String;
      else
        v11 = v9[1];
      v8 += 2;
      v9 += 2;
      (*(void (__thiscall **)(_DWORD *, const char *, const char *))(*v6 + 128))(v6, v10, v11);
      result = *a2;
    }
    while ( v8 < *a2 );
  }
  return result;
}
