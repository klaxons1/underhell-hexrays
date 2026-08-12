void __thiscall sub_103755E0(float *this)
{
  double v2; // st7
  int v3; // edx
  int v4; // esi

  if ( 0.0 != this[59]
    && ((*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 284))(this)
     || this[59] <= (double)*(float *)(dword_106B31C8 + 12)) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 284))(this) )
      v2 = *(float *)(dword_106B31C8 + 12);
    else
      v2 = 0.0;
    v3 = *((_DWORD *)this + 1);
    this[59] = v2;
    v4 = *(_DWORD *)(v3 + 2796);
    if ( v4 )
      *(float *)(v4 + 80) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                              dword_106B31E4,
                              5.0,
                              12.0)
                          + *(float *)(dword_106B31C8 + 12);
  }
}
