_DWORD *__thiscall sub_101A4B70(_DWORD *this, char a2)
{
  int v3; // ecx
  int v4; // ecx

  v3 = this[22];
  if ( v3 )
    sub_100F2FF0(v3);
  v4 = this[21];
  if ( v4 )
    sub_100F2FF0(v4);
  sub_10179220(this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
