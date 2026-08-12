int __cdecl sub_10261360(_DWORD *a1, int *a2)
{
  int v2; // edi
  unsigned int v3; // esi
  unsigned int v4; // edi
  int result; // eax

  v2 = *a2;
  v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10480434 + 868))(dword_10480434, *a1);
  v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10480434 + 868))(dword_10480434, v2);
  result = dword_10480440(dword_10480434, v3, v4);
  if ( result )
  {
    if ( !byte_103FD4BC )
      return -result;
  }
  else
  {
    result = dword_10480444(dword_10480434, v3, v4);
    if ( !byte_103FD4BD )
      result = -result;
    if ( !result )
      return v4 < v3 ? 1 : -1;
  }
  return result;
}
