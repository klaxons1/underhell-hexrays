int __thiscall sub_1008F4A0(int *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // esi

  v2 = (_DWORD *)sub_1001ACF0(this);
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      sub_10034930((int)v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = (_DWORD *)sub_1001ACF0(this + 2);
  if ( v4 )
  {
    do
    {
      v5 = (_DWORD *)*v4;
      sub_10034930((int)v4);
      v4 = v5;
    }
    while ( v5 );
  }
  sub_1001ACF0(this + 2);
  return sub_1001ACF0(this);
}
