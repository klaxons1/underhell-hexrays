char *__thiscall sub_1032F450(int this)
{
  unsigned int v2; // eax

  sub_10023E00((char *)this, 75);
  sub_10093FD0((int *)this);
  if ( *(_DWORD *)(this + 2324) == 3
    && !*(_BYTE *)(this + 3776)
    && *(float *)(this + 3808) <= (double)*(float *)(dword_106B31C8 + 12)
    && sub_1012B040((unsigned int *)(this + 3796), 0) )
  {
    sub_1032D160((float *)this, 60);
    *(float *)(this + 3808) = *(float *)(dword_106B31C8 + 12) + 2.0;
  }
  v2 = *(_DWORD *)(this + 3796);
  if ( v2 != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 3796) & 0xFFF) + 2] == v2 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 3796) & 0xFFF) + 1]
    && *(float *)(this + 3804) <= (double)*(float *)(dword_106B31C8 + 12)
    && sub_10023D10((_DWORD *)this, 10)
    && !sub_10023D10((_DWORD *)this, 74) )
  {
    return sub_10023CB0((char *)this, 73);
  }
  else
  {
    return sub_10023E00((char *)this, 73);
  }
}
