int __thiscall sub_101E1FB0(_BYTE *this, char a2, void *Src, void *a4)
{
  this[376] ^= (this[376] ^ (4 * a2)) & 4;
  if ( Src )
    sub_1022D0A0(Src);
  else
    sub_1022CFC0((void *)Locale);
  if ( a4 )
    return sub_1022D0A0(a4);
  else
    return sub_1022CFC0((void *)Locale);
}
