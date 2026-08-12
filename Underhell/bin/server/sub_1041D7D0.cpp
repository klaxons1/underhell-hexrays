int __thiscall sub_1041D7D0(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_106F1860;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_106F1860 = v1;
      dword_106F1850 = -1;
      dword_106F1854 = -1;
      dword_106F1858 = -1;
      dword_106F185C = 1;
    }
    v3 = result == -1 ? &dword_106F1850 : (int *)(this[1] + 24 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_106F1860 = v1;
      dword_106F1850 = -1;
      dword_106F1854 = -1;
      dword_106F1858 = -1;
      dword_106F185C = 1;
    }
    if ( result == -1 )
      result = dword_106F1850;
    else
      result = *(_DWORD *)(this[1] + 24 * result);
  }
  return result;
}
