char __thiscall sub_1010F6B0(int this, int a2)
{
  unsigned int v3; // eax
  int v4; // eax
  bool v5; // zf
  char result; // al

  sub_1002B830(this, a2);
  v3 = *(_DWORD *)(this + 316);
  if ( v3 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 316) & 0xFFF) + 2) != v3 >> 12 )
    v4 = 0;
  else
    v4 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 316) & 0xFFF) + 1);
  v5 = v4 == 0;
  result = *(_BYTE *)(this + 2784);
  if ( result != !v5 )
  {
    if ( result )
    {
      result = (char)off_103DC81C;
      *(float *)(this + 2780) = *((float *)off_103DC81C + 3);
    }
    *(_BYTE *)(this + 2784) = !v5;
  }
  return result;
}
