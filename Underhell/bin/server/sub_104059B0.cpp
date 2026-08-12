char __thiscall sub_104059B0(_BYTE *this)
{
  if ( *((_DWORD *)this + 353) != -1
    && off_1061BE18[4 * (*((_DWORD *)this + 353) & 0xFFF) + 2] == *((_DWORD *)this + 353) >> 12
    && off_1061BE18[4 * (*((_DWORD *)this + 353) & 0xFFF) + 1] )
  {
    return 0;
  }
  else
  {
    return sub_102B1C10(this);
  }
}
