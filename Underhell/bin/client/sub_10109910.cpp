void __thiscall sub_10109910(_BYTE *this, int a2, int ArgList, int a4, int a5)
{
  if ( this[20] )
  {
    if ( !a2 )
      sub_10109720((int)this, "binary data differs (%i bytes)\n", ArgList);
    sub_101097C0((int)this, a2, "binary (%i bytes)\n", ArgList);
  }
}
