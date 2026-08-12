char __thiscall sub_10321870(int this, float a2)
{
  int v2; // esi
  void (__stdcall *v4)(_DWORD); // edx
  int v5; // ebx
  int v6; // edx
  double v7; // st4
  double v8; // st7
  double v9; // st4
  double v10; // st5
  double v11; // st7
  int v12; // ecx
  int v13; // edx
  double v14; // st7
  float v16; // [esp+10h] [ebp-40h]
  float v17[11]; // [esp+20h] [ebp-30h] BYREF
  int v18; // [esp+4Ch] [ebp-4h]

  v2 = LODWORD(a2);
  v4 = *(void (__stdcall **)(_DWORD))(**(_DWORD **)(LODWORD(a2) + 424) + 112);
  v5 = *(_DWORD *)(this + 424);
  v18 = *(_DWORD *)(LODWORD(a2) + 424);
  v4(50000.0);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 112))(v5, 100.0);
  a2 = 3.0;
  (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v5 + 136))(v5, &a2, &a2);
  memset(v17, 0, sizeof(v17));
  v6 = *(_DWORD *)(v2 + 252);
  v17[0] = 10000.0;
  v17[2] = 20.0;
  if ( (v6 & 0x800) != 0 )
    sub_100DAE60(v2);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v7 = *(float *)(this + 580) - *(float *)(v2 + 580);
  v8 = v7 * v7;
  v9 = *(float *)(this + 584) - *(float *)(v2 + 584);
  v10 = *(float *)(this + 588) - *(float *)(v2 + 588);
  v16 = v10 * v10 + v9 * v9 + v8;
  v11 = off_10689708(v16);
  v12 = *(_DWORD *)(this + 252);
  v17[1] = v11;
  v17[3] = 10.0;
  if ( (v12 & 0x800) != 0 )
    sub_100DAE60(this);
  v13 = *(_DWORD *)(v2 + 252);
  v17[4] = *(float *)(this + 580);
  v17[5] = *(float *)(this + 584);
  v17[6] = *(float *)(this + 588);
  if ( (v13 & 0x800) != 0 )
    sub_100DAE60(v2);
  v17[7] = *(float *)(v2 + 580);
  v17[8] = *(float *)(v2 + 584);
  v14 = *(float *)(v2 + 588);
  LOBYTE(v17[10]) = 0;
  v17[9] = v14;
  *(_DWORD *)(this + 1120) = (*(int (__thiscall **)(int, int, int, float *))(*(_DWORD *)dword_106BAFF4 + 52))(
                               dword_106BAFF4,
                               v5,
                               v18,
                               v17);
  return 1;
}
