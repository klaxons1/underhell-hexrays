_DWORD *__thiscall sub_101786F0(_DWORD *this, char a2)
{
  int v3; // ecx

  v3 = this[3];
  *this = &CFXDiscreetLine::`vftable';
  if ( v3 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 52))(v3);
    this[3] = 0;
  }
  sub_1008D9E0(this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
