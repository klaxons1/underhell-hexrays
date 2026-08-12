int __cdecl sub_1019C5C0(int a1, int a2)
{
  void *v2; // eax
  int v3; // eax
  int v4; // esi

  v2 = sub_10034900(0xE48u);
  if ( !v2 )
    return 0;
  v3 = sub_1019B9C0((int)v2);
  v4 = v3;
  if ( !v3 )
    return 0;
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v3 + 160))(v3, a1, a2);
  return v4 + 8;
}
