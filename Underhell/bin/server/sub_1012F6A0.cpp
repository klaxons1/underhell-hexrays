_DWORD *__cdecl sub_1012F6A0(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = (_DWORD *)sub_100D6340(1144);
  v3 = v2;
  if ( v2 )
  {
    sub_100C2130(v2);
    *v3 = &CEnvEffectsScript::`vftable';
    v3[281] = 0;
    v3[282] = 0;
    v3[283] = 0;
    v3[284] = 0;
    v3[285] = 0;
    (*(void (__thiscall **)(_DWORD *, int))(*v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
