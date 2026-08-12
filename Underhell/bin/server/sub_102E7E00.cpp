_DWORD *__cdecl sub_102E7E00(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = (_DWORD *)sub_100D6340(1120);
  v3 = v2;
  if ( v2 )
  {
    sub_102585C0(v2);
    v3[276] = -1;
    v3[273] = 0;
    v3[277] = 5;
    *v3 = &CTriggerPhysicsTrap::`vftable';
    (*(void (__thiscall **)(_DWORD *, int))(*v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
