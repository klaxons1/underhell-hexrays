int __thiscall sub_101B9A30(_BYTE *this)
{
  if ( this[3588] )
    return sub_10034930((int)this);
  else
    return Warning("Called Release() on CBoneList not allocated via Alloc() method\n");
}
