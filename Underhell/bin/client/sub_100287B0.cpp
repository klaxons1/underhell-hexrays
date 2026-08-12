int __cdecl sub_100287B0(int a1)
{
  unsigned int v1; // eax
  int result; // eax

  v1 = *(_DWORD *)(*(_DWORD *)a1 + 324);
  if ( v1 == -1 )
    return (*(int (__stdcall **)(_DWORD, int, int, _DWORD))(*(_DWORD *)(*(_DWORD *)a1 + 4) + 64))(
             0,
             -1,
             -1,
             *((float *)off_103DC81C + 3));
  result = v1 >> 12;
  if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(*(_DWORD *)a1 + 324) & 0xFFF) + 2) != result
    || !*((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(*(_DWORD *)a1 + 324) & 0xFFF) + 1) )
  {
    return (*(int (__stdcall **)(_DWORD, int, int, _DWORD))(*(_DWORD *)(*(_DWORD *)a1 + 4) + 64))(
             0,
             -1,
             -1,
             *((float *)off_103DC81C + 3));
  }
  return result;
}
