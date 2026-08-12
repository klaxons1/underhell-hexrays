void __cdecl sub_104044E0(int a1, char a2)
{
  bool v2; // zf

  if ( a2 )
  {
    v2 = *(_BYTE *)(a1 + 896) == 0;
    *(_BYTE *)(a1 + 897) = 1;
    if ( !v2 )
      sub_10242BA0(a1);
  }
  else
  {
    v2 = *(_BYTE *)(a1 + 896) == 0;
    *(_BYTE *)(a1 + 897) = 0;
    if ( !v2 )
      sub_10242060((int *)a1);
  }
}
