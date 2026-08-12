int __thiscall sub_10009210(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_10401160;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10401160 = v1;
      dword_10401150 = -1;
      dword_10401154 = -1;
      dword_10401158 = -1;
      dword_1040115C = 1;
    }
    v3 = result == -1 ? &dword_10401150 : (int *)(this[1] + 24 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10401160 = v1;
      dword_10401150 = -1;
      dword_10401154 = -1;
      dword_10401158 = -1;
      dword_1040115C = 1;
    }
    if ( result == -1 )
      result = dword_10401150;
    else
      result = *(_DWORD *)(this[1] + 24 * result);
  }
  return result;
}
