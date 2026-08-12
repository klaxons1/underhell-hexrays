int __stdcall sub_10221070(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, _DWORD *a7)
{
  int v7; // ecx
  int result; // eax

  v7 = a4 / 4;
  if ( a4 / 4 > a5 / 6 )
    v7 = a5 / 6;
  result = *(_DWORD *)(a1 + 40) - a3;
  if ( result > v7 )
    result = v7;
  *a6 = 4 * result;
  *a7 = 6 * result;
  return result;
}
