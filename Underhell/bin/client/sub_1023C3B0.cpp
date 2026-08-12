int __thiscall sub_1023C3B0(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_1047CB1C;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_1047CB1C = v1;
      dword_1047CB0C = -1;
      dword_1047CB10 = -1;
      dword_1047CB14 = -1;
      dword_1047CB18 = 1;
    }
    v3 = result == -1 ? &dword_1047CB0C : (int *)(this[1] + 24 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_1047CB1C = v1;
      dword_1047CB0C = -1;
      dword_1047CB10 = -1;
      dword_1047CB14 = -1;
      dword_1047CB18 = 1;
    }
    if ( result == -1 )
      result = dword_1047CB0C;
    else
      result = *(_DWORD *)(this[1] + 24 * result);
  }
  return result;
}
