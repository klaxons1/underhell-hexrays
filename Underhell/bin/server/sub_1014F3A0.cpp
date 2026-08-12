// bad sp value at call has been detected, the output may be wrong!
float *__userpurge sub_1014F3A0@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, float *a5, float *a6)
{
  float *v7; // esi
  int v8; // edi
  float v9; // edx
  float v10; // eax
  float *v11; // eax
  float v12; // ecx
  float v13; // edx
  float *v14; // eax
  int v15; // edx
  float *v16; // eax
  float v17; // ecx
  float v18; // edx
  float v19; // eax
  void (__thiscall *v20)(int, float *, int, _BYTE *); // edx
  float *result; // eax
  float v24[20]; // [esp+34h] [ebp-ECh] BYREF
  _BYTE v25[12]; // [esp+84h] [ebp-9Ch] BYREF
  float v26[10]; // [esp+90h] [ebp-90h] BYREF
  char v27; // [esp+BBh] [ebp-65h]
  _BYTE v28[12]; // [esp+E0h] [ebp-40h] BYREF
  float v29[3]; // [esp+ECh] [ebp-34h] BYREF
  int v30; // [esp+F8h] [ebp-28h]
  float v31; // [esp+FCh] [ebp-24h] BYREF
  float v32; // [esp+100h] [ebp-20h]
  float v33; // [esp+104h] [ebp-1Ch]
  float v34; // [esp+108h] [ebp-18h] BYREF
  float *v35; // [esp+10Ch] [ebp-14h]
  float *v36; // [esp+110h] [ebp-10h]
  int v37; // [esp+114h] [ebp-Ch]
  void *v38; // [esp+118h] [ebp-8h]
  void *retaddr; // [esp+120h] [ebp+0h]

  v37 = a2;
  v38 = retaddr;
  v7 = (float *)(a1 + 832);
  v30 = a1;
  sub_1014EFD0((float *)(a1 + 832), a5);
  v8 = a1 + 844;
  sub_1014F040((float *)v8, a6);
  if ( *(float *)(v30 + 840) < (double)*(float *)(v30 + 852) )
  {
    v9 = *(float *)v8;
    v10 = *(float *)(v8 + 4);
    v36 = *(float **)(v8 + 8);
    v34 = v9;
    v35 = (float *)LODWORD(v10);
    sub_1014F040((float *)v8, v7);
    sub_1014EFD0(v7, &v34);
  }
  v11 = (float *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC, a3, a4);
  v12 = v11[3];
  v13 = v11[4];
  v14 = (float *)*((_DWORD *)v11 + 5);
  v34 = v12;
  v35 = (float *)LODWORD(v13);
  v15 = *(_DWORD *)dword_106B3CDC;
  v36 = v14;
  v16 = (float *)(*(int (__thiscall **)(int))(v15 + 120))(dword_106B3CDC);
  v17 = v16[6];
  v31 = *v7;
  v18 = v16[7];
  v19 = v16[8];
  v32 = v7[1];
  v29[0] = v17;
  v29[1] = v18;
  v29[2] = v19;
  sub_1001F200(v24, &v31, v7, &v34, v29);
  sub_10265570(0, 8);
  (*(void (__thiscall **)(int, float *, int, _BYTE *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v24,
    81931,
    v28,
    v25);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v25, (int)v26, 255, 255, 0, 1, -1.0);
  if ( !v27 )
    sub_1014EFD0(v7, v26);
  v31 = *(float *)v8;
  v36 = v29;
  v32 = *(float *)(v8 + 4);
  v35 = &v34;
  v33 = *(float *)(v8 + 8) + 4.0;
  sub_1001F200(v24, (float *)LODWORD(v33), (float *)v8, &v34, v29);
  sub_10265570(0, 8);
  v20 = *(void (__thiscall **)(int, float *, int, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16);
  v36 = (float *)v25;
  v20(dword_106B31F4, v24, 81931, v28);
  result = (float *)dword_106CE63C;
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    result = (float *)sub_101A0AD0((int)v25, (int)v26, 255, 255, 0, 1, -1.0);
  if ( !v27 )
    return sub_1014F040((float *)v8, v26);
  return result;
}
