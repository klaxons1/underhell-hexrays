int __cdecl sub_1015B7F0(int a1, int a2)
{
  void *v2; // eax
  int v3; // eax
  int v4; // esi

  v2 = sub_10034900(0x8B8u);
  if ( !v2 )
    return 0;
  v3 = sub_1015B6D0((int)v2);
  v4 = v3;
  if ( !v3 )
    return 0;
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v3 + 160))(v3, a1, a2);
  return v4 + 8;
}
