_DWORD *__cdecl sub_1005FD60(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = sub_10034900(0x7D8u);
  v3 = v2;
  if ( !v2 )
    return 0;
  sub_10059800(v2);
  v3[492] = &IMultiplayerPhysics::`vftable';
  *v3 = &CPhysicsPropMultiplayer::`vftable';
  v3[1] = &CPhysicsPropMultiplayer::`vftable';
  v3[2] = &CPhysicsPropMultiplayer::`vftable';
  v3[3] = &CPhysicsPropMultiplayer::`vftable';
  v3[492] = &CPhysicsPropMultiplayer::`vftable';
  (*(void (__thiscall **)(_DWORD *, int, int))(*v3 + 160))(v3, a1, a2);
  return v3 + 2;
}
