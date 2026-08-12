_BYTE *__thiscall sub_1013A220(_BYTE *this, _BYTE *a2, _BYTE *a3, _BYTE *a4, _BYTE *a5, _BYTE *a6)
{
  _BYTE *result; // eax

  if ( !dword_1043BD0C || 0.0 == *(float *)(dword_1043BD0C + 64) )
  {
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 44))(this);
    *a2 = this[60];
    *a3 = this[64];
    *a4 = this[68];
    *a5 = this[72];
    result = a6;
    *a6 = this[76];
  }
  else
  {
    *a2 = (int)*(float *)(dword_1043BD0C + 52);
    *a3 = (int)*(float *)(dword_1043BD0C + 56);
    *a4 = (int)*(float *)(dword_1043BD0C + 60);
    result = (_BYTE *)(unsigned __int8)(int)*(float *)(dword_1043BD0C + 64);
    *a5 = (_BYTE)result;
    *a6 = 0;
  }
  return result;
}
