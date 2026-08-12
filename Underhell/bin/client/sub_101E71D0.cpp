int __thiscall sub_101E71D0(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_10458DF8;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10458DF8 = v1;
      dword_10458DE8 = -1;
      dword_10458DEC = -1;
      dword_10458DF0 = -1;
      dword_10458DF4 = 1;
    }
    v3 = result == -1 ? &dword_10458DE8 : (int *)(this[1] + 24 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10458DF8 = v1;
      dword_10458DE8 = -1;
      dword_10458DEC = -1;
      dword_10458DF0 = -1;
      dword_10458DF4 = 1;
    }
    if ( result == -1 )
      result = dword_10458DE8;
    else
      result = *(_DWORD *)(this[1] + 24 * result);
  }
  return result;
}
