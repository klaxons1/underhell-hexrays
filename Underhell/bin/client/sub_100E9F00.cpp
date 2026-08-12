_DWORD *__cdecl sub_100E9F00(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // esi

  if ( sub_101F8C60(7040) )
    v4 = sub_100F22C0(a2, a3);
  else
    v4 = 0;
  *(_BYTE *)(v4 + 6720) |= 0x40u;
  *(_DWORD *)(v4 + 6716) = a4;
  *a1 = 0;
  sub_100F1650(v4);
  if ( *a1 )
    sub_100F1860(*a1);
  *a1 = v4;
  return a1;
}
