int *__cdecl sub_1009B520(int a1, int a2)
{
  int *result; // eax

  if ( *(int *)(a1 + 4) >= 0 )
  {
    result = sub_1000E5F0(off_103DCD78, &a1, *(_DWORD *)(a1 + 4));
    *(_DWORD *)(a2 + 52) = *result;
  }
  else
  {
    result = &a1;
    a1 = -1;
    *(_DWORD *)(a2 + 52) = -1;
  }
  return result;
}
