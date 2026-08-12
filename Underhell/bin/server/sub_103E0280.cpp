void __thiscall sub_103E0280(int this, int *a2, float a3)
{
  int v4; // ebx
  int v5; // ebx
  float v6; // [esp+20h] [ebp-14h]
  float v7; // [esp+20h] [ebp-14h]

  if ( 0.0 == ((double (__thiscall *)(int *, _DWORD))*(_DWORD *)(*a2 + 60))(a2, *(_DWORD *)(this + 1844)) )
  {
    if ( *(float *)(this + 1860) < (double)*(float *)(dword_106B31C8 + 12) )
    {
      (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD, _DWORD))(*a2 + 8))(
        a2,
        *(_DWORD *)(this + 1844),
        0.62,
        100.0,
        0.0);
      (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD))(*a2 + 48))(a2, *(_DWORD *)(this + 1844), 0.22, 4.0);
      (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD))(*a2 + 44))(a2, *(_DWORD *)(this + 1844), 80.0, 4.0);
      *(float *)(this + 1864) = *(float *)(dword_106B31C8 + 12) + 4.0;
    }
  }
  else if ( *(float *)(this + 1864) < (double)*(float *)(dword_106B31C8 + 12) )
  {
    v4 = *a2;
    v6 = sub_10134630(a3, 0.0, 1.0, 0.22, 0.62);
    (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD))(v4 + 48))(a2, *(_DWORD *)(this + 1844), LODWORD(v6), 0.0);
    v5 = *a2;
    v7 = sub_10134630(a3, 0.0, 1.0, 80.0, 140.0);
    (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD))(v5 + 44))(a2, *(_DWORD *)(this + 1844), LODWORD(v7), 0.0);
  }
}
