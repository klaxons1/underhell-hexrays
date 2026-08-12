_DWORD *__cdecl sub_1031B6E0(int a1, int a2)
{
  int v2; // eax
  _DWORD *v3; // esi

  v2 = sub_100D6340(2200);
  v3 = (_DWORD *)v2;
  if ( v2 )
  {
    sub_100F4EC0(v2);
    *v3 = &CGrenadeHelicopter::`vftable';
    v3[526] = &CGrenadeHelicopter::`vftable';
    v3[538] = -1;
    v3[541] = -1;
    v3[547] = -1;
    v3[544] = 0;
    v3[548] = 5;
    (*(void (__thiscall **)(_DWORD *, int))(*v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
