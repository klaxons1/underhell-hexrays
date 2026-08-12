void __thiscall sub_103868B0(int this, int a2, int a3)
{
  int v4; // eax
  double v5; // st7

  if ( 5000.0 == *(float *)(this + 3656) )
  {
    v4 = *(_DWORD *)(this + 248);
    if ( (v4 & 0x80u) == 0 && (v4 & 0x10000) == 0 )
    {
      v5 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             1.7,
             2.3);
      *(float *)(this + 3648) = 0.0;
      *(float *)(this + 3652) = 0.0;
      *(float *)(this + 3656) = v5;
    }
  }
  if ( a3 != 1 && (*(_BYTE *)(this + 248) & 2) != 0 && *(int *)(this + 3916) < 0 )
  {
    a3 = -3;
    sub_100332F0((int *)(this + 248), &a3);
    sub_10385ED0(this);
  }
}
