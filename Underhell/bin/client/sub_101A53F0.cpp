_DWORD *__cdecl sub_101A53F0(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = sub_10034900(0xDA8u);
  v3 = v2;
  if ( !v2 )
    return 0;
  sub_100119B0(v2);
  *v3 = &C_GrenadeHopwire::`vftable';
  v3[1] = &C_GrenadeHopwire::`vftable';
  v3[2] = &C_GrenadeHopwire::`vftable';
  v3[3] = &C_GrenadeHopwire::`vftable';
  sub_101A4910((int)(v3 + 848));
  *((_BYTE *)v3 + 3412) = 0;
  (*(void (__thiscall **)(_DWORD *, int, int))(*v3 + 160))(v3, a1, a2);
  return v3 + 2;
}
