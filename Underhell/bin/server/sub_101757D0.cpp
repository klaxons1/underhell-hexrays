int __thiscall sub_101757D0(int this)
{
  int v2; // edx
  int result; // eax
  double v4; // st7
  int v5; // esi
  char *v6; // edi
  bool v7; // zf
  int v8; // ebx
  char *v9; // ebx
  int v10; // ebx
  char *v11; // ebx
  int v12; // ebx
  char *v13; // ebx
  int v14; // ebx
  char *v15; // ebx
  int v16; // ebx
  char *v17; // ebx
  int v18; // ebx
  char *v19; // ebx
  int v20; // ebx
  char *v21; // ebx
  int v22; // ebx
  char *v23; // ebx
  int v24; // ebx
  char *v25; // ebx
  int v26; // ebx
  char *v27; // ebx
  int v28; // ebx
  char *v29; // ebx
  int v30; // ebx
  char *v31; // ebx
  int v32; // ebx
  char *v33; // ebx
  int v34; // ebx
  char *v35; // ebx
  int v36; // ebx
  char *v37; // ebx
  int v38; // ebx
  char *v39; // ebx
  int v40; // ebx
  char *v41; // ebx
  int v42; // ebx
  char *v43; // ebx
  int v44; // ebx
  char *v45; // ebx
  int v46; // ebx
  char *v47; // ebx
  int v48; // ebx
  char *v49; // ebx
  int v50; // ebx
  char *v51; // ebx
  int v52; // ebx
  char *v53; // ebx
  int v54; // ebx
  char *v55; // ebx
  int v56; // ebx
  char *v57; // ebx
  int v58; // ebx
  char *v59; // ebx
  int v60; // eax
  int v61; // ebx
  int v62; // edi
  _DWORD *v63; // eax
  _DWORD *v64; // esi
  void *Src; // [esp+8h] [ebp-1Ch] BYREF
  int v66; // [esp+Ch] [ebp-18h]
  int v67; // [esp+10h] [ebp-14h]
  int v68; // [esp+14h] [ebp-10h]
  void *v69; // [esp+18h] [ebp-Ch]
  int v70; // [esp+1Ch] [ebp-8h] BYREF
  int v71; // [esp+20h] [ebp-4h]

  v71 = this;
  v2 = sub_10219A30() % 100;
  result = *(_DWORD *)(this + 884);
  v70 = result;
  switch ( *(_DWORD *)(dword_106B3E7C + 48) )
  {
    case 1:
      v4 = (double)v70 * *(float *)(dword_106B5CAC + 44);
      break;
    case 2:
      v4 = (double)v70 * *(float *)(dword_106B5CF4 + 44);
      break;
    case 3:
      v4 = (double)v70 * *(float *)(dword_106B5D3C + 44);
      break;
    default:
      goto LABEL_8;
  }
  result = (int)v4;
LABEL_8:
  if ( v2 + 1 > result )
  {
    v5 = 0;
    v6 = 0;
    v7 = *(_BYTE *)(this + 804) == 0;
    Src = 0;
    v66 = 0;
    v67 = 0;
    v68 = 0;
    v69 = 0;
    if ( !v7 )
    {
      sub_102ABFC0(1);
      v6 = (char *)Src;
      v5 = ++v68;
      v69 = Src;
    }
    if ( *(_BYTE *)(this + 810) )
    {
      v8 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v8 - 1 > 0 )
        memcpy(&v6[4 * v8 + 4], &v6[4 * v8], 4 * (v5 - v8 - 1));
      v9 = &v6[4 * v8];
      if ( v9 )
        *(_DWORD *)v9 = 2;
    }
    if ( *(_BYTE *)(v71 + 805) )
    {
      v10 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v10 - 1 > 0 )
        memcpy(&v6[4 * v10 + 4], &v6[4 * v10], 4 * (v5 - v10 - 1));
      v11 = &v6[4 * v10];
      if ( v11 )
        *(_DWORD *)v11 = 3;
    }
    if ( *(_BYTE *)(v71 + 806) )
    {
      v12 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v12 - 1 > 0 )
        memcpy(&v6[4 * v12 + 4], &v6[4 * v12], 4 * (v5 - v12 - 1));
      v13 = &v6[4 * v12];
      if ( v13 )
        *(_DWORD *)v13 = 4;
    }
    if ( *(_BYTE *)(v71 + 807) )
    {
      v14 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v14 - 1 > 0 )
        memcpy(&v6[4 * v14 + 4], &v6[4 * v14], 4 * (v5 - v14 - 1));
      v15 = &v6[4 * v14];
      if ( v15 )
        *(_DWORD *)v15 = 1;
    }
    if ( *(_BYTE *)(v71 + 808) )
    {
      v16 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v16 - 1 > 0 )
        memcpy(&v6[4 * v16 + 4], &v6[4 * v16], 4 * (v5 - v16 - 1));
      v17 = &v6[4 * v16];
      if ( v17 )
        *(_DWORD *)v17 = 5;
    }
    if ( *(_BYTE *)(v71 + 809) )
    {
      v18 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v18 - 1 > 0 )
        memcpy(&v6[4 * v18 + 4], &v6[4 * v18], 4 * (v5 - v18 - 1));
      v19 = &v6[4 * v18];
      if ( v19 )
        *(_DWORD *)v19 = 6;
    }
    if ( *(_BYTE *)(v71 + 811) )
    {
      v20 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v20 - 1 > 0 )
        memcpy(&v6[4 * v20 + 4], &v6[4 * v20], 4 * (v5 - v20 - 1));
      v21 = &v6[4 * v20];
      if ( v21 )
        *(_DWORD *)v21 = 7;
    }
    if ( *(_BYTE *)(v71 + 812) )
    {
      v22 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v22 - 1 > 0 )
        memcpy(&v6[4 * v22 + 4], &v6[4 * v22], 4 * (v5 - v22 - 1));
      v23 = &v6[4 * v22];
      if ( v23 )
        *(_DWORD *)v23 = 8;
    }
    if ( *(_BYTE *)(v71 + 813) )
    {
      v24 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v24 - 1 > 0 )
        memcpy(&v6[4 * v24 + 4], &v6[4 * v24], 4 * (v5 - v24 - 1));
      v25 = &v6[4 * v24];
      if ( v25 )
        *(_DWORD *)v25 = 9;
    }
    if ( *(_BYTE *)(v71 + 814) )
    {
      v26 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v26 - 1 > 0 )
        memcpy(&v6[4 * v26 + 4], &v6[4 * v26], 4 * (v5 - v26 - 1));
      v27 = &v6[4 * v26];
      if ( v27 )
        *(_DWORD *)v27 = 10;
    }
    if ( *(_BYTE *)(v71 + 815) )
    {
      v28 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v28 - 1 > 0 )
        memcpy(&v6[4 * v28 + 4], &v6[4 * v28], 4 * (v5 - v28 - 1));
      v29 = &v6[4 * v28];
      if ( v29 )
        *(_DWORD *)v29 = 11;
    }
    if ( *(_BYTE *)(v71 + 816) )
    {
      v30 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v30 - 1 > 0 )
        memcpy(&v6[4 * v30 + 4], &v6[4 * v30], 4 * (v5 - v30 - 1));
      v31 = &v6[4 * v30];
      if ( v31 )
        *(_DWORD *)v31 = 12;
    }
    if ( *(_BYTE *)(v71 + 817) )
    {
      v32 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v32 - 1 > 0 )
        memcpy(&v6[4 * v32 + 4], &v6[4 * v32], 4 * (v5 - v32 - 1));
      v33 = &v6[4 * v32];
      if ( v33 )
        *(_DWORD *)v33 = 13;
    }
    if ( *(_BYTE *)(v71 + 818) )
    {
      v34 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v34 - 1 > 0 )
        memcpy(&v6[4 * v34 + 4], &v6[4 * v34], 4 * (v5 - v34 - 1));
      v35 = &v6[4 * v34];
      if ( v35 )
        *(_DWORD *)v35 = 14;
    }
    if ( *(_BYTE *)(v71 + 819) )
    {
      v36 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v36 - 1 > 0 )
        memcpy(&v6[4 * v36 + 4], &v6[4 * v36], 4 * (v5 - v36 - 1));
      v37 = &v6[4 * v36];
      if ( v37 )
        *(_DWORD *)v37 = 15;
    }
    if ( *(_BYTE *)(v71 + 820) )
    {
      v38 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v38 - 1 > 0 )
        memcpy(&v6[4 * v38 + 4], &v6[4 * v38], 4 * (v5 - v38 - 1));
      v39 = &v6[4 * v38];
      if ( v39 )
        *(_DWORD *)v39 = 16;
    }
    if ( *(_BYTE *)(v71 + 821) )
    {
      v40 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v40 - 1 > 0 )
        memcpy(&v6[4 * v40 + 4], &v6[4 * v40], 4 * (v5 - v40 - 1));
      v41 = &v6[4 * v40];
      if ( v41 )
        *(_DWORD *)v41 = 17;
    }
    if ( *(_BYTE *)(v71 + 822) )
    {
      v42 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v42 - 1 > 0 )
        memcpy(&v6[4 * v42 + 4], &v6[4 * v42], 4 * (v5 - v42 - 1));
      v43 = &v6[4 * v42];
      if ( v43 )
        *(_DWORD *)v43 = 18;
    }
    if ( *(_BYTE *)(v71 + 823) )
    {
      v44 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v44 - 1 > 0 )
        memcpy(&v6[4 * v44 + 4], &v6[4 * v44], 4 * (v5 - v44 - 1));
      v45 = &v6[4 * v44];
      if ( v45 )
        *(_DWORD *)v45 = 19;
    }
    if ( *(_BYTE *)(v71 + 824) )
    {
      v46 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v46 - 1 > 0 )
        memcpy(&v6[4 * v46 + 4], &v6[4 * v46], 4 * (v5 - v46 - 1));
      v47 = &v6[4 * v46];
      if ( v47 )
        *(_DWORD *)v47 = 20;
    }
    if ( *(_BYTE *)(v71 + 825) )
    {
      v48 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v48 - 1 > 0 )
        memcpy(&v6[4 * v48 + 4], &v6[4 * v48], 4 * (v5 - v48 - 1));
      v49 = &v6[4 * v48];
      if ( v49 )
        *(_DWORD *)v49 = 21;
    }
    if ( *(_BYTE *)(v71 + 826) )
    {
      v50 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v50 - 1 > 0 )
        memcpy(&v6[4 * v50 + 4], &v6[4 * v50], 4 * (v5 - v50 - 1));
      v51 = &v6[4 * v50];
      if ( v51 )
        *(_DWORD *)v51 = 22;
    }
    if ( *(_BYTE *)(v71 + 829) )
    {
      v52 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v52 - 1 > 0 )
        memcpy(&v6[4 * v52 + 4], &v6[4 * v52], 4 * (v5 - v52 - 1));
      v53 = &v6[4 * v52];
      if ( v53 )
        *(_DWORD *)v53 = 23;
    }
    if ( *(_BYTE *)(v71 + 830) )
    {
      v54 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v54 - 1 > 0 )
        memcpy(&v6[4 * v54 + 4], &v6[4 * v54], 4 * (v5 - v54 - 1));
      v55 = &v6[4 * v54];
      if ( v55 )
        *(_DWORD *)v55 = 24;
    }
    if ( *(_BYTE *)(v71 + 831) )
    {
      v56 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v56 - 1 > 0 )
        memcpy(&v6[4 * v56 + 4], &v6[4 * v56], 4 * (v5 - v56 - 1));
      v57 = &v6[4 * v56];
      if ( v57 )
        *(_DWORD *)v57 = 25;
    }
    if ( *(_BYTE *)(v71 + 827) )
    {
      v58 = v5;
      if ( v5 + 1 > v66 )
      {
        sub_102ABFC0(v5 - v66 + 1);
        v5 = v68;
        v6 = (char *)Src;
      }
      v68 = ++v5;
      v69 = v6;
      if ( v5 - v58 - 1 > 0 )
        memcpy(&v6[4 * v58 + 4], &v6[4 * v58], 4 * (v5 - v58 - 1));
      v59 = &v6[4 * v58];
      if ( v59 )
        *(_DWORD *)v59 = 75;
    }
    if ( *(_BYTE *)(v71 + 828) )
    {
      v70 = 76;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 832) )
    {
      v70 = 26;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 833) )
    {
      v70 = 27;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 834) )
    {
      v70 = 28;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 835) )
    {
      v70 = 29;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 836) )
    {
      v70 = 30;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 837) )
    {
      v70 = 31;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 838) )
    {
      v70 = 32;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 839) )
    {
      v70 = 33;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 840) )
    {
      v70 = 34;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 841) )
    {
      v70 = 35;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 842) )
    {
      v70 = 36;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 843) )
    {
      v70 = 37;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 844) )
    {
      v70 = 38;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 845) )
    {
      v70 = 39;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 846) )
    {
      v70 = 40;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 847) )
    {
      v70 = 41;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 848) )
    {
      v70 = 42;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 849) )
    {
      v70 = 43;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 857) )
    {
      v70 = 51;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 858) )
    {
      v70 = 52;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 859) )
    {
      v70 = 53;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 860) )
    {
      v70 = 54;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 861) )
    {
      v70 = 55;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 862) )
    {
      v70 = 56;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 863) )
    {
      v70 = 57;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 864) )
    {
      v70 = 58;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 865) )
    {
      v70 = 59;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 866) )
    {
      v70 = 60;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 867) )
    {
      v70 = 61;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 868) )
    {
      v70 = 62;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 869) )
    {
      v70 = 63;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 870) )
    {
      v70 = 64;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 871) )
    {
      v70 = 65;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 872) )
    {
      v70 = 66;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 873) )
    {
      v70 = 67;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 874) )
    {
      v70 = 68;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 875) )
    {
      v70 = 69;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 876) )
    {
      v70 = 70;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 877) )
    {
      v70 = 71;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 878) )
    {
      v70 = 72;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 879) )
    {
      v70 = 73;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( *(_BYTE *)(v71 + 880) )
    {
      v70 = 74;
      sub_10194990(v5, &v70);
      v5 = v68;
      v6 = (char *)Src;
    }
    if ( v5 )
    {
      v60 = sub_10219A30();
      v61 = v71;
      v62 = *(_DWORD *)&v6[4 * (v60 % v5)];
      *(_DWORD *)(v71 + 800) = v62;
      switch ( v62 )
      {
        case 0:
          v63 = (_DWORD *)sub_101811E0("item_chocobar", -1);
          goto LABEL_361;
        case 1:
          v63 = (_DWORD *)sub_101811E0("item_orange", -1);
          goto LABEL_361;
        case 2:
          v63 = (_DWORD *)sub_101811E0("item_burrito", -1);
          goto LABEL_361;
        case 3:
          v63 = (_DWORD *)sub_101811E0("item_sandwich", -1);
          goto LABEL_361;
        case 4:
          v63 = (_DWORD *)sub_101811E0("item_apple", -1);
          goto LABEL_361;
        case 5:
          v63 = (_DWORD *)sub_101811E0("item_banana", -1);
          goto LABEL_361;
        case 6:
          v63 = (_DWORD *)sub_101811E0("item_bananabunch", -1);
          goto LABEL_361;
        case 7:
          v63 = (_DWORD *)sub_101811E0("item_uhsoda", -1);
          goto LABEL_361;
        case 8:
          v63 = (_DWORD *)sub_101811E0("item_flarepack", -1);
          goto LABEL_361;
        case 9:
          v63 = (_DWORD *)sub_101811E0("item_glowstick", -1);
          goto LABEL_361;
        case 10:
          v63 = (_DWORD *)sub_101811E0("item_painkillers", -1);
          goto LABEL_361;
        case 11:
          v63 = (_DWORD *)sub_101811E0("item_syringe", -1);
          goto LABEL_361;
        case 12:
          v63 = (_DWORD *)sub_101811E0("item_syringepack", -1);
          goto LABEL_361;
        case 13:
          v63 = (_DWORD *)sub_101811E0("item_bandages", -1);
          goto LABEL_361;
        case 14:
          v63 = (_DWORD *)sub_101811E0("item_bandagespack", -1);
          goto LABEL_361;
        case 15:
          v63 = (_DWORD *)sub_101811E0("item_armor", -1);
          goto LABEL_361;
        case 16:
          v63 = (_DWORD *)sub_101811E0("item_heavyarmor", -1);
          goto LABEL_361;
        case 17:
          v63 = (_DWORD *)sub_101811E0("item_battery", -1);
          goto LABEL_361;
        case 18:
          v63 = (_DWORD *)sub_101811E0("item_battery_pack", -1);
          goto LABEL_361;
        case 19:
          v63 = (_DWORD *)sub_101811E0("item_healthkit", -1);
          goto LABEL_361;
        case 20:
          v63 = (_DWORD *)sub_101811E0("item_healthvial", -1);
          goto LABEL_361;
        case 21:
          v63 = (_DWORD *)sub_101811E0("item_nightvision", -1);
          goto LABEL_361;
        case 22:
          v63 = (_DWORD *)sub_101811E0("item_flashlight", -1);
          goto LABEL_361;
        case 23:
          v63 = (_DWORD *)sub_101811E0("item_helmet_prison", -1);
          goto LABEL_361;
        case 24:
          v63 = (_DWORD *)sub_101811E0("item_helmet_guard", -1);
          goto LABEL_361;
        case 25:
          v63 = (_DWORD *)sub_101811E0("item_helmet_worker", -1);
          goto LABEL_361;
        case 26:
          v63 = (_DWORD *)sub_101811E0("item_ammo_357", -1);
          goto LABEL_361;
        case 27:
          v63 = (_DWORD *)sub_101811E0("item_ammo_357_large", -1);
          goto LABEL_361;
        case 28:
          v63 = (_DWORD *)sub_101811E0("item_ammo_ar2", -1);
          goto LABEL_361;
        case 29:
          v63 = (_DWORD *)sub_101811E0("item_ammo_ar2_altfire", -1);
          goto LABEL_361;
        case 30:
          v63 = (_DWORD *)sub_101811E0("item_ammo_ar2_large", -1);
          goto LABEL_361;
        case 31:
          v63 = (_DWORD *)sub_101811E0("item_ammo_crossbow", -1);
          goto LABEL_361;
        case 32:
          v63 = (_DWORD *)sub_101811E0("item_ammo_pistol", -1);
          goto LABEL_361;
        case 33:
          v63 = (_DWORD *)sub_101811E0("item_ammo_pistol_large", -1);
          goto LABEL_361;
        case 34:
          v63 = (_DWORD *)sub_101811E0("item_ammo_smg1", -1);
          goto LABEL_361;
        case 35:
          v63 = (_DWORD *)sub_101811E0("item_ammo_smg1_grenade", -1);
          goto LABEL_361;
        case 36:
          v63 = (_DWORD *)sub_101811E0("item_ammo_smg1_large", -1);
          goto LABEL_361;
        case 37:
          v63 = (_DWORD *)sub_101811E0("item_box_buckshot", -1);
          goto LABEL_361;
        case 38:
          v63 = (_DWORD *)sub_101811E0("item_box_357_ammo", -1);
          goto LABEL_361;
        case 39:
          v63 = (_DWORD *)sub_101811E0("item_box_pistol_ammo", -1);
          goto LABEL_361;
        case 40:
          v63 = (_DWORD *)sub_101811E0("item_box_smg1_ammo", -1);
          goto LABEL_361;
        case 41:
          v63 = (_DWORD *)sub_101811E0("item_box_rifle_ammo", -1);
          goto LABEL_361;
        case 42:
          v63 = (_DWORD *)sub_101811E0("item_ammo_buckshot", -1);
          goto LABEL_361;
        case 43:
          v63 = (_DWORD *)sub_101811E0("item_rpg_round", -1);
          goto LABEL_361;
        case 44:
          v63 = (_DWORD *)sub_101811E0("weapon_physcannon", -1);
          goto LABEL_361;
        case 45:
          v63 = (_DWORD *)sub_101811E0("weapon_crowbar", -1);
          goto LABEL_361;
        case 46:
          v63 = (_DWORD *)sub_101811E0("weapon_wrench", -1);
          goto LABEL_361;
        case 47:
          v63 = (_DWORD *)sub_101811E0("weapon_pipe", -1);
          goto LABEL_361;
        case 48:
          v63 = (_DWORD *)sub_101811E0("weapon_axe", -1);
          goto LABEL_361;
        case 49:
          v63 = (_DWORD *)sub_101811E0("weapon_hammer", -1);
          goto LABEL_361;
        case 50:
          v63 = (_DWORD *)sub_101811E0("weapon_shiv", -1);
          goto LABEL_361;
        case 51:
          v63 = (_DWORD *)sub_101811E0("weapon_pistol", -1);
          goto LABEL_361;
        case 52:
          v63 = (_DWORD *)sub_101811E0("weapon_pistol_glock", -1);
          goto LABEL_361;
        case 53:
          v63 = (_DWORD *)sub_101811E0("weapon_pistol_socom", -1);
          goto LABEL_361;
        case 54:
          v63 = (_DWORD *)sub_101811E0("weapon_pistol_beretta", -1);
          goto LABEL_361;
        case 55:
          v63 = (_DWORD *)sub_101811E0("weapon_pistol_dualberetta", -1);
          goto LABEL_361;
        case 56:
          v63 = (_DWORD *)sub_101811E0("weapon_pistol_python", -1);
          goto LABEL_361;
        case 57:
          v63 = (_DWORD *)sub_101811E0("weapon_357", -1);
          goto LABEL_361;
        case 58:
          v63 = (_DWORD *)sub_101811E0("weapon_smg1", -1);
          goto LABEL_361;
        case 59:
          v63 = (_DWORD *)sub_101811E0("weapon_smg_mp5", -1);
          goto LABEL_361;
        case 60:
          v63 = (_DWORD *)sub_101811E0("weapon_smg_mp5_eod", -1);
          goto LABEL_361;
        case 61:
          v63 = (_DWORD *)sub_101811E0("weapon_smg_mp7", -1);
          goto LABEL_361;
        case 62:
          v63 = (_DWORD *)sub_101811E0("weapon_shotgun", -1);
          goto LABEL_361;
        case 63:
          v63 = (_DWORD *)sub_101811E0("weapon_shotgun_spas12", -1);
          goto LABEL_361;
        case 64:
          v63 = (_DWORD *)sub_101811E0("weapon_shotgun_m3", -1);
          goto LABEL_361;
        case 65:
          v63 = (_DWORD *)sub_101811E0("weapon_shotgun_m5", -1);
          goto LABEL_361;
        case 66:
          v63 = (_DWORD *)sub_101811E0("weapon_shotgun_xm1014", -1);
          goto LABEL_361;
        case 67:
          v63 = (_DWORD *)sub_101811E0("weapon_ar2", -1);
          goto LABEL_361;
        case 68:
          v63 = (_DWORD *)sub_101811E0("weapon_rifle_g36k", -1);
          goto LABEL_361;
        case 69:
          v63 = (_DWORD *)sub_101811E0("weapon_rifle_sniper", -1);
          goto LABEL_361;
        case 70:
          v63 = (_DWORD *)sub_101811E0("weapon_crossbow", -1);
          goto LABEL_361;
        case 71:
          v63 = (_DWORD *)sub_101811E0("weapon_bfg_mgl", -1);
          goto LABEL_361;
        case 72:
          v63 = (_DWORD *)sub_101811E0("weapon_rpg", -1);
          goto LABEL_361;
        case 73:
          v63 = (_DWORD *)sub_101811E0("weapon_bfg_minigun", -1);
          goto LABEL_361;
        case 74:
          v63 = (_DWORD *)sub_101811E0("weapon_frag", -1);
          goto LABEL_361;
        case 75:
          v63 = (_DWORD *)sub_101811E0("item_fmradio", -1);
          goto LABEL_361;
        case 76:
          v63 = (_DWORD *)sub_101811E0("item_radiocracker", -1);
LABEL_361:
          v64 = v63;
          if ( v63 )
          {
            v63[65] = *(_DWORD *)(v61 + 260);
            if ( (*(_DWORD *)(v61 + 252) & 0x800) != 0 )
              sub_100DAE60(v61);
            sub_100E0D20((int)v64, (float *)(v61 + 580));
            if ( (*(_DWORD *)(v61 + 252) & 0x800) != 0 )
              sub_100DAE60(v61);
            sub_100E0EA0((int)v64, (float *)(v61 + 704));
            if ( (*(_DWORD *)(v61 + 192) & 0x10) != 0 )
              sub_100EAB80(v64, 16);
            (*(void (__thiscall **)(_DWORD *))(*v64 + 96))(v64);
            sub_10019680((_DWORD *)(v61 + 892), (int)v64);
          }
          break;
        default:
          break;
      }
      if ( !*(_BYTE *)(v61 + 888) )
        sub_1025FAC0(v61);
      return sub_102375F0(&Src);
    }
    else
    {
      Msg("item_random item possibilites count is 0\n");
      return sub_102375F0(&Src);
    }
  }
  else if ( !*(_BYTE *)(this + 888) )
  {
    return sub_1025FAC0(this);
  }
  return result;
}
