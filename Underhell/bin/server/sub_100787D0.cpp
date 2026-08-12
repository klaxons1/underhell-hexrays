double __thiscall sub_100787D0(float *this)
{
  bool v2; // c0
  double v3; // st7
  bool v4; // c0
  double result; // st7
  float v6; // [esp+Ch] [ebp-4h]
  float v7; // [esp+Ch] [ebp-4h]
  float v8; // [esp+Ch] [ebp-4h]

  v6 = this[4];
  v7 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**((_DWORD **)this + 1) + 720))(*((_DWORD *)this + 1)) * v6;
  v2 = v7 < ((double (__thiscall *)(float *, _DWORD))*(_DWORD *)(*(_DWORD *)this + 92))(this, 10.0);
  v3 = v7;
  if ( v2 )
    v3 = ((double (__thiscall *)(float *, _DWORD))*(_DWORD *)(*(_DWORD *)this + 92))(this, 10.0);
  v8 = v3;
  v4 = v8 < sub_100737B0(*(_DWORD *)(*((_DWORD *)this + 1) + 1676));
  result = v8;
  if ( v4 )
    return sub_100737B0(*(_DWORD *)(*((_DWORD *)this + 1) + 1676));
  return result;
}
