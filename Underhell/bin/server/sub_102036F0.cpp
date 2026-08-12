unsigned int __thiscall sub_102036F0(int this)
{
  unsigned int v2; // eax
  unsigned int result; // eax
  char *v4; // eax

  sub_100E38F0((float *)this);
  v2 = *(_DWORD *)(this + 804);
  if ( v2 == -1
    || (result = v2 >> 12, off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 2] != result)
    || !off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 1] )
  {
    v4 = *(char **)(this + 212);
    if ( !v4 )
      v4 = (char *)String;
    result = (unsigned int)sub_1012BF20(&dword_1069E3E0, 0, v4, 0, 0, 0, 0);
    if ( result )
    {
      result = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)result + 8))(result);
      *(_DWORD *)(this + 804) = *(_DWORD *)result;
    }
    else
    {
      *(_DWORD *)(this + 804) = -1;
    }
  }
  if ( !*(_BYTE *)(this + 800) )
  {
    result = *(_DWORD *)(this + 804);
    if ( result != -1 )
    {
      result >>= 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 2] == result )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 1] )
          return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
      }
    }
  }
  return result;
}
