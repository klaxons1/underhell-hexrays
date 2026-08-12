_DWORD *__cdecl sub_10240B50(int a1, int a2)
{
  int v2; // eax
  _DWORD *v3; // esi

  v2 = sub_100D6340(1120);
  v3 = (_DWORD *)v2;
  if ( v2 )
  {
    sub_102585C0(v2);
    *v3 = &CTriggerSoundscape::`vftable';
    v3[273] = -1;
    v3[275] = 0;
    v3[276] = 0;
    v3[277] = 0;
    v3[278] = 0;
    v3[279] = 0;
    (*(void (__thiscall **)(_DWORD *, int))(*v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
