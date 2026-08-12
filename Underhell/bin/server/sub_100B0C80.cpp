void __thiscall sub_100B0C80(int this, _DWORD *a2)
{
  char *v3; // eax
  const char *v4; // eax
  int v5; // eax
  const char *v6; // esi
  const char *v7; // eax

  if ( !*(_BYTE *)(this + 13) )
  {
    v3 = *(char **)(this + 4);
    if ( (char *)a2[65] == v3 )
      goto LABEL_10;
    if ( !v3 )
      v3 = (char *)String;
    if ( (unsigned __int8)sub_100D6190(v3) )
      goto LABEL_10;
  }
  v4 = *(const char **)(this + 4);
  if ( (const char *)a2[23] == v4 )
    goto LABEL_10;
  if ( !v4 )
    v4 = String;
  if ( (unsigned __int8)sub_100D6240(v4) )
  {
LABEL_10:
    v5 = __RTDynamicCast(
           (int)a2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CAI_PlayerAlly `RTTI Type Descriptor',
           0);
    if ( v5 )
    {
      if ( this == 800 )
        *(_DWORD *)(v5 + 4408) = -1;
      else
        *(_DWORD *)(v5 + 4408) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 800) + 8))(this - 800);
    }
    else if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 284))(a2) )
    {
      v6 = (const char *)a2[65];
      if ( !v6 )
        v6 = String;
      v7 = *(const char **)(this - 540);
      if ( !v7 )
        v7 = String;
      DevWarning("ai_speechfilter %s tries to use %s as a subject, but it's not a talking NPC.\n", v7, v6);
    }
  }
}
