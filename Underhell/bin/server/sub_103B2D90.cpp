unsigned __int8 __thiscall sub_103B2D90(int this)
{
  unsigned __int8 result; // al

  nullsub_4();
  if ( *(_DWORD *)(this + 2324) != 4 )
    sub_10024230((char *)this, 73);
  if ( sub_100697A0((_DWORD *)this, 36, 0) || sub_100697A0((_DWORD *)this, 35, 0) )
    sub_10024230((char *)this, 77);
  if ( sub_100697A0((_DWORD *)this, 1, 1) )
    sub_10024230((char *)this, 79);
  if ( (*(_DWORD *)(*(_DWORD *)(this + 2124) + 12) & 0x200000) != 0 && sub_10023D10((_DWORD *)this, 79) )
    sub_10024230((char *)this, 79);
  if ( sub_100697A0((_DWORD *)this, 2, 1) )
    return (unsigned __int8)sub_10024230((char *)this, 75);
  result = sub_100697A0((_DWORD *)this, 1, 1);
  if ( result )
  {
    if ( *(_DWORD *)(dword_10698344 + 48) )
      return (unsigned __int8)sub_10024230((char *)this, 75);
  }
  return result;
}
