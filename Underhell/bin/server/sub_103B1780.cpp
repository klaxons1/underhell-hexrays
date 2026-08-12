void __thiscall sub_103B1780(int this, int a2, int a3, char a4)
{
  int v5; // eax
  double v6; // st6
  double v7; // st7
  double v8; // st7
  double v9; // st6
  double v10; // st5
  double v11; // st7
  float v12[3]; // [esp+1Ch] [ebp-Ch] BYREF

  if ( a3 )
  {
    *(_DWORD *)(this + 28) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
    *(_BYTE *)(this + 56) = 0;
    if ( *(float *)(this + 64) == flt_10689730
      && *(float *)(this + 68) == flt_10689734
      && *(float *)(this + 72) == flt_10689738 )
    {
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 24))(a2);
      (*(void (__thiscall **)(int, _DWORD, float *, _DWORD))(*(_DWORD *)v5 + 528))(v5, 0, v12, 0);
      if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
        sub_100DAE60(a3);
      v6 = *(float *)(a3 + 584);
      v7 = *(float *)(a3 + 588) - 256.0;
      *(float *)(this + 64) = *(float *)(a3 + 580);
      *(float *)(this + 68) = v6;
      *(float *)(this + 72) = v7;
      v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             -60.0,
             60.0);
      v9 = v12[0] * v8;
      v10 = v12[1] * v8;
      v11 = v8 * v12[2];
      *(float *)(this + 64) = v9 + *(float *)(this + 64);
      *(float *)(this + 68) = v10 + *(float *)(this + 68);
      *(float *)(this + 72) = v11 + *(float *)(this + 72);
    }
  }
  else
  {
    *(_DWORD *)(this + 28) = -1;
  }
  *(_DWORD *)(this + 92) = 0;
  *(_BYTE *)(this + 76) = a4;
}
