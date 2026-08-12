// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_102B0210@<eax>(int a1@<ebp>, int a2@<edi>, int a3@<esi>, int a4, int a5, int a6, int a7)
{
  float v7; // edx
  float v8; // eax
  float v9; // ecx
  float *v10; // ecx
  int v11; // edi
  double v12; // st5
  double v13; // st4
  double v14; // st3
  double v15; // st2
  double v16; // st1
  float v17; // ecx
  double v18; // st7
  char v19; // al
  char v20; // cl
  __int16 v21; // dx
  int v22; // eax
  __int16 v23; // cx
  double v24; // st6
  double v25; // st6
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // edx
  int v30; // eax
  int v32; // edx
  int v33; // ecx
  int v34; // eax
  int v35; // ecx
  float v36[16]; // [esp+34h] [ebp-10Ch] BYREF
  char v37; // [esp+74h] [ebp-CCh]
  bool v38; // [esp+75h] [ebp-CBh]
  _DWORD v39[3]; // [esp+8Ch] [ebp-B4h] BYREF
  int v40; // [esp+98h] [ebp-A8h]
  float *v41; // [esp+9Ch] [ebp-A4h]
  float v42; // [esp+A0h] [ebp-A0h]
  float v43; // [esp+A4h] [ebp-9Ch]
  float v44; // [esp+A8h] [ebp-98h]
  float v45[3]; // [esp+ACh] [ebp-94h] BYREF
  float v46; // [esp+B8h] [ebp-88h] BYREF
  float v47; // [esp+BCh] [ebp-84h]
  float v48; // [esp+C0h] [ebp-80h]
  float v49; // [esp+C4h] [ebp-7Ch]
  float v50; // [esp+C8h] [ebp-78h]
  float v51; // [esp+CCh] [ebp-74h]
  float v52; // [esp+D0h] [ebp-70h]
  char v53; // [esp+D4h] [ebp-6Ch]
  char v54; // [esp+D5h] [ebp-6Bh]
  __int16 v55; // [esp+D6h] [ebp-6Ah]
  float v56; // [esp+D8h] [ebp-68h]
  int v57; // [esp+DCh] [ebp-64h]
  __int16 v58; // [esp+E0h] [ebp-60h]
  char v59; // [esp+E2h] [ebp-5Eh]
  char v60; // [esp+E3h] [ebp-5Dh]
  float v61; // [esp+E4h] [ebp-5Ch]
  int v62; // [esp+E8h] [ebp-58h]
  int v63; // [esp+ECh] [ebp-54h]
  int v64; // [esp+F0h] [ebp-50h]
  __int16 v65; // [esp+F4h] [ebp-4Ch]
  int v66; // [esp+F8h] [ebp-48h]
  int v67; // [esp+FCh] [ebp-44h]
  _DWORD v68[2]; // [esp+108h] [ebp-38h]
  float v69; // [esp+110h] [ebp-30h]
  float v70; // [esp+114h] [ebp-2Ch] BYREF
  float v71; // [esp+118h] [ebp-28h]
  float v72; // [esp+11Ch] [ebp-24h]
  int v73; // [esp+120h] [ebp-20h]
  int i; // [esp+124h] [ebp-1Ch]
  float v75; // [esp+128h] [ebp-18h] BYREF
  float v76; // [esp+12Ch] [ebp-14h]
  float v77; // [esp+130h] [ebp-10h]
  int v78; // [esp+134h] [ebp-Ch]
  void *v79; // [esp+138h] [ebp-8h]
  void *retaddr; // [esp+140h] [ebp+0h]

  v78 = a1;
  v79 = retaddr;
  v69 = 1000000.0;
  v70 = *(float *)(a4 + 12);
  v7 = *(float *)a4;
  v68[0] = a5;
  v71 = *(float *)(a4 + 16);
  v8 = *(float *)(a4 + 4);
  v75 = v7;
  v68[1] = a6;
  v72 = *(float *)(a4 + 20);
  v9 = *(float *)(a4 + 8);
  v76 = v8;
  v77 = v9;
  v42 = v7 + (v70 - v7) * 2.0;
  v43 = v8 + (v71 - v8) * 2.0;
  v44 = v9 + (v72 - v9) * 2.0;
  v72 = v44;
  v70 = v42;
  v71 = v43;
  sub_1001F180(v36, &v75, &v70);
  sub_10265570(v39, a7, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, float *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v36,
    100679691,
    v39,
    v45,
    a2,
    a3);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v45, (int)&v46, 255, 0, 0, 1, 5.0);
  if ( 1.0 == v56 )
  {
    for ( i = 0; i < 2; ++i )
    {
      v10 = (float *)v68[i];
      v73 = 0;
      v41 = v10;
      do
      {
        v11 = 0;
        v40 = v68[v73];
        do
        {
          v12 = v43 + *(float *)(v40 + 4);
          v13 = *(float *)(v68[v11] + 8) + v44;
          v14 = v42 + *v41 - v75;
          v36[4] = v14;
          v15 = v12 - v76;
          v36[5] = v15;
          v16 = v13 - v77;
          v36[6] = v16;
          v38 = 0.0 != v14 * v14 + v15 * v15 + v16 * v16;
          v36[14] = 0.0;
          v36[13] = 0.0;
          v36[12] = 0.0;
          v36[10] = 0.0;
          v37 = 1;
          v36[9] = 0.0;
          v36[8] = 0.0;
          v36[0] = v75;
          v36[1] = v76;
          v36[2] = v77;
          sub_10265570(v39, a7, 0);
          (*(void (__thiscall **)(int, float *, int, _DWORD *, float *))(*(_DWORD *)dword_106B31F4 + 16))(
            dword_106B31F4,
            v36,
            100679691,
            v39,
            v45);
          if ( *(_DWORD *)(dword_106CE63C + 48) )
            sub_101A0AD0((int)v45, (int)&v46, 255, 0, 0, 1, 5.0);
          if ( v56 < 1.0 )
          {
            v76 = (v46 - v75) * (v46 - v75) + (v47 - v17) * (v47 - v17) + (v48 - v77) * (v48 - v77);
            v18 = off_10689708(v76);
            if ( v69 > v18 )
            {
              v19 = v53;
              *(float *)a4 = v45[0];
              v20 = v54;
              v21 = v55;
              *(float *)(a4 + 4) = v45[1];
              *(float *)(a4 + 8) = v45[2];
              *(float *)(a4 + 12) = v46;
              *(float *)(a4 + 16) = v47;
              *(float *)(a4 + 20) = v48;
              *(_BYTE *)(a4 + 40) = v19;
              v22 = v57;
              *(float *)(a4 + 24) = v49;
              *(_BYTE *)(a4 + 41) = v20;
              v23 = v58;
              *(float *)(a4 + 28) = v50;
              *(float *)(a4 + 32) = v51;
              *(float *)(a4 + 36) = v52;
              *(_WORD *)(a4 + 42) = v21;
              LOBYTE(v21) = v59;
              v24 = v56;
              *(_DWORD *)(a4 + 48) = v22;
              *(float *)(a4 + 44) = v24;
              LOBYTE(v22) = v60;
              v25 = v61;
              *(_WORD *)(a4 + 52) = v23;
              *(float *)(a4 + 56) = v25;
              v26 = v62;
              *(_BYTE *)(a4 + 54) = v21;
              v69 = v18;
              v27 = v63;
              *(_BYTE *)(a4 + 55) = v22;
              v28 = v64;
              *(_DWORD *)(a4 + 60) = v26;
              LOWORD(v26) = v65;
              *(_DWORD *)(a4 + 64) = v27;
              v29 = v66;
              *(_DWORD *)(a4 + 68) = v28;
              v30 = v67;
              *(_WORD *)(a4 + 72) = v26;
              *(_DWORD *)(a4 + 76) = v29;
              *(_DWORD *)(a4 + 80) = v30;
            }
          }
          ++v11;
        }
        while ( v11 < 2 );
        ++v73;
      }
      while ( v73 < 2 );
    }
    return 189;
  }
  else
  {
    sub_10079DC0((float *)a4, (int)v45);
    v32 = v62;
    *(float *)(a4 + 56) = v61;
    v33 = v64;
    *(_DWORD *)(a4 + 64) = v63;
    v34 = v66;
    *(_DWORD *)(a4 + 60) = v32;
    LOWORD(v32) = v65;
    *(_DWORD *)(a4 + 68) = v33;
    v35 = v67;
    *(_DWORD *)(a4 + 76) = v34;
    *(_WORD *)(a4 + 72) = v32;
    *(_DWORD *)(a4 + 80) = v35;
    return 189;
  }
}
