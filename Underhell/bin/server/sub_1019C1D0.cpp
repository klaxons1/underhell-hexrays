BOOL __thiscall sub_1019C1D0(_DWORD *this, int a2, int a3)
{
  if ( a3 == 1 )
    return a2 == this[12];
  return a3 && a2 == this[12] || a2 == this[8] || a2 == this[9] || a2 == this[10] || a2 == this[11];
}
