_DWORD *__cdecl sub_103F5E60(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = (_DWORD *)sub_100D6340(1400);
  v3 = v2;
  if ( v2 )
  {
    sub_100D4A70(v2);
    *((_BYTE *)v3 + 1388) = 1;
    *((_BYTE *)v3 + 1127) = 0;
    *v3 = &CWeaponBugBait::`vftable';
    *((_WORD *)v3 + 696) = 0;
    v3[349] = -1;
    (*(void (__thiscall **)(_DWORD *, int))(*v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
