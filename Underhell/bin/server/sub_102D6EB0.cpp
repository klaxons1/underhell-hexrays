int __cdecl sub_102D6EB0(int a1, char a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int result; // eax
  int v6; // esi

  v2 = a1;
  if ( (a1 || (v2 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
    && (v3 = *(_DWORD *)(v2 + 12)) != 0 )
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 20))(v3);
  }
  else
  {
    v4 = 0;
  }
  result = __RTDynamicCast(
             v4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CHL2_Player `RTTI Type Descriptor',
             0);
  v6 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 1168))(result);
    if ( !a2 )
      return (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 96))(v6);
  }
  return result;
}
