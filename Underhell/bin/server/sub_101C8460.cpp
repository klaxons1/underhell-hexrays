int *__cdecl sub_101C8460(int a1, int a2)
{
  int v2; // eax
  unsigned __int16 *v3; // edi
  unsigned __int16 *v4; // eax

  if ( (*(_DWORD *)(a2 + 764) & 0x10) == 0
    || (dword_106BA7DC
      ? (v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BA7DC + 4))(dword_106BA7DC, a2))
      : (v2 = 0),
        (v3 = (unsigned __int16 *)v2) == 0) )
  {
    *(_DWORD *)(a2 + 764) |= 0x10u;
    if ( dword_106BA7DC )
      v4 = (unsigned __int16 *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BA7DC + 8))(dword_106BA7DC, a2);
    else
      v4 = 0;
    v3 = v4;
    sub_101C8400(v4);
  }
  return sub_101C80A0(v3, a1);
}
