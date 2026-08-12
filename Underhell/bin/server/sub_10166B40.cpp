_DWORD *__cdecl sub_10166B40(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = (_DWORD *)sub_100D6340(1160);
  v3 = v2;
  if ( v2 )
  {
    sub_100C2130(v2);
    v3[280] = &CDefaultPlayerPickupVPhysics::`vftable';
    *v3 = &CGib::`vftable';
    v3[280] = &CGib::`vftable';
    v3[285] = -1;
    v3[288] = -1;
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
