int __cdecl sub_100CE4D0(int *a1)
{
  int result; // eax

  if ( a1[2] >= 0 )
  {
    result = *a1;
    if ( *a1 )
    {
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, *a1);
      *a1 = 0;
    }
    a1[1] = 0;
  }
  return result;
}
