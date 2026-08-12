int __thiscall sub_1009DB90(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_10693D2C;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10693D2C = v1;
      dword_10693D1C = -1;
      dword_10693D20 = -1;
      dword_10693D24 = -1;
      dword_10693D28 = 1;
    }
    v3 = result == -1 ? &dword_10693D1C : (int *)(this[1] + 24 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10693D2C = v1;
      dword_10693D1C = -1;
      dword_10693D20 = -1;
      dword_10693D24 = -1;
      dword_10693D28 = 1;
    }
    if ( result == -1 )
      result = dword_10693D1C;
    else
      result = *(_DWORD *)(this[1] + 24 * result);
  }
  return result;
}
