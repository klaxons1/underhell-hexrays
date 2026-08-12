bool __thiscall sub_100A8750(_DWORD *this, _DWORD *a2)
{
  _DWORD *v4; // eax

  if ( this[225] == 2 || !*a2 )
    return 1;
  v4 = (_DWORD *)sub_100D7680(*a2);
  return this[225] == sub_10023D10(v4, 32);
}
