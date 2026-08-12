_DWORD *__cdecl sub_1018CB00(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // esi

  v2 = sub_10034900(0x6A0u);
  if ( !v2 )
    return 0;
  v3 = sub_1018C890(v2);
  v4 = v3;
  if ( !v3 )
    return 0;
  (*(void (__thiscall **)(_DWORD *, int, int))(*v3 + 160))(v3, a1, a2);
  return v4 + 2;
}
