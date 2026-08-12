int __cdecl sub_100E8600(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 )
  {
    result = *(_DWORD *)(a1 + 52);
    dword_1060F30C = result;
  }
  else
  {
    dword_1060F30C = -1;
  }
  return result;
}
