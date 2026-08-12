void __thiscall sub_103CF9F0(int this, int a2)
{
  unsigned int v3; // eax

  sub_1032F780((_BYTE *)this, a2);
  v3 = *(_DWORD *)(this + 3860);
  if ( v3 != -1 && off_1061BE18[4 * (*(_DWORD *)(this + 3860) & 0xFFF) + 2] == v3 >> 12 )
  {
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 3860) & 0xFFF) + 1] )
      sub_103CF7A0((_DWORD *)this, flt_106F1CA8, flt_106F1CAC, flt_106F1CB0);
  }
}
