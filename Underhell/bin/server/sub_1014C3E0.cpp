_DWORD *__cdecl sub_1014C3E0(int a1, int a2)
{
  int v2; // eax
  _DWORD *v3; // esi

  v2 = sub_100D6340(2364);
  v3 = (_DWORD *)v2;
  if ( v2 )
  {
    sub_101491B0(v2);
    *v3 = &CBreakableSurface::`vftable';
    v3[200] = &CBreakableSurface::`vftable';
    v3[201] = &CBreakableSurface::`vftable';
    (*(void (__thiscall **)(_DWORD *, int))(*v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
