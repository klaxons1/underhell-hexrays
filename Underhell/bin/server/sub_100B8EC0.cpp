int __thiscall sub_100B8EC0(float *this, unsigned __int16 a2, unsigned __int16 a3, float a4, float a5)
{
  double v6; // st7
  int result; // eax
  double v8; // st7

  this[3] = a4;
  *((_WORD *)this + 5) = a3;
  *((_WORD *)this + 4) = a2;
  this[4] = a5;
  *((_BYTE *)this + 28) = 0;
  *((_WORD *)this + 3) = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 8))(
                           dword_106B31E4,
                           a2,
                           a3);
  v6 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(this[3], this[4]);
  result = dword_106B31C8;
  v8 = v6 + *(float *)(dword_106B31C8 + 12);
  *((_BYTE *)this + 4) = 1;
  *this = v8;
  return result;
}
