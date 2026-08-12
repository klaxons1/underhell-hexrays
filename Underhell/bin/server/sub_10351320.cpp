void __userpurge sub_10351320(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  void (__noreturn ***v5)(); // eax
  int (__thiscall *v6)(int); // edx
  int *v7; // eax
  float *v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // edi
  double v12; // st6
  double v13; // st5
  double v14; // st5
  double v15; // st7
  double v16; // st6
  double v17; // st4
  double v18; // st5
  double v19; // rt2
  double v20; // st2
  double v21; // st7
  double v22; // st3
  float v23; // [esp+24h] [ebp-30h]
  float v24; // [esp+30h] [ebp-24h] BYREF
  float v25; // [esp+34h] [ebp-20h]
  float v26; // [esp+38h] [ebp-1Ch]
  int v27; // [esp+3Ch] [ebp-18h] BYREF
  float v28; // [esp+40h] [ebp-14h]
  float v29; // [esp+44h] [ebp-10h]
  float v30; // [esp+48h] [ebp-Ch] BYREF
  float v31; // [esp+4Ch] [ebp-8h]
  float v32; // [esp+50h] [ebp-4h]
  int v33; // [esp+5Ch] [ebp+8h]

  *(_DWORD *)(a1 + 4136) = a4;
  *(_DWORD *)(a1 + 4144) = 0;
  *(float *)(a1 + 4164) = *(float *)(dword_106B31C8 + 12);
  v5 = sub_1023DBA0();
  ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v5)[12])(
    v5,
    *(_DWORD *)(a1 + 4104),
    1.0,
    0.0);
  v6 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 368);
  *(_BYTE *)(a1 + 4142) = 1;
  if ( v6(a1) )
  {
    v7 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
    sub_10260A10(a2, a3, v7, 2.0, (float *)&v27);
    v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 576))(a1);
    v30 = *v8 - *(float *)&v27;
    v31 = v8[1] - v28;
    v32 = v8[2] - v29;
    off_10689714();
    sub_10422540(&v30, &v24);
    v9 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 15, 30);
    v33 = v9;
    if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1) )
      v33 = -v9;
    v25 = (double)v33 + v25;
    v24 = 0.0;
    v26 = 0.0;
    sub_10422220(&v24, &v30);
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
    v11 = v10;
    if ( (*(_DWORD *)(v10 + 252) & 0x800) != 0 )
      sub_100DAE60(v10);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v12 = *(float *)(a1 + 584) - *(float *)(v11 + 584);
    v13 = *(float *)(a1 + 580) - *(float *)(v11 + 580);
    v23 = v13 * v13 + v12 * v12;
    v14 = off_10689708(v23);
    v15 = 512.0;
    if ( v14 >= *(float *)(dword_106E6984 + 44) + 512.0 )
      v15 = *(float *)(dword_106E6984 + 44);
    v16 = v30;
    v17 = v31;
    v18 = v32;
    v19 = v30 * v15 + *(float *)&v27;
    v20 = v31 * v15 + v28;
    v21 = v15 * v32 + v29;
    v22 = v29;
    *(float *)(a1 + 4180) = v19;
    *(float *)(a1 + 4184) = v20;
    *(float *)(a1 + 4188) = v21;
    *(float *)(a1 + 4188) = v22;
    *(float *)(a1 + 4192) = -v16 * 800.0;
    *(float *)(a1 + 4196) = -v17 * 800.0;
    *(float *)(a1 + 4200) = -v18 * 800.0;
    sub_1023D4B0(16777224, (float *)&v27, 512, 0.2, a1, 0, 0);
  }
}
