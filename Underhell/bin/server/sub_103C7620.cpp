unsigned __int8 __thiscall sub_103C7620(int this)
{
  unsigned __int8 result; // al

  sub_10393F60((char *)this);
  if ( !sub_100697A0((_DWORD *)this, 1, 1) && !sub_100697A0((_DWORD *)this, 9, 1) )
  {
LABEL_5:
    if ( !*(_DWORD *)(this + 5732) )
      goto LABEL_9;
    goto LABEL_6;
  }
  if ( !*(_DWORD *)(this + 5732) )
  {
    sub_10024230((char *)this, 79);
    sub_10024230((char *)this, 84);
    goto LABEL_5;
  }
LABEL_6:
  if ( !sub_100697A0((_DWORD *)this, 103, 1) )
  {
    sub_10024230((char *)this, 80);
    sub_10024230((char *)this, 81);
    if ( !sub_100697A0((_DWORD *)this, 102, 1) )
      sub_10024230((char *)this, 82);
  }
LABEL_9:
  result = sub_100697A0((_DWORD *)this, 15, 1);
  if ( result )
    return (unsigned __int8)sub_10024230((char *)this, 84);
  return result;
}
