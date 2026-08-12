int __thiscall sub_101036D0(int this)
{
  int v2; // edi
  int v3; // edx
  int (__thiscall *v4)(int); // eax
  float *v5; // eax
  int v6; // edx
  double v7; // st7
  int (__thiscall *v8)(int); // eax
  float *v9; // eax
  int v10; // eax
  int v11; // eax
  _DWORD v13[6]; // [esp+8h] [ebp-4Ch] BYREF
  int v14; // [esp+20h] [ebp-34h]
  float v15[3]; // [esp+24h] [ebp-30h] BYREF
  float v16[3]; // [esp+30h] [ebp-24h] BYREF
  float v17[3]; // [esp+3Ch] [ebp-18h] BYREF
  float v18[3]; // [esp+48h] [ebp-Ch] BYREF

  *(_BYTE *)(this + 134) = 0;
  v2 = *(_DWORD *)(this + 184);
  sub_1008FB60((int *)(this + 352), *(_WORD *)(this + 388) | 4);
  if ( v2 )
  {
    (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v2 + 204))(v2, v16, v15);
    (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v2 + 188))(v2, v18, v17);
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  }
  else
  {
    sub_10038150(this);
    v3 = *(_DWORD *)this;
    v16[0] = *(float *)(this + 244);
    v4 = *(int (__thiscall **)(int))(v3 + 36);
    v16[1] = *(float *)(this + 248);
    v16[2] = *(float *)(this + 252);
    v15[0] = *(float *)(this + 264);
    v15[1] = *(float *)(this + 256);
    v15[2] = *(float *)(this + 260);
    v5 = (float *)v4(this);
    v6 = *(_DWORD *)this;
    v18[0] = *v5;
    v18[1] = v5[1];
    v7 = v5[2];
    v8 = *(int (__thiscall **)(int))(v6 + 40);
    v18[2] = v7;
    v9 = (float *)v8(this);
    v17[0] = *v9;
    v17[1] = v9[1];
    v17[2] = v9[2];
  }
  *(float *)&v13[4] = *(float *)(this + 1980);
  v13[2] = v16;
  v10 = *(_DWORD *)(this + 736);
  v13[0] = v18;
  v13[1] = v17;
  v13[3] = v15;
  v14 = v10;
  if ( !v10 )
    v14 = 4;
  *(float *)&v13[5] = 100.0;
  v11 = sub_10034480((__int16 *)this);
  sub_1010C5F0(v11, v2, v13, this, -1, 0, 1);
  return (*(int (__thiscall **)(int))(*(_DWORD *)(this + 8) + 4))(this + 8);
}
