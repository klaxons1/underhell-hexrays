_DWORD *__thiscall sub_1011EDA0(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_10184390(12);
  if ( result )
  {
    *result = a2;
    result[1] = 0;
    result[2] = 0;
  }
  else
  {
    result = 0;
  }
  *(_DWORD *)(*(_DWORD *)(this[1] + 8) + 4) = result;
  result[2] = *(_DWORD *)(this[1] + 8);
  *(_DWORD *)(this[1] + 8) = result;
  result[1] = this[1];
  ++this[2];
  return result;
}
