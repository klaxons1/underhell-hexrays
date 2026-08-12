int __thiscall sub_100930B0(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_1042CB50;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_1042CB50 = v1;
      dword_1042CB40 = -1;
      dword_1042CB44 = -1;
      dword_1042CB48 = -1;
      dword_1042CB4C = 1;
    }
    v3 = result == -1 ? &dword_1042CB40 : (int *)(this[1] + 40 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_1042CB50 = v1;
      dword_1042CB40 = -1;
      dword_1042CB44 = -1;
      dword_1042CB48 = -1;
      dword_1042CB4C = 1;
    }
    if ( result == -1 )
      result = dword_1042CB40;
    else
      result = *(_DWORD *)(this[1] + 40 * result);
  }
  return result;
}
