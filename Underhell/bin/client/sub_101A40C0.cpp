_DWORD *__cdecl sub_101A40C0(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = sub_10034900(0x868u);
  v3 = v2;
  if ( !v2 )
    return 0;
  sub_1000C710(v2);
  *((_BYTE *)v3 + 2144) = 1;
  *((_BYTE *)v3 + 1967) = 0;
  *v3 = &C_WeaponSMGMP5EOD::`vftable';
  v3[1] = &C_WeaponSMGMP5EOD::`vftable';
  v3[2] = &C_WeaponSMGMP5EOD::`vftable';
  v3[3] = &C_WeaponSMGMP5EOD::`vftable';
  (*(void (__thiscall **)(_DWORD *, int, int))(*v3 + 160))(v3, a1, a2);
  return v3 + 2;
}
