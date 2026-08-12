int __thiscall sub_10265490(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_10480478;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10480478 = v1;
      dword_10480468 = -1;
      dword_1048046C = -1;
      dword_10480470 = -1;
      dword_10480474 = 1;
    }
    v3 = result == -1 ? &dword_10480468 : (int *)(this[1] + 24 * result);
    if ( v3[1] == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10480478 = v1;
      dword_10480468 = -1;
      dword_1048046C = -1;
      dword_10480470 = -1;
      dword_10480474 = 1;
    }
    if ( result == -1 )
      result = dword_1048046C;
    else
      result = *(_DWORD *)(this[1] + 24 * result + 4);
  }
  return result;
}
