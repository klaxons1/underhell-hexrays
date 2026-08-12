double __thiscall sub_100BE690(void *this, _DWORD *a2, int a3)
{
  double v5; // st7
  bool v6; // c0
  double result; // st7
  float v8; // [esp+8h] [ebp-1Ch]
  float v9; // [esp+18h] [ebp-Ch] BYREF
  float v10; // [esp+1Ch] [ebp-8h]
  float v11; // [esp+20h] [ebp-4h]
  float v12; // [esp+30h] [ebp+Ch]

  v5 = ((double (__thiscall *)(void *, _DWORD *, int))*(_DWORD *)(*(_DWORD *)this + 736))(this, a2, a3);
  v12 = v5;
  v6 = v5 > 0.0;
  result = 0.0;
  if ( v6 )
  {
    sub_100BA880(a2, a3, (int)this + 912, &v9);
    v8 = v9 * v9 + v10 * v10 + v11 * v11;
    return off_10689708(v8) / v12;
  }
  return result;
}
