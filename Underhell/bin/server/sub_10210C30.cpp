_DWORD *__cdecl sub_10210C30(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = (_DWORD *)sub_100D6340(1220);
  v3 = v2;
  if ( v2 )
  {
    sub_101DF690(v2);
    v3[302] = &IMultiplayerPhysics::`vftable';
    *v3 = &CPhysBoxMultiplayer::`vftable';
    v3[200] = &CPhysBoxMultiplayer::`vftable';
    v3[201] = &CPhysBoxMultiplayer::`vftable';
    v3[302] = &CPhysBoxMultiplayer::`vftable';
    (*(void (__thiscall **)(_DWORD *, int))(*v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
