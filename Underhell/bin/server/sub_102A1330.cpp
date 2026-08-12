void __thiscall sub_102A1330(int this)
{
  if ( *(_BYTE *)(this + 100)
    && (*(_DWORD *)(this + 68) == -1
     || off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 2] != *(_DWORD *)(this + 68) >> 12
     || !off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 1]) )
  {
    *(_BYTE *)(this + 100) = 0;
    *(_DWORD *)(this + 68) = -1;
  }
}
