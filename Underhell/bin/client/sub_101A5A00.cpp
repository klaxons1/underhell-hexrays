_DWORD *__thiscall sub_101A5A00(_DWORD *this, char a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  v3 = this[544];
  if ( v3 )
    sub_100F2FF0(v3);
  v4 = this[543];
  if ( v4 )
    sub_100F2FF0(v4);
  v5 = this[542];
  if ( v5 )
    sub_100F2FF0(v5);
  sub_1000A9F0(this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
