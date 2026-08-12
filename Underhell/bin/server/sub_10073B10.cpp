_DWORD *__stdcall sub_10073B10(int a1)
{
  _DWORD *v1; // esi

  v1 = (_DWORD *)sub_100D6340(856);
  if ( v1 )
  {
    sub_100E33C0(1);
    *v1 = &CNodeEnt::`vftable';
    v1[59] = 0;
  }
  else
  {
    v1 = 0;
  }
  (*(void (__thiscall **)(_DWORD *, int))(*v1 + 108))(v1, a1);
  return v1 + 3;
}
