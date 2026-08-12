int __thiscall sub_10385CA0(int this, float a2)
{
  float v3; // edx
  float v4; // eax
  double v5; // st6
  double v6; // st7
  int result; // eax
  float v8; // [esp+38h] [ebp-Ch] BYREF
  float v9; // [esp+3Ch] [ebp-8h]
  float v10; // [esp+40h] [ebp-4h]

  if ( !*(_BYTE *)(this + 447) )
  {
    if ( *(float *)(this + 3848) < (double)*(float *)(dword_106B31C8 + 12) )
      *(float *)(this + 3848) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                  dword_106B31E4,
                                  0.1,
                                  0.30000001)
                              + *(float *)(dword_106B31C8 + 12);
    if ( *(float *)(this + 3844) < (double)*(float *)(dword_106B31C8 + 12) )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      ((void (__thiscall *)(int (__stdcall ***)(char), int, int, int, _DWORD))(*off_1061B7A0)[3])(
        off_1061B7A0,
        this + 580,
        1,
        1,
        0);
      *(float *)(this + 3844) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                  dword_106B31E4,
                                  0.1,
                                  0.30000001)
                              + *(float *)(dword_106B31C8 + 12);
    }
    v3 = *(float *)(this + 3628);
    v4 = *(float *)(this + 3632);
    v8 = *(float *)(this + 3624);
    v9 = v3;
    v10 = v4;
    v5 = v3 + v3 * 1.5 * a2 + *(float *)(this + 3744);
    v6 = 1.5 * v4 * a2 + v4 - a2 * 0.02 * *(float *)(dword_106B6F0C + 44) + *(float *)(this + 3748);
    *(float *)(this + 3624) = v8 + v8 * 1.5 * a2 + *(float *)(this + 3740);
    *(float *)(this + 3628) = v5;
    *(float *)(this + 3632) = v6;
    *(float *)(this + 3740) = flt_106F1CA8;
    *(float *)(this + 3744) = flt_106F1CAC;
    *(float *)(this + 3748) = flt_106F1CB0;
    sub_103280A0((float *)this, 5.0);
    sub_103285A0((float *)this, -1.0, 1000.0);
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 40);
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 40);
    sub_10384EC0((float *)this, a2);
    sub_10385950((float *)this);
    v8 = *(float *)(this + 3624) * a2;
    v9 = a2 * *(float *)(this + 3628);
    v10 = a2 * *(float *)(this + 3632);
    return sub_10029420(this, &v8, 33701899);
  }
  return result;
}
