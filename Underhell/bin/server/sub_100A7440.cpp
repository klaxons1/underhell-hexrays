int sub_100A7440()
{
  int v0; // eax
  int result; // eax

  sub_1007D9F0(dword_10690E5C);
  sub_1007D9F0(dword_10690E64);
  sub_1007D9F0(dword_10690E6C);
  sub_1007D9F0(dword_1069528C);
  v0 = sub_10184390(4);
  if ( v0 )
    dword_10690174 = sub_10244D70(v0);
  else
    dword_10690174 = 0;
  result = sub_10184390(4);
  if ( result )
  {
    result = sub_10244D70(result);
    dword_10692EE8 = result;
  }
  else
  {
    dword_10692EE8 = 0;
  }
  return result;
}
