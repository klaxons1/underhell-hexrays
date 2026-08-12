void __thiscall sub_103CF190(float *this)
{
  sub_1007DD70(6);
  this[960] = *(float *)(dword_106B31C8 + 12);
  this[961] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                2.5,
                5.0)
            + this[960];
}
