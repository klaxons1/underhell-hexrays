char __thiscall sub_10350A50(char *this, unsigned int a2, int a3, int *a4)
{
  char v5; // al
  char v6; // bl

  v5 = sub_100CEF80((unsigned int)this, a2, a2, a3, a4);
  v6 = v5;
  if ( this[4141] )
  {
    if ( v5 )
      sub_10023E00(this, 13);
    else
      sub_10023CB0(this, 13);
    return 1;
  }
  else if ( v5 )
  {
    sub_10023E00(this, 13);
    return v6;
  }
  else
  {
    sub_10023CB0(this, 13);
    return 0;
  }
}
