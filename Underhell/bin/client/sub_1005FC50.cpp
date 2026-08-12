_DWORD *__cdecl sub_1005FC50(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = sub_10034900(0x4C0u);
  v3 = v2;
  if ( !v2 )
    return 0;
  sub_10059640(v2);
  v3[300] = &IMultiplayerPhysics::`vftable';
  *v3 = &CPhysBoxMultiplayer::`vftable';
  v3[1] = &CPhysBoxMultiplayer::`vftable';
  v3[2] = &CPhysBoxMultiplayer::`vftable';
  v3[3] = &CPhysBoxMultiplayer::`vftable';
  v3[300] = &CPhysBoxMultiplayer::`vftable';
  (*(void (__thiscall **)(_DWORD *, int, int))(*v3 + 160))(v3, a1, a2);
  return v3 + 2;
}
