double __thiscall sub_1007FF60(_DWORD *this)
{
  double result; // st7
  int v3; // ecx
  float *v4; // esi
  float *v5; // eax
  double v6; // st7
  float v7[3]; // [esp+4h] [ebp-10h] BYREF
  float v8; // [esp+10h] [ebp-4h]

  result = ((double (__thiscall *)(int))**(_DWORD **)(*(this - 1) + 2104))(*(this - 1) + 2104);
  if ( result < 0.0 )
  {
    v8 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)*(this - 1) + 1700))(*(this - 1));
    if ( sub_100A6180(this[7])
      && 0.0 != ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)*(this - 1) + 720))(*(this - 1))
      && *(_DWORD *)this[7]
      && ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)*(this - 1) + 720))(*(this - 1)) > 0.0
      && (v3 = this[7],
          v4 = (float *)*(this - 1),
          v5 = (float *)sub_100A6030(v3),
          v7[0] = *v5 - v4[179],
          v7[1] = v5[1] - v4[180],
          v7[2] = v5[2] - v4[181],
          v6 = sub_100D7A40(v7),
          v6 < 100.0) )
    {
      return ((100.0 - v6) * 0.01 + 1.0) * v8;
    }
    else
    {
      return v8;
    }
  }
  return result;
}
