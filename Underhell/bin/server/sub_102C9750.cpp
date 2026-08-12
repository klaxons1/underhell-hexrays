int __thiscall sub_102C9750(float *this, int a2)
{
  double v3; // st7
  int result; // eax
  float v5; // [esp+8h] [ebp-8h]

  if ( !*((_BYTE *)this + 1412) )
  {
    v3 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           3.0,
           6.0);
    this[201] = v3;
    v5 = 1.0 / v3 + *(float *)(dword_106B31C8 + 12);
    result = (*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 748))(this, LODWORD(v5));
    *((_DWORD *)this + 229) = 10;
    *((_BYTE *)this + 1412) = 1;
  }
  return result;
}
