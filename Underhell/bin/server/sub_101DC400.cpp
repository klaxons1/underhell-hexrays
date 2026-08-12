char __cdecl sub_101DC400(int a1, int *a2, int *a3)
{
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // esi
  char result; // al

  v3 = __RTDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CPhysicsSpring `RTTI Type Descriptor',
         0);
  v4 = v3;
  if ( !v3 )
    return 0;
  if ( !*(_DWORD *)(v3 + 800) )
  {
    v6 = 0;
    goto LABEL_6;
  }
  v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 800) + 20))(*(_DWORD *)(v3 + 800));
  v6 = v5;
  if ( !v5 )
  {
LABEL_6:
    v7 = 0;
    goto LABEL_7;
  }
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 68))(v5);
LABEL_7:
  *a2 = v7;
  *a3 = v6;
  if ( *(_DWORD *)(v4 + 800) )
  {
    v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 800) + 24))(*(_DWORD *)(v4 + 800));
    v9 = v8;
    if ( v8 )
    {
      a2[1] = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 68))(v8);
      a3[1] = v9;
      return 1;
    }
  }
  else
  {
    v9 = 0;
  }
  result = 1;
  a2[1] = 0;
  a3[1] = v9;
  return result;
}
