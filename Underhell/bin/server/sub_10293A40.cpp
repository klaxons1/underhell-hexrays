int __thiscall sub_10293A40(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_106DAFFC;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_106DAFFC = v1;
      dword_106DAFEC = -1;
      dword_106DAFF0 = -1;
      dword_106DAFF4 = -1;
      dword_106DAFF8 = 1;
    }
    v3 = result == -1 ? &dword_106DAFEC : (int *)(this[1] + 24 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_106DAFFC = v1;
      dword_106DAFEC = -1;
      dword_106DAFF0 = -1;
      dword_106DAFF4 = -1;
      dword_106DAFF8 = 1;
    }
    if ( result == -1 )
      result = dword_106DAFEC;
    else
      result = *(_DWORD *)(this[1] + 24 * result);
  }
  return result;
}
