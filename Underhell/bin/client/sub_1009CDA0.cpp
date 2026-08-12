int __cdecl sub_1009CDA0(int a1)
{
  int v1; // eax
  _WORD *v2; // eax

  v1 = sub_10126730(a1);
  if ( v1 >= 0 && (v2 = (_WORD *)(dword_1042D600 + 12 * v1)) != 0 )
  {
    if ( !v2[5] )
    {
      Warning("***\nShared<->Private Event collision!\n***\n");
      return -1;
    }
  }
  else
  {
    v2 = (_WORD *)sub_1009CC70(a1, dword_1042D5FC + 1, 1u, 1);
  }
  return *(_DWORD *)v2;
}
