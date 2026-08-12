_DWORD *__thiscall sub_101A5460(_DWORD *this, char a2)
{
  int v3; // ecx
  int v4; // ecx

  v3 = this[870];
  if ( v3 )
    sub_100F2FF0(v3);
  v4 = this[869];
  if ( v4 )
    sub_100F2FF0(v4);
  sub_10179220(this + 848);
  sub_100115C0(this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
