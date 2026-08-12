int __cdecl sub_1010E410(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  char v4; // dl

  v2 = a2;
  if ( !a2 || !*(_BYTE *)a2 )
    return 0;
  v3 = strlen((const char *)a2);
  if ( *(_BYTE *)a2 == 34 )
  {
    v2 = a2 + 1;
    v3 -= 2;
    *(_BYTE *)(v3 + a2 + 1) = v4;
  }
  if ( v3 > 127 )
    *(_BYTE *)(a2 + 127) = 0;
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B3CDC + 416))(dword_106B3CDC, a1, v2);
  return v2;
}
