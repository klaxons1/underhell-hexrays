int __cdecl sub_100032E0(int a1)
{
  int v1; // eax
  _WORD *v2; // eax

  v1 = sub_10244B60(a1);
  if ( v1 >= 0 && (v2 = (_WORD *)(dword_10690148 + 8 * v1)) != 0 )
  {
    if ( !v2[3] )
    {
      Warning("***\nShared<->Private Activity collision!\n***\n");
      return -1;
    }
  }
  else
  {
    v2 = (_WORD *)sub_100031B0(a1, dword_10690144 + 1, 1u);
  }
  return *(_DWORD *)v2;
}
