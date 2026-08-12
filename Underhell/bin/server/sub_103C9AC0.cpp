void __userpurge sub_103C9AC0(int a1@<ecx>, int a2@<ebp>, float *a3@<edi>, int a4@<esi>, int a5, int a6)
{
  int v7; // edi
  double v8; // st4
  double v9; // rt2
  double v10; // st7
  double (__thiscall *v11)(int, _DWORD, _DWORD); // eax
  double v12; // st7
  double (__thiscall *v13)(int, _DWORD, _DWORD); // eax
  double v14; // st7
  double v15; // st5
  double v16; // st2
  double v17; // rtt
  double v18; // st2
  int v19; // eax
  _DWORD *v22; // [esp+34h] [ebp-184h]
  _BYTE *v23; // [esp+38h] [ebp-180h]
  float v24; // [esp+3Ch] [ebp-17Ch] BYREF
  int v25; // [esp+48h] [ebp-170h] BYREF
  float v26[12]; // [esp+54h] [ebp-164h] BYREF
  __int16 v27; // [esp+84h] [ebp-134h]
  int v28; // [esp+88h] [ebp-130h]
  int v29; // [esp+8Ch] [ebp-12Ch]
  _BYTE v30[12]; // [esp+94h] [ebp-124h] BYREF
  float v31[13]; // [esp+A0h] [ebp-118h] BYREF
  float v32; // [esp+D4h] [ebp-E4h]
  float v33; // [esp+D8h] [ebp-E0h]
  __int16 v34; // [esp+DCh] [ebp-DCh]
  int v35; // [esp+E0h] [ebp-D8h]
  int v36; // [esp+E4h] [ebp-D4h]
  _DWORD v37[3]; // [esp+F0h] [ebp-C8h] BYREF
  float v38[16]; // [esp+FCh] [ebp-BCh] BYREF
  char v39; // [esp+13Ch] [ebp-7Ch]
  bool v40; // [esp+13Dh] [ebp-7Bh]
  float v41; // [esp+14Ch] [ebp-6Ch]
  float v42; // [esp+150h] [ebp-68h]
  float v43; // [esp+154h] [ebp-64h]
  float v44; // [esp+158h] [ebp-60h]
  float v45; // [esp+15Ch] [ebp-5Ch]
  float v46; // [esp+160h] [ebp-58h]
  float v47; // [esp+164h] [ebp-54h] BYREF
  float v48; // [esp+168h] [ebp-50h]
  float v49; // [esp+16Ch] [ebp-4Ch]
  float v50; // [esp+170h] [ebp-48h] BYREF
  float v51; // [esp+174h] [ebp-44h]
  float v52; // [esp+178h] [ebp-40h]
  float v53; // [esp+17Ch] [ebp-3Ch] BYREF
  float v54; // [esp+180h] [ebp-38h]
  float v55; // [esp+184h] [ebp-34h]
  float v56; // [esp+188h] [ebp-30h]
  float v57; // [esp+18Ch] [ebp-2Ch]
  float v58; // [esp+190h] [ebp-28h]
  int v59; // [esp+194h] [ebp-24h]
  float v60; // [esp+198h] [ebp-20h]
  float v61; // [esp+19Ch] [ebp-1Ch]
  float v62; // [esp+1A0h] [ebp-18h]
  float v63; // [esp+1A4h] [ebp-14h]
  unsigned __int8 v64; // [esp+1ABh] [ebp-Dh]
  int v65; // [esp+1ACh] [ebp-Ch]
  void *v66; // [esp+1B0h] [ebp-8h]
  void *retaddr; // [esp+1B8h] [ebp+0h]

  v65 = a2;
  v66 = retaddr;
  v60 = 1.0;
  v59 = 2 * (a6 != 0) - 1;
  sub_104222B0(a1 + 728, &v47, &v53, &v50);
  v7 = 3;
  v8 = (double)v59;
  *(float *)&v59 = v8;
  v61 = v50 * 36.0;
  v62 = v51 * 36.0;
  v63 = 36.0 * v52;
  v56 = *(float *)(a1 + 716) + v61;
  v57 = *(float *)(a1 + 720) + v62;
  v9 = v8 * v55 * 16.0 + *(float *)(a1 + 724) + v63;
  v56 = v47 * 32.0 + v53 * v8 * 16.0 + v56;
  v57 = v48 * 32.0 + v8 * v54 * 16.0 + v57;
  v58 = v9 + 32.0 * v49;
  do
  {
    v10 = ((double (__thiscall *)(int, _DWORD, _DWORD, float *, int, _DWORD *, _BYTE *))*(_DWORD *)(*(_DWORD *)dword_106B31E4
                                                                                                  + 4))(
            dword_106B31E4,
            -1.0,
            1.0,
            a3,
            a4,
            v22,
            v23);
    v11 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
    v41 = v50 * v10;
    v42 = v51 * v10;
    v43 = v10 * v52;
    v61 = v53 * *(float *)&v59;
    v62 = v54 * *(float *)&v59;
    v63 = *(float *)&v59 * v55;
    v12 = v11(dword_106B31E4, 0.0, 1.0);
    v13 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
    v44 = v61 * v12;
    v45 = v62 * v12;
    v46 = v12 * v63;
    v14 = v13(dword_106B31E4, -1.0, 1.0);
    v15 = (v14 * v49 + v46 + v43) * 120.0 + v58;
    v16 = (v47 * v14 + v44 + v41) * 120.0 + v56 - v56;
    v38[4] = v16;
    v17 = v16;
    v18 = (v48 * v14 + v45 + v42) * 120.0 + v57 - v57;
    v38[5] = v18;
    v38[6] = v15 - v58;
    v40 = 0.0 != (v15 - v58) * (v15 - v58) + v17 * v17 + v18 * v18;
    v38[14] = 0.0;
    v38[13] = 0.0;
    v38[12] = 0.0;
    v39 = 1;
    v38[10] = 0.0;
    v38[9] = 0.0;
    v38[8] = 0.0;
    v38[0] = v56;
    v38[1] = v57;
    v38[2] = v58;
    sub_10265570(v37, a1, 0);
    v23 = v30;
    v22 = v37;
    a4 = 33570827;
    a3 = v38;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B31F4 + 16))(dword_106B31F4);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0((int)v30, (int)v31, 255, 0, 0, 1, 5.0);
    if ( (BYTE2(v32) & 4) == 0 && v31[8] < (double)v60 )
    {
      sub_10079DC0(&v24, (int)v30);
      v26[8] = v31[11];
      v60 = v26[5];
      v26[9] = v31[12];
      v26[10] = v32;
      v26[11] = v33;
      v27 = v34;
      v28 = v35;
      v29 = v36;
    }
    --v7;
  }
  while ( v7 );
  if ( 1.0 != v60 )
  {
    if ( a6 )
      v64 = *(_BYTE *)(a1 + 5840);
    else
      v64 = *(_BYTE *)(a1 + 5836);
    sub_10154AF0((_DWORD *)a1, 1);
    sub_10154BB0(1);
    v19 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a1 + 24));
    sub_10154C40(v19);
    sub_10154BB0(v64);
    sub_10154CA0((int)&v25);
    sub_10154CD0((int)v26);
    sub_10154B90();
  }
}
