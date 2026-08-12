unsigned int __thiscall sub_10204560(int this)
{
  char *v2; // eax
  unsigned int result; // eax

  sub_100E38F0((float *)this);
  v2 = *(char **)(this + 212);
  if ( !v2 )
    v2 = (char *)String;
  result = (unsigned int)sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
  if ( result )
  {
    result = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)result + 8))(result);
    *(_DWORD *)(this + 800) = *(_DWORD *)result;
  }
  else
  {
    *(_DWORD *)(this + 800) = -1;
  }
  if ( *(_BYTE *)(this + 816) )
  {
    result = *(_DWORD *)(this + 800);
    if ( result != -1 )
    {
      result >>= 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] == result )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1] )
          return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
      }
    }
  }
  return result;
}
