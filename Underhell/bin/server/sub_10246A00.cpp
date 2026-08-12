bool __thiscall sub_10246A00(int this)
{
  int v1; // eax
  bool result; // al

  result = 0;
  if ( *(_DWORD *)(this + 912) )
  {
    v1 = *(_DWORD *)(this + 880) == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 2] != *(_DWORD *)(this + 880) >> 12
       ? 0
       : off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 1];
    if ( !(unsigned __int8)sub_10260340(*(char **)(this + 912), v1) )
      return 1;
  }
  return result;
}
