void __thiscall sub_10109B40(_BYTE *this, int a2, const char *a3, const char *ArgList)
{
  if ( this[20] )
  {
    if ( !a2 )
      sub_10109720((int)this, "string differs (net %s pred %s)\n", ArgList, a3);
    sub_101097C0((int)this, a2, "string (%s)\n", a3);
  }
}
