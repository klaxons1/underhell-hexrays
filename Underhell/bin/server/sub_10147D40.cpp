_DWORD *__stdcall sub_10147D40(int a1)
{
  int v1; // eax
  _DWORD *v2; // esi

  v1 = sub_100D6340(816);
  v2 = (_DWORD *)v1;
  if ( v1 )
  {
    sub_101480A0(v1);
    *v2 = &CAreaPortal::`vftable';
    v2[203] = 1;
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(_DWORD *, int))(*v2 + 108))(v2, a1);
  return v2 + 3;
}
