_DWORD *__thiscall sub_102AE290(_DWORD *this)
{
  _DWORD *result; // eax
  int i; // edi
  int v4; // eax
  _DWORD *v5; // esi
  unsigned int v6; // eax
  const char *v7; // ecx
  const char *v8; // eax

  result = sub_1012BC90(&dword_1069E3E0, 0, "npc_antlion");
  for ( i = (int)result; result; i = (int)result )
  {
    v4 = __RTDynamicCast(
           i,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CNPC_Antlion `RTTI Type Descriptor',
           0);
    v5 = (_DWORD *)v4;
    if ( v4 )
    {
      v6 = *(_DWORD *)(v4 + 412);
      if ( v6 == -1 || off_1061BE18[4 * (v5[103] & 0xFFF) + 2] != v6 >> 12 || !off_1061BE18[4 * (v5[103] & 0xFFF) + 1] )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v5 + 264))(v5) )
        {
          v7 = (const char *)this[65];
          if ( !v7 )
            v7 = String;
          v8 = (const char *)v5[1024];
          if ( !v8 )
            v8 = String;
          if ( !_stricmp(v8, v7) )
            sub_102AE1E0(this, (int)v5);
        }
      }
    }
    result = sub_1012BC90(&dword_1069E3E0, i, "npc_antlion");
  }
  return result;
}
