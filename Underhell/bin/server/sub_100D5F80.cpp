int __stdcall sub_100D5F80(int a1)
{
  int result; // eax
  int v2; // esi

  result = sub_101C46F0(2);
  v2 = result;
  if ( result )
  {
    sub_102629A0(a1, result + 8, result + 20);
    return sub_102629A0(a1, v2 + 40, v2 + 52);
  }
  return result;
}
