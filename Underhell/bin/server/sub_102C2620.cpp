int __thiscall sub_102C2620(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_106DE034;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_106DE034 = v1;
      dword_106DE024 = -1;
      dword_106DE028 = -1;
      dword_106DE02C = -1;
      dword_106DE030 = 1;
    }
    v3 = result == -1 ? &dword_106DE024 : (int *)(this[1] + 48 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_106DE034 = v1;
      dword_106DE024 = -1;
      dword_106DE028 = -1;
      dword_106DE02C = -1;
      dword_106DE030 = 1;
    }
    if ( result == -1 )
      result = dword_106DE024;
    else
      result = *(_DWORD *)(this[1] + 48 * result);
  }
  return result;
}
