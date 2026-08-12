char __thiscall sub_102E9870(int *this, char a2, float a3, float *a4, _DWORD *a5)
{
  unsigned int v6; // eax
  unsigned int v7; // esi
  int v8; // ebx
  int (__thiscall *v9)(int *, bool, char *); // edx
  float *v10; // eax
  _DWORD *v12; // eax
  unsigned int *v13; // ecx
  int v14; // eax
  float *v15; // eax
  double v16; // st4
  double v17; // st6
  double v18; // st4
  double v19; // st5
  double v20; // st6
  double v21; // st7
  int v22; // edx
  double v23; // st6
  int v24; // esi
  int *v25; // ecx
  BOOL v27; // [esp+4h] [ebp-18h]
  bool *v28; // [esp+8h] [ebp-14h]
  float v29; // [esp+8h] [ebp-14h]
  char v30; // [esp+1Bh] [ebp-1h] BYREF
  _DWORD *v31; // [esp+2Ch] [ebp+10h]

  v6 = this[1];
  if ( v6 )
    v7 = v6 + 5148;
  else
    v7 = 0;
  if ( !*(_BYTE *)v7 )
  {
    if ( !a5 || (sub_1014EAD0(a5, v6), LOBYTE(v6) = sub_1014EB80(a5), !(_BYTE)v6) )
    {
      v8 = *(_DWORD *)(this[1] + 256);
      v9 = *(int (__thiscall **)(int *, bool, char *))(*this + 24);
      v30 = 0;
      v28 = (bool *)v9(this, (v8 & 2) != 0, &v30);
      v27 = (v8 & 2) != 0;
      v10 = (float *)(*(int (__thiscall **)(int *))(*this + 20))(this);
      v12 = sub_102E83D0(this[1], a4, v10, (float *)v27, v28);
      v13 = (unsigned int *)(v7 + 40);
      v31 = (_DWORD *)(v7 + 40);
      if ( v12 )
      {
        *v31 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v12 + 8))(v12);
        v13 = (unsigned int *)(v7 + 40);
      }
      else
      {
        *v13 = -1;
      }
      if ( v30 )
      {
        v15 = (float *)this[2];
        *(float *)(v7 + 12) = *a4;
        *(float *)(v7 + 16) = a4[1];
        *(float *)(v7 + 20) = a4[2];
        *(float *)(v7 + 24) = v15[38];
        *(float *)(v7 + 28) = v15[39];
        *(float *)(v7 + 32) = v15[40];
        v16 = *(float *)(v7 + 16) - *(float *)(v7 + 28);
        v17 = v16 * v16;
        v18 = *(float *)(v7 + 12) - *(float *)(v7 + 24);
        v19 = v17;
        v20 = *(float *)(v7 + 20) - *(float *)(v7 + 32);
        v29 = v18 * v18 + v19 + v20 * v20;
        v21 = off_10689708(v29) / a3;
        if ( v21 < 0.001 )
          v21 = 0.001;
        *(_BYTE *)v7 = 1;
        *(_BYTE *)(v7 + 1) = a2;
        v22 = dword_106B31C8;
        v23 = *(float *)(dword_106B31C8 + 12);
        *(float *)(v7 + 4) = *(float *)(dword_106B31C8 + 12);
        *(float *)(v7 + 8) = v21 + v23;
        if ( a5 )
          *(_DWORD *)(v7 + 36) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a5 + 8))(a5);
        else
          *(_DWORD *)(v7 + 36) = -1;
        sub_100E0970(this[1], v22, 0, 0);
        v24 = this[1];
        if ( *(_BYTE *)(v24 + 307) )
        {
          if ( *(_BYTE *)(v24 + 84) )
          {
            *(_BYTE *)(v24 + 88) |= 1u;
          }
          else
          {
            v25 = *(int **)(v24 + 24);
            if ( v25 )
              sub_100194B0(v25, 307);
          }
          *(_BYTE *)(v24 + 307) = 0;
        }
        sub_10112C00(this[1] + 320, 0);
        sub_102E8350(this, (int)a5);
        *(_DWORD *)(this[2] + 40) |= 0x20u;
        *(_DWORD *)(this[1] + 3296) &= ~0x20u;
        v6 = this[1];
        *(_BYTE *)(v6 + 5218) = 0;
      }
      else
      {
        v6 = *v13;
        if ( *v13 != -1 )
        {
          v6 >>= 12;
          if ( off_1061BE18[4 * (*v13 & 0xFFF) + 2] == v6 )
          {
            if ( off_1061BE18[4 * (*v13 & 0xFFF) + 1] )
            {
              v14 = sub_1026A890(v13);
              sub_1025FAC0(v14);
              LOBYTE(v6) = v7 + 40;
              *v31 = -1;
            }
          }
        }
      }
    }
  }
  return v6;
}
