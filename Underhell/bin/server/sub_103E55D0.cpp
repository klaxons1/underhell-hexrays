_DWORD *__thiscall sub_103E55D0(_DWORD *this, char a2)
{
  int v3; // eax

  v3 = this[280];
  *this = &CCraneTip::`vftable';
  if ( v3 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 56))(dword_106BAFF4, v3);
  sub_100C4960(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
