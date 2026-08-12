_BYTE *__thiscall sub_10087820(_DWORD *this, _BYTE *a2)
{
  _BYTE *result; // eax

  result = (_BYTE *)sub_1042D170(1);
  if ( (_BYTE)result )
  {
    result = a2;
    *a2 = *(_BYTE *)(this[3] - this[8] + *this);
    ++this[3];
  }
  else
  {
    *a2 = 0;
  }
  return result;
}
