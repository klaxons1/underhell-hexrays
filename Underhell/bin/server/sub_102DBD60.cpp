int __thiscall sub_102DBD60(void *this, int a2)
{
  const char **v2; // esi
  const char *v4; // eax
  int result; // eax
  const char *v6; // eax
  int v7; // edi
  int v8; // ebx
  const char *v9; // esi
  const char *v10; // eax

  v2 = (const char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v2;
    if ( !*v2 )
      v4 = String;
  }
  else
  {
    v4 = sub_1010D460(a2 + 8);
  }
  if ( !_stricmp(v4, "item_suit") )
    return (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 1596))(this, 0);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v6 = *v2;
    if ( !*v2 )
      v6 = String;
  }
  else
  {
    v6 = sub_1010D460((int)v2);
  }
  v7 = sub_101811E0(v6, -1);
  v8 = __RTDynamicCast(
         v7,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CItem `RTTI Type Descriptor',
         0);
  result = __RTDynamicCast(
             v7,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CBaseCombatWeapon `RTTI Type Descriptor',
             0);
  if ( v8 )
    return (*(int (__thiscall **)(int, void *, void *, int, _DWORD))(*(_DWORD *)v8 + 64))(v8, this, this, 1, 0.0);
  if ( result )
  {
    if ( *(_DWORD *)(a2 + 24) == 2 )
    {
      v9 = *v2;
      if ( v9 )
        v10 = v9;
      else
        v10 = String;
    }
    else
    {
      v10 = sub_1010D460((int)v2);
    }
    return (*(int (__thiscall **)(void *, const char *, _DWORD))(*(_DWORD *)this + 1440))(this, v10, 0);
  }
  return result;
}
