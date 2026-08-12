int __thiscall sub_100B09F0(_DWORD *this, char a2)
{
  _DWORD *v2; // edi
  char *v4; // eax
  int result; // eax
  int v6; // eax
  int v7; // esi
  unsigned int v8; // eax
  const char *v9; // ecx
  const char *v10; // eax
  const char *v11; // ecx
  const char *v12; // eax
  const char *v13; // eax
  int v14; // eax
  int v15; // esi
  unsigned int v16; // eax
  const char *v17; // ecx
  const char *v18; // eax
  const char *v19; // ecx
  const char *v20; // eax
  const char *v21; // eax
  int v22; // [esp+Ch] [ebp-4h]

  v2 = 0;
  v22 = 0;
  while ( 1 )
  {
    v4 = (char *)this[201];
    if ( !v4 )
      v4 = (char *)String;
    result = sub_1012BF20((int)v2, v4, 0, 0, 0, 0);
    v2 = (_DWORD *)result;
    if ( !result )
      break;
    v6 = __RTDynamicCast(
           result,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CAI_PlayerAlly `RTTI Type Descriptor',
           0);
    v7 = v6;
    if ( v6 )
    {
      if ( a2 )
      {
        ++v22;
        *(_DWORD *)(v6 + 4408) = -1;
      }
      else
      {
        v8 = *(_DWORD *)(v6 + 4408);
        if ( v8 != -1
          && off_1061BE18[4 * (*(_DWORD *)(v7 + 4408) & 0xFFF) + 2] == v8 >> 12
          && off_1061BE18[4 * (*(_DWORD *)(v7 + 4408) & 0xFFF) + 1] )
        {
          v9 = (const char *)v2[65];
          if ( !v9 )
            v9 = String;
          v10 = (const char *)this[65];
          if ( !v10 )
            v10 = String;
          DevWarning("ai_speechfilter %s is slamming NPC %s's current speech filter.\n", v10, v9);
        }
        ++v22;
        *(_DWORD *)(v7 + 4408) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 8))(this);
      }
    }
    else
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v2 + 284))(v2) )
      {
        v11 = (const char *)v2[65];
        if ( !v11 )
          v11 = String;
        v12 = (const char *)this[65];
        if ( !v12 )
          v12 = String;
        DevWarning("ai_speechfilter %s tries to use %s as a subject, but it's not a talking NPC.\n", v12, v11);
      }
      ++v22;
    }
  }
  if ( !v22 )
  {
    while ( 1 )
    {
      v13 = (const char *)this[201];
      if ( !v13 )
        v13 = String;
      result = sub_1012BC90(v2, v13);
      v2 = (_DWORD *)result;
      if ( !result )
        break;
      v14 = __RTDynamicCast(
              result,
              0,
              (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
              (int)&CAI_PlayerAlly `RTTI Type Descriptor',
              0);
      v15 = v14;
      if ( v14 )
      {
        if ( a2 )
        {
          ++v22;
          *(_DWORD *)(v14 + 4408) = -1;
        }
        else
        {
          v16 = *(_DWORD *)(v14 + 4408);
          if ( v16 != -1
            && off_1061BE18[4 * (*(_DWORD *)(v15 + 4408) & 0xFFF) + 2] == v16 >> 12
            && off_1061BE18[4 * (*(_DWORD *)(v15 + 4408) & 0xFFF) + 1] )
          {
            v17 = (const char *)v2[65];
            if ( !v17 )
              v17 = String;
            v18 = (const char *)this[65];
            if ( !v18 )
              v18 = String;
            DevWarning("ai_speechfilter %s is slamming NPC %s's current speech filter.\n", v18, v17);
          }
          ++v22;
          *(_DWORD *)(v15 + 4408) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 8))(this);
        }
      }
      else
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v2 + 284))(v2) )
        {
          v19 = (const char *)v2[65];
          if ( !v19 )
            v19 = String;
          v20 = (const char *)this[65];
          if ( !v20 )
            v20 = String;
          DevWarning("ai_speechfilter %s tries to use %s as a subject, but it's not a talking NPC.\n", v20, v19);
        }
        ++v22;
      }
    }
    if ( !v22 )
    {
      v21 = (const char *)this[201];
      if ( !v21 )
        v21 = String;
      return DevMsg(2, "ai_speechfilter finds no subject(s) called: %s\n", v21);
    }
  }
  return result;
}
