double __thiscall sub_10034320(void *this)
{
  double result; // st7
  double v3; // st6
  float v4; // [esp+4h] [ebp-8h]

  if ( !(*(int (__thiscall **)(void *))(*(_DWORD *)this + 420))(this) )
    return 1.0;
  v4 = (float)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 416))(this);
  result = v4 / (double)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 420))(this);
  v3 = 1.0;
  if ( result > 1.0 )
    return v3;
  v3 = 0.0;
  if ( result < 0.0 )
    return v3;
  return result;
}
