_DWORD *__stdcall sub_102CECD0(int a1)
{
  int v1; // eax
  _DWORD *v2; // esi

  v1 = sub_100D6340(1424);
  v2 = (_DWORD *)v1;
  if ( v1 )
  {
    sub_102CA510(v1);
    *v2 = &CFuncTankAirboatGun::`vftable';
    v2[353] = -1;
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(_DWORD *, int))(*v2 + 108))(v2, a1);
  return v2 + 3;
}
