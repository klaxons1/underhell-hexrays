int __cdecl sub_10070850(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 )
  {
    *(_BYTE *)(a1 + 1256) = 1;
    *(_DWORD *)(a1 + 1232) = 0;
  }
  return result;
}
