double __thiscall sub_101A1220(void *this, _DWORD *a2, int a3)
{
  double v5; // st7
  bool v6; // c0
  double result; // st7
  float v8; // [esp+18h] [ebp+Ch]

  v5 = ((double (__thiscall *)(void *, _DWORD *, int))*(_DWORD *)(*(_DWORD *)this + 736))(this, a2, a3);
  v8 = v5;
  v6 = v5 > 0.0;
  result = 0.0;
  if ( v6 )
  {
    sub_100BE130(this, a2, a3);
    return 0.0 / v8;
  }
  return result;
}
