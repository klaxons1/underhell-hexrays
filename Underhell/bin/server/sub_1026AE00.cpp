bool __thiscall sub_1026AE00(_DWORD *this, float a2, int a3, float *a4)
{
  int v5; // esi
  float v6; // ecx
  float v7; // edx
  int v8; // ecx
  double v9; // st6
  double v10; // st5
  double v11; // rt1
  double v12; // st5
  double v13; // st4
  double v14; // st7
  double v15; // rt2
  int v16; // eax
  float *v18; // [esp-14h] [ebp-94h]
  int v19; // [esp-Ch] [ebp-8Ch]
  _BYTE v20[44]; // [esp+8h] [ebp-78h] BYREF
  float v21; // [esp+34h] [ebp-4Ch]
  int v22; // [esp+5Ch] [ebp-24h] BYREF
  float v23; // [esp+60h] [ebp-20h]
  int v24; // [esp+64h] [ebp-1Ch]
  float v25; // [esp+68h] [ebp-18h] BYREF
  float v26; // [esp+6Ch] [ebp-14h]
  float v27; // [esp+70h] [ebp-10h]
  float v28; // [esp+74h] [ebp-Ch] BYREF
  float v29; // [esp+78h] [ebp-8h]
  float v30; // [esp+7Ch] [ebp-4h]
  int savedregs; // [esp+80h] [ebp+0h] BYREF

  v5 = this[11];
  v22 = *(_DWORD *)(v5 + 728);
  v23 = *(float *)(v5 + 732);
  v24 = *(_DWORD *)(v5 + 736);
  if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
    sub_100DAE60(v5);
  v6 = *(float *)(v5 + 580);
  v7 = *(float *)(v5 + 584);
  v30 = *(float *)(v5 + 588);
  v28 = v6;
  v30 = v30 + 12.0;
  v29 = v7;
  v23 = v23 + a2;
  sub_104222B0(&v22, 0, &v25, 0);
  v8 = this[11];
  v9 = v25 * -1.0;
  v25 = v9;
  v19 = v8;
  v10 = v26 * -1.0;
  v26 = v10;
  v11 = v10;
  v12 = -1.0 * v27;
  v27 = v12;
  v13 = (double)a3;
  v14 = v11 * v13 + v29;
  v15 = v12 * v13 + v30;
  *a4 = v9 * v13 + v28;
  a4[1] = v14;
  a4[2] = v15;
  v18 = (float *)((*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 24);
  v16 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
  sub_100231A0((int)&savedregs, (int)a4, &v28, a4, (float *)(v16 + 12), v18, 33636363, v19, 0, (int)v20);
  return v21 >= 1.0;
}
