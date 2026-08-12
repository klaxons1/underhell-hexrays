int __cdecl sub_1013BF10(int a1)
{
  int v1; // eax
  _WORD *v2; // eax

  v1 = sub_10244B60(a1);
  if ( v1 >= 0 && (v2 = (_WORD *)(dword_106B00A4 + 12 * v1)) != 0 )
  {
    if ( !v2[5] )
    {
      Warning("***\nShared<->Private Event collision!\n***\n");
      return -1;
    }
  }
  else
  {
    v2 = (_WORD *)sub_1013BDE0(a1, dword_106B00A0 + 1, 1u, 1);
  }
  return *(_DWORD *)v2;
}
