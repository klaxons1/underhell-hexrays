void __thiscall sub_10109950(_BYTE *this, int a2, __int16 *a3, __int16 *a4, int a5)
{
  if ( this[20] )
  {
    if ( !a2 )
      sub_10109720((int)this, "short differs (net %i pred %i) diff(%i)\n", *a4, *a3, *a3 - *a4);
    sub_101097C0((int)this, a2, "short (%i)\n", *a3);
  }
}
