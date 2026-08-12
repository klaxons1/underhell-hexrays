_DWORD *__cdecl sub_103E1910(int a1, int a2)
{
  int v2; // eax
  _DWORD *v3; // esi

  v2 = sub_100D6340(1912);
  v3 = (_DWORD *)v2;
  if ( v2 )
  {
    sub_10268640(v2);
    *v3 = &CPropAirboat::`vftable';
    v3[280] = &CPropAirboat::`vftable';
    v3[371] = &CPropAirboat::`vftable';
    v3[372] = &CPropAirboat::`vftable';
    v3[452] = -1;
    v3[473] = -1;
    (*(void (__thiscall **)(_DWORD *, int))(*v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
