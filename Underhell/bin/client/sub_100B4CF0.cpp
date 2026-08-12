int __thiscall sub_100B4CF0(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_1042FC20;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_1042FC20 = v1;
      dword_1042FC10 = -1;
      dword_1042FC14 = -1;
      dword_1042FC18 = -1;
      dword_1042FC1C = 1;
    }
    v3 = result == -1 ? &dword_1042FC10 : (int *)(this[1] + 24 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_1042FC20 = v1;
      dword_1042FC10 = -1;
      dword_1042FC14 = -1;
      dword_1042FC18 = -1;
      dword_1042FC1C = 1;
    }
    if ( result == -1 )
      result = dword_1042FC10;
    else
      result = *(_DWORD *)(this[1] + 24 * result);
  }
  return result;
}
