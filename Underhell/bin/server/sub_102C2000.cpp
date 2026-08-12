int __thiscall sub_102C2000(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_106DE00C;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_106DE00C = v1;
      dword_106DDFFC = -1;
      dword_106DE000 = -1;
      dword_106DE004 = -1;
      dword_106DE008 = 1;
    }
    v3 = result == -1 ? &dword_106DDFFC : (int *)(this[1] + 28 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_106DE00C = v1;
      dword_106DDFFC = -1;
      dword_106DE000 = -1;
      dword_106DE004 = -1;
      dword_106DE008 = 1;
    }
    if ( result == -1 )
      result = dword_106DDFFC;
    else
      result = *(_DWORD *)(this[1] + 28 * result);
  }
  return result;
}
