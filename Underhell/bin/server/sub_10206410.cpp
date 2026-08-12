int sub_10206410()
{
  int i; // esi
  int result; // eax

  for ( i = dword_106C1B58; i; i = *(_DWORD *)(i + 8) )
    result = (*(int (__cdecl **)(_DWORD))i)(*(_DWORD *)(i + 4));
  return result;
}
