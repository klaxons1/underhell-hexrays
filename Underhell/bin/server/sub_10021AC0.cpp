int __thiscall sub_10021AC0(int this, int a2, float a3)
{
  double v4; // st7
  bool v5; // zf
  int result; // eax
  double v7; // st6
  float v8; // [esp+0h] [ebp-1Ch]

  v4 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         1.5,
         2.0);
  v5 = *(_DWORD *)(this + 2796) == 0;
  result = dword_106B31C8;
  v7 = *(float *)(dword_106B31C8 + 12) + a3;
  *(_DWORD *)(this + 3588) = a2;
  *(float *)(this + 3584) = v4 + v7;
  if ( !v5 )
  {
    v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           1.5,
           2.0)
       + *(float *)(dword_106B31C8 + 12)
       + a3;
    return sub_100B0F40(a2, v8);
  }
  return result;
}
