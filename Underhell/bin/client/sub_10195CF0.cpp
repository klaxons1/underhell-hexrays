int *__cdecl sub_10195CF0(int *a1, int a2)
{
  int v2; // esi

  v2 = sub_100DDA40(380);
  if ( v2 )
  {
    sub_100F2BA0((float *)v2, a2);
    *(_DWORD *)v2 = &CPlasmaSpray::`vftable';
    *(_DWORD *)(v2 + 260) = -1;
    sub_100E8AB0((void *)(v2 + 264));
  }
  else
  {
    v2 = 0;
  }
  *a1 = 0;
  if ( v2 )
  {
    sub_100F2950((_DWORD *)v2);
    if ( *a1 )
      sub_100F2FF0(*a1);
    *a1 = v2;
  }
  return a1;
}
