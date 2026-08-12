char __thiscall sub_10117670(int this)
{
  char result; // al

  if ( *(_DWORD *)(this + 1152) == -1 )
    return *(_BYTE *)(this + 1160);
  if ( off_1061BE18[4 * (*(_DWORD *)(this + 1152) & 0xFFF) + 2] != *(_DWORD *)(this + 1152) >> 12 )
    return *(_BYTE *)(this + 1160);
  result = 1;
  if ( !off_1061BE18[4 * (*(_DWORD *)(this + 1152) & 0xFFF) + 1] )
    return *(_BYTE *)(this + 1160);
  return result;
}
