_DWORD *__cdecl sub_100EB150(_DWORD *a1, int a2)
{
  _DWORD *v2; // esi

  v2 = (_DWORD *)sub_100DDA40(376);
  if ( v2 )
  {
    sub_100F2BA0(a2);
    *v2 = &CSimple3DEmitter::`vftable';
    sub_100E8AB0(v2 + 65);
  }
  else
  {
    v2 = 0;
  }
  v2[39] &= ~0x80u;
  *a1 = 0;
  if ( v2 )
  {
    sub_100F2950(v2);
    if ( *a1 )
      sub_100F2FF0(*a1);
    *a1 = v2;
  }
  return a1;
}
