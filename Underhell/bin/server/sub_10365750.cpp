int __thiscall sub_10365750(_DWORD *this)
{
  int v2; // edx
  int result; // eax

  sub_10021F20(this);
  v2 = dword_106E7F14;
  result = 0;
  if ( dword_106E7F14 > 0 )
  {
    while ( *(_DWORD **)(dword_106E7F08 + 4 * result) != this )
    {
      if ( ++result >= dword_106E7F14 )
        return result;
    }
    if ( result != -1 )
    {
      if ( dword_106E7F14 - result - 1 > 0 )
      {
        result = (int)memcpy(
                        (void *)(dword_106E7F08 + 4 * result),
                        (const void *)(dword_106E7F08 + 4 * result + 4),
                        4 * (dword_106E7F14 - result - 1));
        v2 = dword_106E7F14;
      }
      dword_106E7F14 = v2 - 1;
    }
  }
  return result;
}
