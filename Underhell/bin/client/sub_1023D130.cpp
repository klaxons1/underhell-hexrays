int __thiscall sub_1023D130(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_1047CB30;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_1047CB30 = v1;
      dword_1047CB20 = -1;
      dword_1047CB24 = -1;
      dword_1047CB28 = -1;
      dword_1047CB2C = 1;
    }
    v3 = result == -1 ? &dword_1047CB20 : (int *)(this[1] + 24 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_1047CB30 = v1;
      dword_1047CB20 = -1;
      dword_1047CB24 = -1;
      dword_1047CB28 = -1;
      dword_1047CB2C = 1;
    }
    if ( result == -1 )
      result = dword_1047CB20;
    else
      result = *(_DWORD *)(this[1] + 24 * result);
  }
  return result;
}
