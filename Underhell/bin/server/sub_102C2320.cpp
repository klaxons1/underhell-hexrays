int __thiscall sub_102C2320(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_106DE020;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_106DE020 = v1;
      dword_106DE010 = -1;
      dword_106DE014 = -1;
      dword_106DE018 = -1;
      dword_106DE01C = 1;
    }
    v3 = result == -1 ? &dword_106DE010 : (int *)(this[1] + 40 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_106DE020 = v1;
      dword_106DE010 = -1;
      dword_106DE014 = -1;
      dword_106DE018 = -1;
      dword_106DE01C = 1;
    }
    if ( result == -1 )
      result = dword_106DE010;
    else
      result = *(_DWORD *)(this[1] + 40 * result);
  }
  return result;
}
