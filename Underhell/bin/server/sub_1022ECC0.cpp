_DWORD *__cdecl sub_1022ECC0(int a1, int a2)
{
  int v2; // eax
  _DWORD *v3; // esi

  v2 = sub_100D6340(1676);
  v3 = (_DWORD *)v2;
  if ( v2 )
  {
    sub_1022ACE0(v2);
    *v3 = &CInstancedSceneEntity::`vftable';
    v3[200] = &CInstancedSceneEntity::`vftable';
    v3[382] = -1;
    (*(void (__thiscall **)(_DWORD *, int))(*v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
