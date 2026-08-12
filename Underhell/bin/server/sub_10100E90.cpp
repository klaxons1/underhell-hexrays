int __cdecl sub_10100E90(int a1, int a2)
{
  int v2; // eax

  if ( !a1 || !(unsigned __int8)sub_10245FE0(a1) || a2 < 0 || a2 >= sub_10245270(a1) )
    return 0;
  v2 = sub_10245550(a2);
  if ( *(_DWORD *)(v2 + 176) )
    return v2 + *(_DWORD *)(v2 + 172);
  else
    return 0;
}
