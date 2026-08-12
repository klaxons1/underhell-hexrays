int __thiscall sub_10002260(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_10400F90;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10400F90 = v1;
      dword_10400F80 = -1;
      dword_10400F84 = -1;
      dword_10400F88 = -1;
      dword_10400F8C = 1;
    }
    v3 = result == -1 ? &dword_10400F80 : (int *)(this[1] + 40 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10400F90 = v1;
      dword_10400F80 = -1;
      dword_10400F84 = -1;
      dword_10400F88 = -1;
      dword_10400F8C = 1;
    }
    if ( result == -1 )
      result = dword_10400F80;
    else
      result = *(_DWORD *)(this[1] + 40 * result);
  }
  return result;
}
