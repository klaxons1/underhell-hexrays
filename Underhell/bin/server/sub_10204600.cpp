void __thiscall sub_10204600(int this, int a2)
{
  if ( !*(_BYTE *)(this + 816) )
  {
    *(_BYTE *)(this + 816) = 1;
    if ( *(_DWORD *)(this + 800) != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] == *(_DWORD *)(this + 800) >> 12 )
    {
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1] )
        sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
    }
  }
}
