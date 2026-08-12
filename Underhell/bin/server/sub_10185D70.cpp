int __usercall sub_10185D70@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  const char *v3; // eax
  int result; // eax
  char *v5; // eax
  const char *v6; // ecx
  const char *v7; // eax
  const char *v8; // eax
  int v9; // [esp+4h] [ebp-4h] BYREF

  if ( !a1[235] )
  {
    if ( !a1[234] )
    {
      v3 = (const char *)a1[65];
      if ( !v3 )
        v3 = String;
      Warning("npc_template_maker %s has no template NPC!\n", v3);
      return sub_1025FAC0(a1);
    }
    v5 = (char *)a1[234];
    if ( !v5 )
      v5 = (char *)String;
    result = *(_DWORD *)sub_1024B3F0((int)&v9, v5);
    a1[235] = result;
    if ( !result )
    {
      v6 = (const char *)a1[234];
      if ( !v6 )
        v6 = String;
      v7 = (const char *)a1[65];
      if ( !v7 )
        v7 = String;
      DevWarning("npc_template_maker %s: template NPC %s not found!\n", v7, v6);
      return sub_1025FAC0(a1);
    }
    if ( !a1[235] )
      return result;
  }
  v8 = (const char *)a1[235];
  v9 = 0;
  if ( !v8 )
    v8 = String;
  sub_101812F0(a2, (int)a1, &v9, (int)v8, 0);
  result = v9;
  if ( v9 )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*a1 + 752))(a1, v9);
    return sub_1025FAE0(v9);
  }
  return result;
}
