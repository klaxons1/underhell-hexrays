int __thiscall sub_100CC5E0(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_10430EA8;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10430EA8 = v1;
      dword_10430E98 = -1;
      dword_10430E9C = -1;
      dword_10430EA0 = -1;
      dword_10430EA4 = 1;
    }
    v3 = result == -1 ? &dword_10430E98 : (int *)(this[1] + 24 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10430EA8 = v1;
      dword_10430E98 = -1;
      dword_10430E9C = -1;
      dword_10430EA0 = -1;
      dword_10430EA4 = 1;
    }
    if ( result == -1 )
      result = dword_10430E98;
    else
      result = *(_DWORD *)(this[1] + 24 * result);
  }
  return result;
}
