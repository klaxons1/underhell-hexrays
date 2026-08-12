int __thiscall sub_1001B170(_DWORD *this)
{
  int i; // edi
  int v3; // ecx
  int result; // eax
  int v5; // esi

  sub_10021D80();
  for ( i = 0; i < this[910]; ++i )
  {
    v3 = *(_DWORD *)(this[907] + 4 * i);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 68))(v3);
  }
  if ( this[956] )
    sub_10223EB0(this[956]);
  if ( this[957] )
    sub_10223EB0(this[957]);
  if ( this[959] )
    sub_10223EB0(this[959]);
  result = this[958];
  if ( result )
    result = sub_10223EB0(this[958]);
  v5 = this[960];
  if ( v5 )
    return sub_10223EB0(v5);
  return result;
}
