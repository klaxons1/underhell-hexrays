int __thiscall sub_1039E4D0(_DWORD *this, int a2)
{
  int result; // eax

  if ( a2 == 1 )
  {
    result = sub_1039E3F0((int)this);
    if ( !result )
      return 1;
  }
  else if ( a2 == 9 )
  {
    result = sub_1039E3F0((int)this);
    if ( !result )
      return 93;
  }
  else if ( a2 == 88 && sub_10023D10(this, 13) )
  {
    return 94;
  }
  else
  {
    return a2;
  }
  return result;
}
