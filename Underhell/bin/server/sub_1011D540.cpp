int __thiscall sub_1011D540(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_1069C54C;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_1069C54C = v1;
      dword_1069C53C = -1;
      dword_1069C540 = -1;
      dword_1069C544 = -1;
      dword_1069C548 = 1;
    }
    v3 = result == -1 ? &dword_1069C53C : (int *)(this[1] + 40 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_1069C54C = v1;
      dword_1069C53C = -1;
      dword_1069C540 = -1;
      dword_1069C544 = -1;
      dword_1069C548 = 1;
    }
    if ( result == -1 )
      result = dword_1069C53C;
    else
      result = *(_DWORD *)(this[1] + 40 * result);
  }
  return result;
}
