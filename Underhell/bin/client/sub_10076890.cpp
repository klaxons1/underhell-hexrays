int __cdecl sub_10076890(_DWORD *a1, unsigned __int16 *a2)
{
  unsigned __int16 *v2; // esi
  unsigned __int16 v3; // ax
  int i; // edi

  v2 = a2;
  v3 = *a2;
  for ( i = 0; *v2; v3 = *v2 )
  {
    ++v2;
    i += (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C + 284))(dword_1047CA6C, *a1, v3);
  }
  return i;
}
