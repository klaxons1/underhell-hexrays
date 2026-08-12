double __thiscall sub_10316CE0(_DWORD *this)
{
  if ( (this[62] & 0x20000) != 0 )
    return *(float *)(dword_106E3854 + 44);
  if ( this[1030] == 4 && this[1053] == 2 )
    return *(float *)(dword_106E3A4C + 44);
  if ( sub_103131E0(this) )
    return 3000.0;
  return sub_102B2420((float *)this);
}
