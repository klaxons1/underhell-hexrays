int __thiscall sub_102E9140(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_106E1708;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_106E1708 = v1;
      dword_106E16F8 = -1;
      dword_106E16FC = -1;
      dword_106E1700 = -1;
      dword_106E1704 = 1;
    }
    v3 = result == -1 ? &dword_106E16F8 : (int *)(this[1] + 24 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_106E1708 = v1;
      dword_106E16F8 = -1;
      dword_106E16FC = -1;
      dword_106E1700 = -1;
      dword_106E1704 = 1;
    }
    if ( result == -1 )
      result = dword_106E16F8;
    else
      result = *(_DWORD *)(this[1] + 24 * result);
  }
  return result;
}
