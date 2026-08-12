int __thiscall sub_1006BE10(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_10692F00;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10692F00 = v1;
      dword_10692EF0 = -1;
      dword_10692EF4 = -1;
      dword_10692EF8 = -1;
      dword_10692EFC = 1;
    }
    v3 = result == -1 ? &dword_10692EF0 : (int *)(this[1] + 32 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10692F00 = v1;
      dword_10692EF0 = -1;
      dword_10692EF4 = -1;
      dword_10692EF8 = -1;
      dword_10692EFC = 1;
    }
    if ( result == -1 )
      result = dword_10692EF0;
    else
      result = *(_DWORD *)(this[1] + 32 * result);
  }
  return result;
}
