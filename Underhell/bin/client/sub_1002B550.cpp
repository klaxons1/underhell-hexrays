int sub_1002B550()
{
  int result; // eax
  int v1; // edx

  result = dword_104038F0;
  v1 = dword_104038F0 - 1;
  if ( dword_104038F0 - 1 >= 0 )
  {
    dword_10403940 = *(_DWORD *)(dword_104038E4 + 8 * v1);
    result = 0;
    dword_10403944 = *(_DWORD *)(dword_104038E4 + 8 * v1 + 4);
    --dword_104038F0;
  }
  return result;
}
