int *__thiscall sub_10271B20(int *this, int a2)
{
  int *v2; // ecx
  int *result; // eax
  int v4; // [esp+0h] [ebp-4h] BYREF

  v4 = (int)this;
  v2 = this + 206;
  if ( (*(_BYTE *)v2 & 1) != 0 )
  {
    v4 = -2;
    return sub_102719F0(v2, &v4);
  }
  return result;
}
