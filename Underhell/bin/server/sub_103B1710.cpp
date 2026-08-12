int __thiscall sub_103B1710(int this, int a2, int a3, float a4)
{
  double v4; // st7

  if ( *(_DWORD *)(this + 8) == 1 )
    *(_DWORD *)(this + 8) = 0;
  v4 = *(float *)(dword_106B31C8 + 12);
  *(_DWORD *)(this + 92) = 0;
  *(float *)(this + 16) = v4 + a4;
  *(float *)(this + 12) = 3.4028235e38;
  *(float *)(this + 20) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                            dword_106B31E4,
                            2.0,
                            4.0)
                        + *(float *)(dword_106B31C8 + 12);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 20))(a2, a3);
}
