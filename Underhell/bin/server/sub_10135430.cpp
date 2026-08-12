void __thiscall sub_10135430(int this, float a2)
{
  double v3; // st7
  int v4; // eax

  for ( ; *(float *)(this + 112) <= (double)a2; *(float *)(this + 112) = *(float *)(this + 112) + 0.1 )
  {
    v3 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)(this + 292) + 4))(this + 292, -10.0, 10.0);
    v4 = *(_DWORD *)(this + 292);
    *(float *)(this + 132) = v3;
    *(float *)(this + 136) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(v4 + 4))(this + 292, -0.2, 0.2)
                           + 1.0;
  }
}
