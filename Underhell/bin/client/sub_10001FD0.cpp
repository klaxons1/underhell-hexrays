char *__cdecl sub_10001FD0(const char *a1)
{
  char *result; // eax

  if ( !a1 )
    return 0;
  result = (char *)(*(int (__thiscall **)(_DWORD, unsigned int))(*g_pMemAlloc + 4))(g_pMemAlloc, strlen(a1) + 1);
  if ( !result )
    return 0;
  strcpy(result, a1);
  return result;
}
