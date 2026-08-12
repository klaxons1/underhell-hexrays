int __cdecl sub_10002040(int a1)
{
  int v1; // eax
  int v2; // eax

  v1 = sub_10126730(a1);
  if ( v1 >= 0 && (v2 = dword_10400F68 + 8 * v1) != 0 )
    return *(_DWORD *)v2;
  else
    return -1;
}
