void __thiscall sub_1009C610(int this, float a2)
{
  double v3; // st7
  int v4; // eax

  for ( ; *(float *)(this + 64) <= (double)a2; *(float *)(this + 64) = *(float *)(this + 64) + 0.1 )
  {
    v3 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)(this + 244) + 4))(this + 244, -10.0, 10.0);
    v4 = *(_DWORD *)(this + 244);
    *(float *)(this + 84) = v3;
    *(float *)(this + 88) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(v4 + 4))(this + 244, -0.2, 0.2)
                          + 1.0;
  }
}
