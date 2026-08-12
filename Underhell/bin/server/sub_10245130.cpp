char *__thiscall sub_10245130(_DWORD *this, int a2)
{
  int v3; // ecx
  int v5; // ecx

  v3 = this[16];
  if ( v3 )
    return (char *)&this[38 * a2] + v3;
  v3 = this[17];
  if ( !v3 )
    return 0;
  if ( !this[13] )
    return (char *)&this[38 * a2] + v3;
  v5 = sub_102466E0(this[13]);
  if ( v5 )
    return (char *)(v5 + this[17] + 152 * a2);
  else
    return 0;
}
