int __thiscall sub_104186C0(_BYTE *this, char a2, void *Src, void *a4)
{
  this[376] ^= (this[376] ^ (4 * a2)) & 4;
  if ( Src )
    sub_10431100(Src);
  else
    sub_10431020((void *)String);
  if ( a4 )
    return sub_10431100(a4);
  else
    return sub_10431020((void *)String);
}
