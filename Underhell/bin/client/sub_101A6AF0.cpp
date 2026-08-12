_DWORD *__thiscall sub_101A6AF0(_DWORD *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  sub_10081880(this);
  *this = &ClientModeHLNormal::`vftable';
  this[1] = &ClientModeHLNormal::`vftable';
  v2 = (_DWORD *)sub_100DDA40(328);
  if ( v2 )
    v3 = sub_101A6980(v2);
  else
    v3 = 0;
  this[3] = v3;
  (*(void (__thiscall **)(_DWORD *, int, int))(*v3 + 880))(v3, dword_104131A4, dword_104131A8);
  return this;
}
