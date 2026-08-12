int __thiscall sub_102DBE80(int this)
{
  unsigned int v2; // eax
  int result; // eax

  sub_100E38F0((float *)this);
  v2 = *(_DWORD *)(this + 992);
  if ( v2 == -1
    || (result = v2 >> 12, off_1061BE18[4 * (*(_DWORD *)(this + 992) & 0xFFF) + 2] != result)
    || !off_1061BE18[4 * (*(_DWORD *)(this + 992) & 0xFFF) + 1] )
  {
    if ( *(int *)(dword_106B31C8 + 20) <= 1 )
      result = sub_10261B20();
    else
      result = 0;
    if ( result )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 8))(result);
      *(_DWORD *)(this + 992) = *(_DWORD *)result;
    }
    else
    {
      *(_DWORD *)(this + 992) = -1;
    }
  }
  return result;
}
