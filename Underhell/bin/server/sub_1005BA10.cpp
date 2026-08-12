_DWORD *__cdecl sub_1005BA10(int a1, int a2)
{
  int v2; // eax
  _DWORD *v3; // esi

  v2 = sub_100D6340(1064);
  v3 = (_DWORD *)v2;
  if ( v2 )
  {
    sub_1005A970(v2);
    *v3 = &CAI_LeadGoal_Weapon::`vftable';
    v3[200] = &CAI_LeadGoal_Weapon::`vftable';
    v3[213] = &CAI_LeadGoal_Weapon::`vftable';
    (*(void (__thiscall **)(_DWORD *, int))(*v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
