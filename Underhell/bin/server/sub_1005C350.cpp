_DWORD *__stdcall sub_1005C350(int a1)
{
  _DWORD *v1; // esi

  v1 = (_DWORD *)sub_100D6340(804);
  if ( v1 )
  {
    sub_100E33C0(0);
    *v1 = &CRopeAnchor::`vftable';
    v1[200] = -1;
  }
  else
  {
    v1 = 0;
  }
  (*(void (__thiscall **)(_DWORD *, int))(*v1 + 108))(v1, a1);
  return v1 + 3;
}
