void __thiscall sub_101A21B0(float *this)
{
  sub_1007DD70(11);
  this[967] = *(float *)(dword_106B31C8 + 12);
  this[968] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                2.5,
                5.0)
            + this[967];
}
