_BYTE *__stdcall sub_10278950(int a1)
{
  int v1; // eax
  _BYTE *v2; // esi

  v1 = sub_100D6340(1404);
  v2 = (_BYTE *)v1;
  if ( v1 )
  {
    sub_102AFC00(v1);
    *(_DWORD *)v2 = &CWeaponBaton::`vftable';
    v2[1400] = 0;
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 12;
}
