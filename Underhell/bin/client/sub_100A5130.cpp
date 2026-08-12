_DWORD *__thiscall sub_100A5130(_DWORD *this, char a2)
{
  int v3; // ecx

  v3 = this[4];
  *this = &CFXQuad::`vftable';
  if ( v3 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 52))(v3);
    this[4] = 0;
  }
  sub_1008D9E0(this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
