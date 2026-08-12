unsigned int __thiscall sub_1001AFE0(_DWORD *this)
{
  unsigned int result; // eax
  int *v3; // ecx

  result = this[954];
  if ( result != -1 )
  {
    v3 = &off_1061BE18[4 * (this[954] & 0xFFF) + 1];
    result >>= 12;
    if ( v3[1] == result )
    {
      if ( *v3 )
        result = sub_10225FD0(this, this[954]);
    }
  }
  this[953] = 0;
  return result;
}
