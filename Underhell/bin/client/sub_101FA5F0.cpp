void __thiscall sub_101FA5F0(_BYTE *this, char a2)
{
  if ( a2 != this[76] )
  {
    if ( this[77] )
    {
      if ( a2 )
        return;
    }
    else if ( a2 )
    {
      sub_101FA490((int)this, 0, 0, 0);
      this[76] = a2;
      return;
    }
    sub_101FA550((int)this, 0);
    this[76] = a2;
  }
}
