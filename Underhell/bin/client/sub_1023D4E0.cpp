int __thiscall sub_1023D4E0(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_1047CB44;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_1047CB44 = v1;
      dword_1047CB34 = -1;
      dword_1047CB38 = -1;
      dword_1047CB3C = -1;
      dword_1047CB40 = 1;
    }
    v3 = result == -1 ? &dword_1047CB34 : (int *)(this[1] + 24 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_1047CB44 = v1;
      dword_1047CB34 = -1;
      dword_1047CB38 = -1;
      dword_1047CB3C = -1;
      dword_1047CB40 = 1;
    }
    if ( result == -1 )
      result = dword_1047CB34;
    else
      result = *(_DWORD *)(this[1] + 24 * result);
  }
  return result;
}
