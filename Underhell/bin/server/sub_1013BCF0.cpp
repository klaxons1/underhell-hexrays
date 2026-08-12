int __cdecl sub_1013BCF0(int a1)
{
  int v1; // eax
  int v2; // eax

  v1 = sub_10244B60(a1);
  if ( v1 >= 0 && (v2 = dword_106B00A4 + 12 * v1) != 0 )
    return *(_DWORD *)v2;
  else
    return -1;
}
