int __thiscall sub_1013AB80(int this)
{
  int v2; // ecx
  float *v3; // ebx
  double v4; // st7
  double v5; // st7
  double v6; // st6
  long double v8; // st7
  int v9; // [esp+14h] [ebp-4h]

  v2 = dword_106B31C8;
  if ( *(float *)(this + 820) < (double)*(float *)(dword_106B31C8 + 12) )
  {
    v3 = (float *)(this + 828);
    v9 = 2;
    *(float *)(this + 820) = 1.0 / *(float *)(this + 804) + *(float *)(dword_106B31C8 + 12);
    do
    {
      *v3++ = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                -1.0,
                1.0);
      --v9;
    }
    while ( v9 );
    *(float *)(this + 836) = 4.0;
    off_10689714();
    v4 = *(float *)(this + 824) * 400.0;
    *(float *)(this + 828) = v4 * *(float *)(this + 828);
    *(float *)(this + 832) = *(float *)(this + 832) * v4;
    *(float *)(this + 836) = v4 * *(float *)(this + 836);
    v2 = dword_106B31C8;
  }
  v5 = (*(float *)(this + 816) - *(float *)(v2 + 12)) / *(float *)(this + 808);
  v6 = 0.0;
  if ( v5 < 0.0 )
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 840) + 24))(*(_DWORD *)(this + 840));
  if ( v5 != 0.0 )
    v6 = *(float *)(this + 804) / v5;
  v8 = v5 * v5 * sin(v6 * *(float *)(v2 + 12));
  *(float *)(this + 848) = v8 * *(float *)(this + 828);
  *(float *)(this + 852) = *(float *)(this + 832) * v8;
  *(float *)(this + 856) = v8 * *(float *)(this + 836);
  *(float *)(this + 824) = *(float *)(this + 824)
                         - *(float *)(dword_106B31C8 + 16)
                         / (*(float *)(this + 804)
                          * *(float *)(this + 808))
                         * *(float *)(this + 824);
  return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
}
