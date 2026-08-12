unsigned int __thiscall sub_1004C7C0(int this)
{
  int v2; // edi
  unsigned int result; // eax
  int v4; // ecx
  int v5; // eax

  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1644))(*(_DWORD *)(this + 4), 1001);
  *(_BYTE *)(this + 37) = 1;
  if ( *(_DWORD *)(this + 20) == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != *(_DWORD *)(this + 20) >> 12 )
  {
    v2 = 0;
  }
  else
  {
    v2 = off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
  }
  sub_1010DD80(*(_DWORD *)(this + 4), v2, 0.0);
  result = *(_DWORD *)(this + 20);
  if ( result == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != *(_DWORD *)(this + 20) >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
  if ( *(_DWORD *)(v4 + 800) )
  {
    if ( result == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != result >> 12 )
      v5 = 0;
    else
      v5 = off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
    return sub_100211D0(*(_DWORD **)(this + 4), *(_DWORD *)(v5 + 800), 0);
  }
  return result;
}
