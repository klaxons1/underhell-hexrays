int __stdcall sub_10417D20(int a1)
{
  int result; // eax

  result = sub_1012BC10(&dword_1069E3E0, 0);
  if ( !result )
    return 0;
  while ( *(_DWORD *)(result + 104) != a1 )
  {
    result = sub_1012BC10(&dword_1069E3E0, result);
    if ( !result )
      return 0;
  }
  return result;
}
