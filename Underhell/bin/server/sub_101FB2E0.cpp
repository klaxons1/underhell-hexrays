int __cdecl sub_101FB2E0(int a1, int a2, int a3)
{
  int v3; // eax
  int result; // eax
  int v5; // esi
  int v6; // eax

  v3 = __RTDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&IPlayerPickupVPhysics `RTTI Type Descriptor',
         0);
  if ( v3 )
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v3 + 8))(v3, a2, a3);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC);
  if ( !(_BYTE)result )
  {
    result = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
               dword_106B31F8,
               "physgun_pickup",
               0);
    v5 = result;
    if ( result )
    {
      v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a1 + 24));
      (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v5 + 40))(v5, "entindex", v6);
      return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(dword_106B31F8, v5, 0);
    }
  }
  return result;
}
