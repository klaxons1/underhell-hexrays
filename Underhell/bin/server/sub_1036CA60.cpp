int __thiscall sub_1036CA60(_DWORD *this, int a2, int a3, int a4)
{
  if ( a2 == 24 )
  {
    if ( a3 == 108 && sub_10023D10(this, 10) )
      return 43;
  }
  else if ( a2 != 74 && a2 != 75 )
  {
    return sub_10043EF0(this, a2, a3, a4);
  }
  if ( !sub_1036C200((int)this) )
    return 94;
  return sub_10043EF0(this, a2, a3, a4);
}
