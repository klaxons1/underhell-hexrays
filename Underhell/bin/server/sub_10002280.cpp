int __thiscall sub_10002280(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_10690170;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10690170 = v1;
      dword_10690160 = -1;
      dword_10690164 = -1;
      dword_10690168 = -1;
      dword_1069016C = 1;
    }
    v3 = result == -1 ? &dword_10690160 : (int *)(this[1] + 40 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10690170 = v1;
      dword_10690160 = -1;
      dword_10690164 = -1;
      dword_10690168 = -1;
      dword_1069016C = 1;
    }
    if ( result == -1 )
      result = dword_10690160;
    else
      result = *(_DWORD *)(this[1] + 40 * result);
  }
  return result;
}
