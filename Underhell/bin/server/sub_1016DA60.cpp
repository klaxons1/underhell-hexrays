// bad sp value at call has been detected, the output may be wrong!
int __usercall sub_1016DA60@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  int v4; // esi
  void (__cdecl *v5)(int, int); // edx
  int result; // eax
  int v7; // eax
  int v8; // edi
  int v9; // ecx
  float v10; // eax
  float v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // esi
  float v16; // edx
  float v17; // eax
  double v18; // st7
  int (__thiscall *v19)(int); // eax
  int v20; // eax
  double v21; // st7
  double v22; // st7
  int v23; // eax
  double v24; // st7
  int (__thiscall *v25)(int, const char *); // eax
  int v26; // esi
  int v27; // eax
  float v29[22]; // [esp+28h] [ebp-14Ch] BYREF
  _BYTE v30[12]; // [esp+80h] [ebp-F4h] BYREF
  float v31[19]; // [esp+8Ch] [ebp-E8h] BYREF
  int v32; // [esp+D8h] [ebp-9Ch] BYREF
  int v33; // [esp+E4h] [ebp-90h]
  float v34; // [esp+E8h] [ebp-8Ch]
  float v35; // [esp+ECh] [ebp-88h]
  float v36; // [esp+F0h] [ebp-84h]
  float v37; // [esp+F4h] [ebp-80h]
  float v38; // [esp+F8h] [ebp-7Ch]
  float v39; // [esp+FCh] [ebp-78h]
  float v40; // [esp+100h] [ebp-74h]
  float v41; // [esp+104h] [ebp-70h]
  float v42; // [esp+108h] [ebp-6Ch] BYREF
  float v43; // [esp+10Ch] [ebp-68h]
  float v44; // [esp+110h] [ebp-64h]
  float v45; // [esp+114h] [ebp-60h]
  float v46; // [esp+118h] [ebp-5Ch]
  float v47; // [esp+11Ch] [ebp-58h]
  float v48; // [esp+120h] [ebp-54h] BYREF
  float v49; // [esp+124h] [ebp-50h]
  float v50; // [esp+128h] [ebp-4Ch]
  int v51; // [esp+12Ch] [ebp-48h]
  int v52; // [esp+130h] [ebp-44h]
  float v53; // [esp+134h] [ebp-40h]
  int v54; // [esp+138h] [ebp-3Ch]
  float v55; // [esp+13Ch] [ebp-38h] BYREF
  float v56; // [esp+140h] [ebp-34h]
  float v57; // [esp+144h] [ebp-30h]
  int v58; // [esp+148h] [ebp-2Ch]
  float v59; // [esp+14Ch] [ebp-28h]
  float v60; // [esp+150h] [ebp-24h]
  float v61; // [esp+154h] [ebp-20h]
  int *v62; // [esp+158h] [ebp-1Ch]
  int v63; // [esp+15Ch] [ebp-18h]
  int v64; // [esp+160h] [ebp-14h]
  float v65; // [esp+164h] [ebp-10h]
  int v66; // [esp+168h] [ebp-Ch]
  void *v67; // [esp+16Ch] [ebp-8h]
  void *retaddr; // [esp+174h] [ebp+0h]

  v66 = a2;
  v67 = retaddr;
  v4 = a1;
  v5 = *(void (__cdecl **)(int, int))(*(_DWORD *)a1 + 64);
  v63 = a1;
  v5(a3, a4);
  result = sub_1016BEB0(*(_DWORD *)(v4 + 324));
  v58 = 0;
  if ( *(int *)(v4 + 324) > 0 )
  {
    while ( 1 )
    {
      v7 = dword_106B52E0[v58];
      v65 = 0.0;
      v8 = *(_DWORD *)(v4 + 4 * v7 + 328);
      v53 = 0.0;
      v52 = 0;
      v59 = 0.0;
      v64 = 0;
      v60 = 0.0;
      v9 = *(_DWORD *)(v8 + 252);
      v61 = 0.0;
      v33 = v7;
      v51 = v8;
      if ( (v9 & 0x800) != 0 )
        sub_100DAE60(v8);
      v10 = *(float *)(v8 + 584);
      v11 = *(float *)(v8 + 588);
      v42 = *(float *)(v8 + 580);
      v43 = v10;
      v12 = *(_DWORD *)v8;
      v44 = v11;
      v13 = (*(int (__thiscall **)(int, float *))(v12 + 508))(v8, &v55);
      sub_10422220(v13, LODWORD(v65));
      v14 = 0;
      v54 = 0;
      v55 = v55 * -1.0;
      v56 = v56 * -1.0;
      v57 = -1.0 * v57;
      if ( *(int *)(v4 + 324) > 0 )
      {
        v62 = (int *)(v4 + 328);
        do
        {
          if ( v33 != v14 )
          {
            v15 = *v62;
            if ( (*(_DWORD *)(*v62 + 252) & 0x800) != 0 )
              sub_100DAE60(*v62);
            v16 = *(float *)(v15 + 584);
            v17 = *(float *)(v15 + 588);
            v35 = *(float *)(v15 + 580);
            v36 = v16;
            v37 = v17;
            v65 = (v35 - v42) * (v35 - v42) + (v16 - v43) * (v16 - v43) + (v17 - v44) * (v17 - v44);
            v18 = off_10689708(v65);
            v34 = v18;
            if ( v18 <= 1024.0 && v18 >= 4.0 )
            {
              if ( (*(_DWORD *)(v15 + 252) & 0x800) != 0 )
                sub_100DAE60(v15);
              sub_1001F180(v29, &v42, (float *)(v15 + 580));
              sub_10265570(v15, 0);
              (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
                dword_106B31F4,
                v29,
                33570827,
                &v32,
                v30);
              if ( *(_DWORD *)(dword_106CE63C + 48) )
                sub_101A0AD0((int)v30, (int)v31, 255, 0, 0, 1, 5.0);
              if ( v31[8] >= 1.0 )
              {
                v19 = *(int (__thiscall **)(int))(*(_DWORD *)v15 + 508);
                v65 = COERCE_FLOAT(&v48);
                v20 = v19(v15);
                sub_10422220(v20, LODWORD(v65));
                v39 = v48;
                v40 = v49;
                v41 = v50;
                v45 = v55;
                v46 = v56;
                v47 = v57;
                off_10689714();
                off_10689714();
                v21 = (v46 * v40 + v39 * v45 + v47 * v41 + 1.0) * 0.5;
                v22 = v21 * v21;
                v38 = v22;
                if ( v53 < v22 )
                {
                  v23 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                          dword_106B31D0,
                          *(_DWORD *)(v15 + 24));
                  v22 = v38;
                  v53 = v38;
                  v52 = v23;
                }
                v65 = v22 * (1.0 / sqrt(v34)) + v65;
                v59 = v48 + v59;
                v60 = v49 + v60;
                v61 = v50 + v61;
              }
            }
            v4 = v63;
            v8 = v51;
          }
          ++v62;
          v14 = v54 + 1;
          v54 = v14;
        }
        while ( v14 < *(_DWORD *)(v4 + 324) );
        if ( v64 > 0 )
        {
          v65 = v60 * v60 + v59 * v59 + v61 * v61;
          v24 = off_10689708(v65);
          v65 = v24 / (double)v64 * v65;
        }
      }
      v25 = *(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31F8 + 24);
      v65 = 0.0;
      v26 = v25(dword_106B31F8, "hltv_rank_entity");
      if ( v26 )
      {
        v27 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                dword_106B31D0,
                *(_DWORD *)(v8 + 24));
        (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v26 + 40))(v26, "index", v27);
        (*(void (__thiscall **)(int, const char *, float))(*(_DWORD *)v26 + 44))(
          v26,
          "rank",
          COERCE_FLOAT(LODWORD(v65)));
        (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v26 + 40))(v26, "target", v52);
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(dword_106B31F8, v26, 0);
      }
      result = v58 + 1;
      v58 = result;
      if ( result >= *(_DWORD *)(v63 + 324) )
        break;
      v4 = v63;
    }
  }
  return result;
}
