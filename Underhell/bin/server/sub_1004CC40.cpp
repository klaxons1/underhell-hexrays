char __thiscall sub_1004CC40(int this)
{
  unsigned int v1; // eax
  unsigned int v2; // eax
  unsigned int v3; // eax

  v1 = *(_DWORD *)(this + 20);
  if ( v1 == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != v1 >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1]
    || (v2 = *(_DWORD *)(this + 24), v2 == -1)
    || (v3 = v2 >> 12, off_1061BE18[4 * (*(_DWORD *)(this + 24) & 0xFFF) + 2] != v3)
    || !off_1061BE18[4 * (*(_DWORD *)(this + 24) & 0xFFF) + 1] )
  {
    *(_DWORD *)(this + 28) = 0;
    *(_WORD *)(this + 36) = 0;
    LOBYTE(v3) = sub_1004BA00((int *)this, 0);
  }
  return v3;
}
