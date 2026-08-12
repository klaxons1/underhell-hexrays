char __cdecl sub_101B00D0(int a1, int *a2, int *a3)
{
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  char result; // al

  v3 = __RTDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CPhysConstraint `RTTI Type Descriptor',
         0);
  if ( !v3 )
    return 0;
  v4 = *(_DWORD *)(v3 + 800);
  if ( !v4 )
    return 0;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 20))(v4);
  *a3 = v5;
  if ( v5 )
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 68))(v5);
  else
    v6 = 0;
  *a2 = v6;
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 24))(v4);
  a3[1] = v7;
  if ( v7 )
  {
    a2[1] = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 68))(v7);
    return 1;
  }
  else
  {
    result = 1;
    a2[1] = 0;
  }
  return result;
}
