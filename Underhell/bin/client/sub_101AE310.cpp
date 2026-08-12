int __stdcall sub_101AE310(unsigned __int16 *a1, int a2)
{
  unsigned __int16 *v2; // esi
  unsigned __int16 v3; // ax
  int i; // edi

  v2 = a1;
  v3 = *a1;
  for ( i = 0; *v2; v3 = *v2 )
  {
    ++v2;
    i += (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 284))(dword_1047CA6C, a2, v3);
  }
  return i;
}
