int __thiscall sub_1015C9E0(_DWORD *this)
{
  _BYTE *v2; // esi
  _BYTE *v3; // esi
  float *v4; // eax
  float *v5; // eax
  int v6; // esi
  float v7; // ecx
  float v8; // edx
  float v9; // eax
  int v10; // edx
  int v11; // eax
  double v12; // st7
  float *v13; // esi
  float *v14; // eax
  int v15; // edx
  double v16; // st7
  int (*v17)(void); // eax
  float *v18; // esi
  float *v19; // eax
  double v20; // st7
  double v21; // st6
  double v22; // st5
  float *v23; // eax
  double v24; // rt0
  double v25; // st5
  double v26; // st6
  double v27; // st7
  float v29; // [esp+4h] [ebp-14h]
  float v30; // [esp+8h] [ebp-10h]
  float v31; // [esp+Ch] [ebp-Ch]
  float v32; // [esp+10h] [ebp-8h]
  float v33; // [esp+14h] [ebp-4h]

  sub_100EA940((int *)this[1], 2);
  v2 = (_BYTE *)(this[1] + 2272);
  if ( *v2 != 1 )
  {
    (**(void (__thiscall ***)(int, int))(this[1] + 2192))(this[1] + 2192, this[1] + 2272);
    *v2 = 1;
  }
  v3 = (_BYTE *)(this[1] + 2273);
  if ( *v3 )
  {
    (**(void (__thiscall ***)(int, int))(this[1] + 2192))(this[1] + 2192, this[1] + 2273);
    *v3 = 0;
  }
  v4 = (float *)(*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 1);
  sub_100DC4E0((float *)this[1], v4);
  if ( sub_101C5260(this[1]) )
  {
    v5 = (float *)(this[2] + 152);
    v6 = 0;
    do
    {
      v7 = *v5;
      v8 = v5[1];
      v9 = v5[2];
      v30 = v7;
      v31 = v8;
      v10 = *(_DWORD *)dword_106B3CDC;
      v32 = v9;
      v33 = *(float *)(v6 + (*(int (__thiscall **)(int))(v10 + 120))(dword_106B3CDC) + 36);
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
      v12 = v33 - *(float *)(v6 + v11 + 12);
      v5 = (float *)(this[2] + 152);
      v6 += 4;
      *(float *)((char *)&v29 + v6) = *(float *)((char *)&v29 + v6) - v12;
      *v5 = v30;
      v5[1] = v31;
      v5[2] = v32;
    }
    while ( v6 < 12 );
  }
  else
  {
    v13 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
    v14 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
    v15 = *(_DWORD *)dword_106B3CDC;
    v30 = v14[6] - v13[3];
    v31 = v14[7] - v13[4];
    v16 = v14[8];
    v17 = *(int (**)(void))(v15 + 120);
    v32 = v16 - v13[5];
    v18 = (float *)v17();
    v19 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
    v20 = v19[12] - v18[9];
    v21 = v19[13] - v18[10];
    v22 = v19[14];
    v23 = (float *)this[2];
    v24 = v32 - (v22 - v18[11]);
    v25 = v30 - v20 + v23[38];
    v26 = v31 - v21 + v23[39];
    v27 = v24 + v23[40];
    v23[38] = v25;
    v23[39] = v26;
    v23[40] = v27;
  }
  sub_1015A590(this, 1);
  return (*(int (__thiscall **)(_DWORD *))(*this + 144))(this);
}
