int __thiscall sub_10099DA0(_BYTE *this, int a2)
{
  int result; // eax

  if ( this[817] )
  {
    result = sub_10099500((int)this, -1, 2, *(_DWORD *)a2, *(float *)(a2 + 4));
    if ( this[817] )
      result = sub_1012CED0((_BYTE)this + 32);
    this[817] = 0;
  }
  return result;
}
