int __thiscall sub_10245D30(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_1047CC4C;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_1047CC4C = v1;
      dword_1047CC3C = -1;
      dword_1047CC40 = -1;
      dword_1047CC44 = -1;
      dword_1047CC48 = 1;
    }
    v3 = result == -1 ? &dword_1047CC3C : (int *)(this[1] + 24 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_1047CC4C = v1;
      dword_1047CC3C = -1;
      dword_1047CC40 = -1;
      dword_1047CC44 = -1;
      dword_1047CC48 = 1;
    }
    if ( result == -1 )
      result = dword_1047CC3C;
    else
      result = *(_DWORD *)(this[1] + 24 * result);
  }
  return result;
}
