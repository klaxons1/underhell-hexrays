void __thiscall sub_10279CB0(int this)
{
  _BYTE *v2; // edi
  double v3; // st7
  double v4; // st6

  v2 = (_BYTE *)sub_100D1940((_DWORD *)this);
  if ( v2
    && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 320))(v2)
    && (v2[3292] & 1) == 0
    && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 1392) )
  {
    v3 = *(float *)(this + 1400) - *(float *)(dword_106B31C8 + 16);
    *(float *)(this + 1400) = v3;
    v4 = 1.5;
    if ( v3 <= 1.5 && (v4 = 0.0, v3 >= 0.0) )
      *(float *)(this + 1400) = v3;
    else
      *(float *)(this + 1400) = v4;
  }
}
