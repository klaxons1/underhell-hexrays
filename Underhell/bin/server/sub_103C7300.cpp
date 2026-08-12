void __thiscall sub_103C7300(float *this, int a2)
{
  double v3; // st7
  char *v4; // eax
  void (__thiscall *v5)(float *, char *, _DWORD, _DWORD, _DWORD, _DWORD); // edx

  if ( this[1436] <= (double)*(float *)(dword_106B31C8 + 12) )
  {
    v3 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           0.5,
           0.75);
    v4 = off_1067CE20[0];
    v5 = *(void (__thiscall **)(float *, char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2244);
    this[1436] = v3 + *(float *)(dword_106B31C8 + 12);
    v5(this, v4, 0, 0, 0, 0);
  }
}
