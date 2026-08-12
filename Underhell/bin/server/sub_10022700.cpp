_DWORD *__thiscall sub_10022700(_DWORD *this, _DWORD *a2)
{
  int v2; // eax
  _DWORD *result; // eax
  _DWORD *v4; // ecx

  v2 = *(_DWORD *)(this[647] + 12);
  if ( !v2 || v2 == 2 )
  {
    v4 = (_DWORD *)this[651];
    result = a2;
    *a2 = v4[7];
    a2[1] = v4[8];
    a2[2] = v4[9];
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(*this + 540))(this, a2, 0);
    return a2;
  }
  return result;
}
