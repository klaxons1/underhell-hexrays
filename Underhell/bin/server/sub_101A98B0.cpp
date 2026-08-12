void __thiscall sub_101A98B0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  int v5; // ecx
  double v6; // st7
  char v7; // bl
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // edx
  void (*v12)(void); // eax
  int v13; // edx
  double v14; // st7
  int v15; // edx
  double v16; // st7
  float v17; // [esp+14h] [ebp-54h]
  float v18; // [esp+14h] [ebp-54h]
  _BYTE v19[12]; // [esp+1Ch] [ebp-4Ch] BYREF
  float v20[3]; // [esp+28h] [ebp-40h] BYREF
  float v21[3]; // [esp+34h] [ebp-34h] BYREF
  int v22; // [esp+40h] [ebp-28h] BYREF
  float v23; // [esp+44h] [ebp-24h]
  float v24; // [esp+48h] [ebp-20h]
  int v25[3]; // [esp+4Ch] [ebp-1Ch] BYREF
  float v26[3]; // [esp+58h] [ebp-10h] BYREF
  float v27; // [esp+64h] [ebp-4h]

  v2 = *(_DWORD *)(this + 3632);
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 3632) & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  v5 = *(_DWORD *)(v4 + 424);
  if ( v5 )
  {
    (*(void (__thiscall **)(int, float *, _BYTE *))(*(_DWORD *)v5 + 204))(v5, v26, v19);
    v6 = off_10689714();
    v27 = v6;
    if ( 0.0 == *(float *)(this + 3736)
      || *(float *)(this + 3664) == flt_106F1CA8
      && *(float *)(this + 3668) == flt_106F1CAC
      && *(float *)(this + 3672) == flt_106F1CB0 )
    {
      if ( v6 > 1.0 )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 3628) + 172))(*(_DWORD *)(this + 3628));
    }
    else
    {
      v7 = 1;
      if ( (*(_BYTE *)(dword_106B945C + 48) & 1) != 0 )
      {
        *(float *)v25 = 20.0;
        *(float *)&v25[1] = 20.0;
        *(float *)&v25[2] = 20.0;
        *(float *)&v22 = -20.0;
        v23 = -20.0;
        v24 = -20.0;
        sub_1011BB20(this + 3664, (int)&v22, (int)v25, 0, 255, 0, 1, 0.1);
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        v8 = *(_DWORD *)(this + 252) >> 11;
        *(float *)&v22 = *(float *)(this + 3652) + *(float *)(this + 580);
        v23 = *(float *)(this + 584) + *(float *)(this + 3656);
        v24 = *(float *)(this + 588) + *(float *)(this + 3660);
        if ( (v8 & 1) != 0 )
          sub_100DAE60(this);
        sub_1011BC50((float *)(this + 580), (float *)&v22, 0, 255, 0, 1, 0.1);
      }
      *(float *)(this + 3740) = off_10689714();
      v9 = *(_DWORD *)(this + 3632);
      if ( v9 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3632) & 0xFFF) + 2] != v9 >> 12 )
        v10 = 0;
      else
        v10 = off_1061BE18[4 * (*(_DWORD *)(this + 3632) & 0xFFF) + 1];
      (*(void (__thiscall **)(int, float *, float *, _DWORD))(*(_DWORD *)v10 + 528))(v10, v21, v20, 0);
      if ( *(float *)(this + 3656) * v21[1] + *(float *)(this + 3652) * v21[0] + *(float *)(this + 3660) * v21[2] >= 0.0 )
        v7 = 0;
      if ( *(float *)(this + 3656) * v26[1] + *(float *)(this + 3652) * v26[0] + *(float *)(this + 3660) * v26[2] < 0.0
        || v27 < (double)*(float *)(this + 3740) )
      {
        v13 = **(_DWORD **)(this + 3628);
        if ( v7 )
          v12 = *(void (**)(void))(v13 + 164);
        else
          v12 = *(void (**)(void))(v13 + 168);
      }
      else
      {
        v11 = **(_DWORD **)(this + 3628);
        if ( v27 - 200.0 <= *(float *)(this + 3740) )
          v12 = *(void (**)(void))(v11 + 160);
        else
          v12 = *(void (**)(void))(v11 + 172);
      }
      v12();
      v14 = *(float *)(this + 3656) * v20[1] + *(float *)(this + 3652) * v20[0] + *(float *)(this + 3660) * v20[2];
      if ( v7 )
        v14 = v14 * -1.0;
      v15 = **(_DWORD **)(this + 3628);
      v16 = v14 * (*(float *)(this + 3748) * 0.011111111);
      if ( v16 >= 0.0 )
      {
        if ( v16 <= 0.0 )
        {
          (*(void (**)(void))(v15 + 184))();
        }
        else
        {
          v18 = v16;
          (*(void (__stdcall **)(_DWORD))(v15 + 180))(LODWORD(v18));
        }
      }
      else
      {
        v17 = -v16;
        (*(void (__stdcall **)(_DWORD))(v15 + 176))(LODWORD(v17));
      }
    }
  }
}
