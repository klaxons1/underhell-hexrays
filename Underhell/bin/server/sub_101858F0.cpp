_DWORD *__thiscall sub_101858F0(_DWORD *this, int a2)
{
  _DWORD *v2; // edi
  _DWORD *result; // eax
  int v4; // esi

  v2 = this + 1;
  this[4] = 0;
  result = sub_100D8850(a2);
  v4 = (int)result;
  if ( result )
  {
    sub_10185740((int)result, v2);
    return (_DWORD *)sub_100E7F30(v4);
  }
  return result;
}
