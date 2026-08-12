_DWORD *__thiscall sub_10179440(_DWORD *this, char a2)
{
  int v3; // ecx

  v3 = this[21];
  *this = &CFXLine::`vftable';
  if ( v3 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 52))(v3);
    this[21] = 0;
  }
  sub_1008D9E0(this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
