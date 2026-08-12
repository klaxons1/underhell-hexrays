int __thiscall sub_10283700(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_10481A88;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10481A88 = v1;
      dword_10481A78 = -1;
      dword_10481A7C = -1;
      dword_10481A80 = -1;
      dword_10481A84 = 1;
    }
    v3 = result == -1 ? &dword_10481A78 : (int *)(this[1] + 20 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10481A88 = v1;
      dword_10481A78 = -1;
      dword_10481A7C = -1;
      dword_10481A80 = -1;
      dword_10481A84 = 1;
    }
    if ( result == -1 )
      result = dword_10481A78;
    else
      result = *(_DWORD *)(this[1] + 20 * result);
  }
  return result;
}
