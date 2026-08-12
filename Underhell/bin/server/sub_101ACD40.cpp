int __thiscall sub_101ACD40(_DWORD *this, char a2)
{
  int result; // eax
  int v3; // edx
  int v4; // edx

  result = this[202];
  if ( a2 )
  {
    if ( !result )
      return this[200];
    v3 = this[62];
    if ( (v3 & 0x8000) == 0 || (v3 & 4) != 0 )
      return this[200];
  }
  else
  {
    if ( !result )
      return this[201];
    v4 = this[62];
    if ( (v4 & 0x8000) == 0 || (v4 & 4) == 0 )
      return this[201];
  }
  return result;
}
