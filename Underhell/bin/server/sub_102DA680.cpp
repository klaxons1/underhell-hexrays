_DWORD *sub_102DA680()
{
  _DWORD *result; // eax
  _DWORD *v1; // esi

  result = (_DWORD *)sub_10184390(24);
  v1 = result;
  if ( result )
  {
    result = sub_102366B0(result);
    *v1 = &CHalfLife2::`vftable';
    if ( *((_BYTE *)v1 + 12) )
    {
      result = (_DWORD *)sub_1015E340();
      *((_BYTE *)v1 + 12) = 0;
    }
    *((float *)v1 + 4) = 0.0;
    *((float *)v1 + 5) = 0.0;
  }
  return result;
}
