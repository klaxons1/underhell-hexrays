_DWORD *__thiscall sub_1025BC00(int this, _DWORD *a2)
{
  _DWORD *result; // eax

  if ( (*(_BYTE *)(this + 292) & 2) != 0 )
  {
    result = a2;
    *a2 = *(_DWORD *)(this + 340);
  }
  else
  {
    result = a2;
    if ( (*(_BYTE *)(this + 292) & 1) != 0 )
      *a2 = *(_DWORD *)(this + 332);
    else
      *a2 = *(_DWORD *)(this + 324);
  }
  return result;
}
