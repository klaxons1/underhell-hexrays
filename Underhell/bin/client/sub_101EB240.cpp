int __thiscall sub_101EB240(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_10458E20;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10458E20 = v1;
      dword_10458E10 = -1;
      dword_10458E14 = -1;
      dword_10458E18 = -1;
      dword_10458E1C = 1;
    }
    v3 = result == -1 ? &dword_10458E10 : (int *)(this[1] + 48 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10458E20 = v1;
      dword_10458E10 = -1;
      dword_10458E14 = -1;
      dword_10458E18 = -1;
      dword_10458E1C = 1;
    }
    if ( result == -1 )
      result = dword_10458E10;
    else
      result = *(_DWORD *)(this[1] + 48 * result);
  }
  return result;
}
