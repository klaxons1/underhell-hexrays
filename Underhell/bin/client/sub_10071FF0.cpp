int __thiscall sub_10071FF0(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_10412B58;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10412B58 = v1;
      dword_10412B48 = -1;
      dword_10412B4C = -1;
      dword_10412B50 = -1;
      dword_10412B54 = 1;
    }
    v3 = result == -1 ? &dword_10412B48 : (int *)(this[1] + 24 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10412B58 = v1;
      dword_10412B48 = -1;
      dword_10412B4C = -1;
      dword_10412B50 = -1;
      dword_10412B54 = 1;
    }
    if ( result == -1 )
      result = dword_10412B48;
    else
      result = *(_DWORD *)(this[1] + 24 * result);
  }
  return result;
}
