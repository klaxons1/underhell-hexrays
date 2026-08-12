_DWORD *__cdecl sub_102CCDB0(int a1, int a2)
{
  int v2; // eax
  _DWORD *v3; // esi

  v2 = sub_100D6340(1452);
  v3 = (_DWORD *)v2;
  if ( v2 )
  {
    sub_102CA510(v2);
    *v3 = &CFuncTankCombineCannon::`vftable';
    v3[352] = -1;
    v3[349] = 0;
    v3[353] = 5;
    v3[355] = -1;
    (*(void (__thiscall **)(_DWORD *, int))(*v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
