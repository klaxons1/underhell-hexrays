int __thiscall sub_101BE700(int this, int a2)
{
  int result; // eax

  result = a2;
  if ( *(_BYTE *)(a2 + 225) )
  {
    if ( *(_DWORD *)(this + 2244) == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 2244) & 0xFFF) + 2] != *(_DWORD *)(this + 2244) >> 12 )
    {
      return sub_101BE5D0((char *)this, 0);
    }
    else
    {
      return sub_101BE5D0((char *)this, off_1061BE18[4 * (*(_DWORD *)(this + 2244) & 0xFFF) + 1]);
    }
  }
  return result;
}
