int __thiscall sub_100CD120(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_10430EBC;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10430EBC = v1;
      dword_10430EAC = -1;
      dword_10430EB0 = -1;
      dword_10430EB4 = -1;
      dword_10430EB8 = 1;
    }
    v3 = result == -1 ? &dword_10430EAC : (int *)(this[1] + 36 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10430EBC = v1;
      dword_10430EAC = -1;
      dword_10430EB0 = -1;
      dword_10430EB4 = -1;
      dword_10430EB8 = 1;
    }
    if ( result == -1 )
      result = dword_10430EAC;
    else
      result = *(_DWORD *)(this[1] + 36 * result);
  }
  return result;
}
