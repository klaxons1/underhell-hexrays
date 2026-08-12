char __thiscall sub_1018ABA0(_DWORD *this)
{
  int v1; // eax
  _DWORD *i; // ecx

  v1 = 0;
  for ( i = this + 185; !*i; ++i )
  {
    if ( ++v1 >= 4 )
      return 0;
  }
  return 1;
}
