int __thiscall sub_1041F7F0(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_106F1888;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_106F1888 = v1;
      dword_106F1878 = -1;
      dword_106F187C = -1;
      dword_106F1880 = -1;
      dword_106F1884 = 1;
    }
    v3 = result == -1 ? &dword_106F1878 : (int *)(this[1] + 48 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_106F1888 = v1;
      dword_106F1878 = -1;
      dword_106F187C = -1;
      dword_106F1880 = -1;
      dword_106F1884 = 1;
    }
    if ( result == -1 )
      result = dword_106F1878;
    else
      result = *(_DWORD *)(this[1] + 48 * result);
  }
  return result;
}
