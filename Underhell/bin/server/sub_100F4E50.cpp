unsigned int __thiscall sub_100F4E50(unsigned int *this, int a2)
{
  unsigned int result; // eax

  sub_100F40C0(this + 534, a2);
  result = this[535];
  if ( result == -1
    || (result >>= 12, off_1061BE18[4 * (this[535] & 0xFFF) + 2] != result)
    || !off_1061BE18[4 * (this[535] & 0xFFF) + 1] )
  {
    if ( a2 )
    {
      result = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
      this[535] = result;
    }
    else
    {
      this[535] = -1;
    }
  }
  return result;
}
