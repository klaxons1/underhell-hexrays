double __thiscall sub_100BCBB0(void *this, int a2, int a3)
{
  double v3; // st7

  v3 = ((double (__thiscall *)(void *, int, int))*(_DWORD *)(*(_DWORD *)this + 736))(this, a2, a3);
  if ( v3 <= 0.0 )
    return 10.0;
  else
    return 1.0 / v3;
}
