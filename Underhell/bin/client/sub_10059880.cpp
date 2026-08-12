char *__cdecl sub_10059880(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = sub_10034900(0x7B0u);
  v3 = v2;
  if ( !v2 )
    return 0;
  sub_10047F30((int)v2);
  *v3 = &C_PhysicsProp::`vftable';
  v3[1] = &C_PhysicsProp::`vftable';
  v3[2] = &C_PhysicsProp::`vftable';
  v3[3] = &C_PhysicsProp::`vftable';
  v3[46] = 0;
  *((_BYTE *)v3 + 134) = 2;
  *((_BYTE *)v3 + 1961) = 1;
  (*(void (__thiscall **)(_DWORD *, int, int))(*v3 + 160))(v3, a1, a2);
  return (char *)(v3 + 2);
}
