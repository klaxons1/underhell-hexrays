_DWORD *__cdecl sub_1005FA70(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = sub_10034900(0x7C8u);
  v3 = v2;
  if ( !v2 )
    return 0;
  sub_10047F30((int)v2);
  *v3 = &C_DynamicProp::`vftable';
  v3[1] = &C_DynamicProp::`vftable';
  v3[2] = &C_DynamicProp::`vftable';
  v3[3] = &C_DynamicProp::`vftable';
  v3[491] = -1;
  (*(void (__thiscall **)(_DWORD *, int, int))(*v3 + 160))(v3, a1, a2);
  return v3 + 2;
}
