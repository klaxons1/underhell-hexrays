int __userpurge sub_101B1AE0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3, int a4)
{
  int v5; // eax
  int v7; // ecx
  int v8; // eax
  double v9; // st6
  float v11; // [esp+Ch] [ebp-A8h]
  float v12; // [esp+Ch] [ebp-A8h]
  _BYTE v13[48]; // [esp+18h] [ebp-9Ch] BYREF
  float v14; // [esp+48h] [ebp-6Ch] BYREF
  float v15; // [esp+4Ch] [ebp-68h]
  float v16; // [esp+50h] [ebp-64h]
  float v17; // [esp+54h] [ebp-60h] BYREF
  float v18; // [esp+58h] [ebp-5Ch]
  float v19; // [esp+5Ch] [ebp-58h]
  float v20; // [esp+60h] [ebp-54h]
  float v21; // [esp+64h] [ebp-50h]
  float v22; // [esp+68h] [ebp-4Ch]
  float v23; // [esp+6Ch] [ebp-48h]
  float v24; // [esp+70h] [ebp-44h]
  bool v25; // [esp+74h] [ebp-40h]
  float v26; // [esp+78h] [ebp-3Ch]
  float v27; // [esp+7Ch] [ebp-38h]
  float v28; // [esp+80h] [ebp-34h]
  float v29; // [esp+84h] [ebp-30h]
  float v30; // [esp+88h] [ebp-2Ch]
  float v31; // [esp+8Ch] [ebp-28h]
  float v32; // [esp+90h] [ebp-24h]
  float v33; // [esp+94h] [ebp-20h]
  float v34; // [esp+98h] [ebp-1Ch]
  float v35; // [esp+9Ch] [ebp-18h]
  float v36; // [esp+A0h] [ebp-14h]
  float v37; // [esp+A4h] [ebp-10h]
  float v38; // [esp+A8h] [ebp-Ch]
  float v39; // [esp+ACh] [ebp-8h]
  char v40; // [esp+B0h] [ebp-4h]
  float v41; // [esp+C0h] [ebp+Ch]

  v21 = 0.0;
  v5 = *(_DWORD *)(a1 + 252);
  v22 = 0.0;
  v20 = 1.0;
  v23 = 1.0;
  v25 = 1;
  v24 = 1.0;
  v40 = 0;
  v38 = 1.0;
  v39 = 1.0;
  v26 = 0.0;
  v27 = 0.0;
  v28 = 0.0;
  v29 = 0.0;
  v30 = 0.0;
  v31 = 0.0;
  v32 = 0.0;
  v33 = 0.0;
  v34 = 0.0;
  v35 = 0.0;
  v36 = 0.0;
  v37 = 0.0;
  if ( (v5 & 0x800) != 0 )
    sub_100DAE60(a1);
  v7 = *(_DWORD *)(a4 + 24);
  v26 = *(float *)(a1 + 580);
  v27 = *(float *)(a1 + 584);
  v28 = *(float *)(a1 + 588);
  v29 = *(float *)(a1 + 860);
  v30 = *(float *)(a1 + 864);
  v31 = *(float *)(a1 + 868);
  (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v7 + 192))(v7, v13, a2);
  sub_10421B40(a4, v13, &v14);
  (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(a4 + 28) + 192))(*(_DWORD *)(a4 + 28), v13);
  sub_10421B40(a4 + 12, v13, &v17);
  v32 = *(float *)a4;
  v33 = *(float *)(a4 + 4);
  v34 = *(float *)(a4 + 8);
  *(float *)(a1 + 872) = *(float *)a4;
  *(float *)(a1 + 876) = *(float *)(a4 + 4);
  *(float *)(a1 + 880) = *(float *)(a4 + 8);
  v35 = *(float *)(a4 + 12);
  v36 = *(float *)(a4 + 16);
  v37 = *(float *)(a4 + 20);
  *(float *)(a1 + 884) = *(float *)(a4 + 12);
  *(float *)(a1 + 888) = *(float *)(a4 + 16);
  *(float *)(a1 + 892) = *(float *)(a4 + 20);
  v11 = (v14 - v26) * (v14 - v26) + (v15 - v27) * (v15 - v27) + (v16 - v28) * (v16 - v28);
  v41 = off_10689708(v11);
  v12 = (v17 - v29) * (v17 - v29) + (v18 - v30) * (v18 - v30) + (v19 - v31) * (v19 - v31);
  v38 = *(float *)(a1 + 896) + v41 + off_10689708(v12) * *(float *)(a1 + 900);
  if ( 0.0 != *(float *)(a1 + 900) )
    v39 = *(float *)(a1 + 900);
  v8 = *(_DWORD *)(a1 + 248);
  v20 = 1.0;
  v9 = *(float *)(a1 + 820) * 0.45454544;
  v25 = (v8 & 4) == 0;
  v21 = v9;
  v22 = 0.45454544 * *(float *)(a1 + 824);
  v23 = *(float *)(a4 + 36);
  v24 = *(float *)(a4 + 40);
  if ( (v8 & 2) != 0 )
    v40 = 1;
  return (*(int (__thiscall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)dword_106BAFF4 + 80))(
           dword_106BAFF4,
           *(_DWORD *)(a4 + 24),
           *(_DWORD *)(a4 + 28),
           a3);
}
