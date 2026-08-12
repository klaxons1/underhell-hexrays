_DWORD *__cdecl sub_100A6650(int a1)
{
  _DWORD *v1; // esi

  v1 = (_DWORD *)sub_100DDA40(260);
  if ( !v1 )
    return 0;
  sub_100F2BA0(a1);
  *v1 = &WaterDebrisEffect::`vftable';
  return v1;
}
