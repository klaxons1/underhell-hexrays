int __thiscall sub_100BB3F0(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_106956C8;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_106956C8 = v1;
      dword_106956B8 = -1;
      dword_106956BC = -1;
      dword_106956C0 = -1;
      dword_106956C4 = 1;
    }
    v3 = result == -1 ? &dword_106956B8 : (int *)(this[1] + 24 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_106956C8 = v1;
      dword_106956B8 = -1;
      dword_106956BC = -1;
      dword_106956C0 = -1;
      dword_106956C4 = 1;
    }
    if ( result == -1 )
      result = dword_106956B8;
    else
      result = *(_DWORD *)(this[1] + 24 * result);
  }
  return result;
}
