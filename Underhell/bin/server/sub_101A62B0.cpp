int __thiscall sub_101A62B0(int this, int a2, int a3, int a4)
{
  unsigned int v5; // eax

  if ( sub_10023D10((_DWORD *)this, 80) )
  {
    v5 = *(_DWORD *)(this + 3840);
    if ( v5 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 3840) & 0xFFF) + 2] == v5 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 3840) & 0xFFF) + 1] )
    {
      sub_10023E00((char *)this, 80);
      if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 3860) > -0.001 && a2 != 103 )
        return 103;
      *(_DWORD *)(this + 3840) = -1;
    }
  }
  return sub_1032E8B0(a2, a3, a4);
}
