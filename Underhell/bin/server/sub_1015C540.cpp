int __thiscall sub_1015C540(int *this)
{
  float *v2; // eax
  int v3; // ecx
  int i; // esi
  int v5; // eax
  double v6; // st7
  float *v7; // esi
  float *v8; // eax
  int (__thiscall *v9)(int); // edx
  float *v10; // esi
  float *v11; // eax
  double v12; // st7
  double v13; // st6
  _BYTE *v14; // esi
  _BYTE *v15; // esi
  _BYTE *v16; // esi
  float *v17; // eax
  int v18; // esi
  int v19; // eax
  float *v20; // esi
  float *v21; // eax
  int v22; // edx
  float v24; // [esp+8h] [ebp-1Ch]
  float v25; // [esp+Ch] [ebp-18h]
  float v26; // [esp+10h] [ebp-14h]
  float v27; // [esp+14h] [ebp-10h]
  float v28; // [esp+18h] [ebp-Ch]
  float v29; // [esp+1Ch] [ebp-8h]
  float v30; // [esp+20h] [ebp-4h]

  v2 = (float *)this[2];
  v3 = this[1];
  v27 = v2[38];
  v28 = v2[39];
  v29 = v2[40];
  if ( sub_101C5260(v3) )
  {
    for ( i = 0; i < 12; *(float *)((char *)&v26 + i) = v6 + *(float *)((char *)&v26 + i) )
    {
      v30 = *(float *)(i + (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 36);
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
      v6 = v30 - *(float *)(i + v5 + 12);
      i += 4;
    }
  }
  else
  {
    v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
    v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
    v24 = v8[6] - v7[3];
    v25 = v8[7] - v7[4];
    v9 = *(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120);
    v26 = v8[8] - v7[5];
    v10 = (float *)v9(dword_106B3CDC);
    v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
    v12 = -(v25 - (v11[13] - v10[10]));
    v13 = -(v26 - (v11[14] - v10[11]));
    v27 = v27 - (v24 - (v11[12] - v10[9]));
    v28 = v12 + v28;
    v29 = v13 + v29;
  }
  v14 = (_BYTE *)(this[1] + 2272);
  if ( *v14 )
  {
    (**(void (__thiscall ***)(int, int))(this[1] + 2192))(this[1] + 2192, this[1] + 2272);
    *v14 = 0;
  }
  sub_100EA9A0((int *)this[1], 2);
  v15 = (_BYTE *)(this[1] + 2273);
  if ( *v15 )
  {
    (**(void (__thiscall ***)(int, int))(this[1] + 2192))(this[1] + 2192, this[1] + 2273);
    *v15 = 0;
  }
  v16 = (_BYTE *)(this[1] + 2274);
  if ( *v16 )
  {
    (**(void (__thiscall ***)(int, int))(this[1] + 2192))(this[1] + 2192, this[1] + 2274);
    *v16 = 0;
  }
  v17 = (float *)(*(int (__thiscall **)(int *, _DWORD))(*this + 28))(this, 0);
  sub_100DC4E0((float *)this[1], v17);
  v18 = this[1];
  v30 = 0.0;
  v19 = *(_DWORD *)(v18 + 2276);
  v20 = (float *)(v18 + 2276);
  if ( v19 != COERCE_INT(0.0) )
  {
    (**((void (__thiscall ***)(int, float *))v20 - 21))((int)(v20 - 21), v20);
    *v20 = 0.0;
  }
  v21 = (float *)this[2];
  v22 = *this;
  v21[38] = v27;
  v21[39] = v28;
  v21[40] = v29;
  return (*(int (__thiscall **)(int *))(v22 + 144))(this);
}
