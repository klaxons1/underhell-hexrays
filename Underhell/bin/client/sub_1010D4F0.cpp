int __thiscall sub_1010D4F0(_DWORD **this, int (__thiscall ***a2)(_DWORD))
{
  int result; // eax
  float *v4; // eax
  int v5; // eax
  float v6; // [esp+0h] [ebp-8h]
  float v7; // [esp+0h] [ebp-8h]

  result = (int)a2;
  if ( a2 )
  {
    v4 = (float *)sub_1009EA30(a2);
    v6 = v4[59] * v4[59] + v4[58] * v4[58] + v4[60] * v4[60];
    v7 = off_103EDFE0(v6);
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this[1] + 12))(this[1], LODWORD(v7));
    result = sub_101BC880();
    if ( (_BYTE)result )
    {
      v5 = ((int (__thiscall *)(_DWORD **))(*this)[3])(this);
      return sub_101BCA60(v5);
    }
  }
  return result;
}
