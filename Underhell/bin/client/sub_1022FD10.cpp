_DWORD *__thiscall sub_1022FD10(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx

  result = a2;
  if ( a2 )
  {
    v3 = this[7];
    --this[8];
    *a2 = v3;
    this[7] = a2;
  }
  return result;
}
