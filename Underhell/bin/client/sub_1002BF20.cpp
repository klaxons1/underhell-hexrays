void __thiscall sub_1002BF20(_DWORD *this, unsigned int a2)
{
  if ( a2 )
  {
    if ( a2 != this[1] )
    {
      sub_10034930(this[2]);
      this[2] = 0;
      this[1] = 0;
    }
    if ( !this[2] )
    {
      this[1] = a2;
      this[2] = sub_100DDA40((unsigned __int64)a2 >> 30 != 0 ? -1 : 4 * a2);
    }
  }
  else
  {
    sub_10034930(this[2]);
    this[2] = 0;
    this[1] = 0;
  }
}
