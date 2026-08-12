_DWORD *__cdecl sub_10160CF0(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = sub_10034900(0x5E0u);
  v3 = v2;
  if ( !v2 )
    return 0;
  sub_100A63B0((int)v2);
  *v3 = &C_FireTrail::`vftable';
  v3[1] = &C_FireTrail::`vftable';
  v3[2] = &C_FireTrail::`vftable';
  v3[3] = &C_FireTrail::`vftable';
  v3[298] = &C_FireTrail::`vftable';
  v3[356] = &C_FireTrail::`vftable';
  v3[364] = 0;
  v3[365] = 0;
  (*(void (__thiscall **)(_DWORD *, int, int))(*v3 + 160))(v3, a1, a2);
  return v3 + 2;
}
