double __cdecl _floor_default(double a1)
{
  double result; // st7
  int v2; // ebx
  int v3; // eax

  result = a1;
  v2 = _ctrlfp(dword_103FE470, 0xFFFF);
  if ( (HIWORD(a1) & 0x7FF0) == 0x7FF0 )
  {
    v3 = _sptype(LODWORD(a1), HIDWORD(a1));
    if ( v3 > 0 )
    {
      if ( v3 <= 2 )
      {
        _ctrlfp(v2, 0xFFFF);
        return a1;
      }
      if ( v3 == 3 )
      {
        result = a1;
        _handle_qnan1(11, a1, v2);
        return result;
      }
    }
    return _except1(
             8,
             11,
             LODWORD(a1),
             HIDWORD(a1),
             COERCE_UNSIGNED_INT64(a1 + 1.0),
             HIDWORD(COERCE_UNSIGNED_INT64(a1 + 1.0)),
             v2);
  }
  else
  {
    _frnd(a1);
    _ctrlfp(v2, 0xFFFF);
  }
  return result;
}
