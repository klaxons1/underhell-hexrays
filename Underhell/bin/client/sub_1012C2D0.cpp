int __thiscall sub_1012C2D0(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_10439114;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10439114 = v1;
      dword_10439104 = -1;
      dword_10439108 = -1;
      dword_1043910C = -1;
      dword_10439110 = 1;
    }
    v3 = result == -1 ? &dword_10439104 : (int *)(this[1] + 24 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10439114 = v1;
      dword_10439104 = -1;
      dword_10439108 = -1;
      dword_1043910C = -1;
      dword_10439110 = 1;
    }
    if ( result == -1 )
      result = dword_10439104;
    else
      result = *(_DWORD *)(this[1] + 24 * result);
  }
  return result;
}
