_DWORD *__cdecl sub_1006AD50(int a1, int a2)
{
  _DWORD *v2; // esi

  v2 = (_DWORD *)sub_100D6340(832);
  if ( v2 )
  {
    sub_100E33C0(1);
    *v2 = &CAI_DynamicLinkController::`vftable';
    v2[200] = 0;
    v2[201] = 0;
    v2[202] = 0;
    v2[203] = 0;
    v2[204] = 0;
    (*(void (__thiscall **)(_DWORD *, int))(*v2 + 108))(v2, a2);
    return v2;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
