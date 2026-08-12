_BYTE *__cdecl sub_103F4040(int a1, int a2)
{
  _DWORD *v2; // eax
  _BYTE *v3; // esi

  v2 = (_DWORD *)sub_100D6340(1392);
  v3 = v2;
  if ( v2 )
  {
    sub_100D4A70(v2);
    v3[1388] = 1;
    v3[1127] = 0;
    *(_DWORD *)v3 = &CWeapon357::`vftable';
    v3[1228] = 0;
    v3[1208] = 0;
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
