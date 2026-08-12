char __thiscall sub_103CF3C0(_DWORD *this, int a2)
{
  int v3; // eax

  if ( this[965] != -1
    && off_1061BE18[4 * (this[965] & 0xFFF) + 2] == this[965] >> 12
    && off_1061BE18[4 * (this[965] & 0xFFF) + 1] )
  {
    return 0;
  }
  v3 = this[906];
  if ( v3 )
    return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)v3 + 228))(this[906], a2);
  else
    return sub_100305E0(this, a2);
}
