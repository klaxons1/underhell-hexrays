_DWORD *__cdecl sub_102EDA40(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = (_DWORD *)sub_100D6340(1160);
  v3 = v2;
  if ( v2 )
  {
    sub_100C2130(v2);
    *v3 = &CItem_AmmoCrate::`vftable';
    v3[286] = -1;
    v3[283] = 0;
    v3[287] = 5;
    v3[289] = -1;
    (*(void (__thiscall **)(_DWORD *, int))(*v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
