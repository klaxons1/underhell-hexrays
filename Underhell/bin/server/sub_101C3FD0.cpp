void __thiscall sub_101C3FD0(_DWORD *this, float a2)
{
  int v3; // eax
  int v4; // esi
  float *v5; // eax
  int v6; // eax
  float *v7; // eax
  float *v8; // eax
  float *v9; // eax
  double v10; // st3
  double v11; // st6
  double v12; // st3
  double v13; // st4
  _BYTE v14[12]; // [esp+14h] [ebp-18h] BYREF
  float v15[3]; // [esp+20h] [ebp-Ch] BYREF

  sub_101C3F60((int)this);
  v3 = sub_101C46F0(2);
  v4 = v3;
  if ( v3 )
  {
    *(_WORD *)v3 = 257;
    *(_DWORD *)(v3 + 144) = -1;
    *(float *)(v3 + 148) = 0.0;
    *(float *)(v3 + 152) = 0.0;
    *(float *)(v3 + 156) = 0.0;
    *(float *)(v3 + 160) = 0.0;
    *(float *)(v3 + 164) = 0.0;
    *(float *)(v3 + 168) = 0.0;
    *(_DWORD *)(v3 + 4) = *(_DWORD *)(v3 + 36);
    *(float *)(v3 + 8) = *(float *)(v3 + 40);
    *(float *)(v3 + 12) = *(float *)(v3 + 44);
    *(float *)(v3 + 16) = *(float *)(v3 + 48);
    *(_DWORD *)(v3 + 20) = *(_DWORD *)(v3 + 52);
    *(_DWORD *)(v3 + 24) = *(_DWORD *)(v3 + 56);
    *(_DWORD *)(v3 + 28) = *(_DWORD *)(v3 + 60);
    *(_DWORD *)(v3 + 32) = *(_DWORD *)(v3 + 64);
    *(_DWORD *)(v3 + 36) = *(_DWORD *)(dword_106B31C8 + 24);
    v5 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 648))(this, v14);
    *(float *)(v4 + 40) = *v5;
    *(float *)(v4 + 44) = v5[1];
    *(float *)(v4 + 48) = v5[2];
    (*(void (__thiscall **)(_DWORD *, float *))(*this + 652))(this, v15);
    sub_10423260(v15, v4 + 52);
    sub_101C3040((int)this, (int)this, a2);
    sub_101C8820((int)this, 1);
    if ( (*(int (__thiscall **)(_DWORD *))(*this + 208))(this) )
    {
      v6 = (*(int (__thiscall **)(_DWORD *))(*this + 208))(this);
      sub_100BEBE0(v6);
    }
    v7 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 648))(this, v14);
    *(float *)(v4 + 104) = *v7;
    *(float *)(v4 + 108) = v7[1];
    *(float *)(v4 + 112) = v7[2];
    v8 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 652))(this, v14);
    v15[0] = *v8;
    v15[1] = v8[1];
    v15[2] = v8[2];
    sub_10423260(v15, v4 + 116);
    v9 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 652))(this, v14);
    *(float *)(v4 + 132) = *v9;
    *(float *)(v4 + 136) = v9[1];
    *(float *)(v4 + 140) = v9[2];
    *(_DWORD *)(v4 + 100) = sub_100E9270(this, 0);
    if ( sub_100EA2A0() )
      ++*(_DWORD *)(v4 + 100);
    if ( a2 > 0.0 )
    {
      v10 = *(float *)(v4 + 104) - *(float *)(v4 + 40);
      v11 = v10 * v10;
      v12 = *(float *)(v4 + 108) - *(float *)(v4 + 44);
      v13 = *(float *)(v4 + 112) - *(float *)(v4 + 48);
      if ( (v13 * v13 + v12 * v12 + v11) / (a2 * a2) >= 16777216.0 )
        *(_WORD *)v4 = 0;
    }
  }
  else
  {
    sub_101C3040((int)this, (int)this, a2);
    sub_101C8820((int)this, 1);
  }
}
