double __cdecl _handle_qnan1(int a1, double a2)
{
  __int16 v3; // cx

  if ( !dword_103FED50 )
    return _umatherr(
             1,
             a1,
             SLODWORD(a2),
             SHIDWORD(a2),
             COERCE_UNSIGNED_INT64(0.0),
             HIDWORD(COERCE_UNSIGNED_INT64(0.0)),
             a2);
  *_errno() = 33;
  _ctrlfp(v3);
  return a2;
}
