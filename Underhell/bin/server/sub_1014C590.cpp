void __userpurge sub_1014C590(int a1@<ecx>, int a2@<ebx>, int a3)
{
  int v4; // edi
  double v5; // st4
  double v6; // st1
  double v7; // rt2
  double v8; // st4
  double v9; // st1
  double v10; // st3
  double v11; // st7
  double v12; // st5
  double v13; // st7
  double v14; // st5
  double v15; // st4
  double v16; // st7
  double v17; // st5
  double v18; // st7
  double v19; // st5
  double v20; // st4
  bool v21; // zf
  int v22; // ebx
  int i; // edi
  float v24; // [esp+8h] [ebp-60h]
  float v26; // [esp+14h] [ebp-54h] BYREF
  float v27; // [esp+18h] [ebp-50h]
  float v28; // [esp+1Ch] [ebp-4Ch]
  float v29; // [esp+20h] [ebp-48h] BYREF
  float v30; // [esp+24h] [ebp-44h]
  float v31; // [esp+28h] [ebp-40h]
  float v32; // [esp+2Ch] [ebp-3Ch] BYREF
  float v33; // [esp+30h] [ebp-38h]
  float v34; // [esp+34h] [ebp-34h]
  int v35; // [esp+38h] [ebp-30h] BYREF
  float v36; // [esp+3Ch] [ebp-2Ch]
  float v37; // [esp+40h] [ebp-28h]
  int v38; // [esp+44h] [ebp-24h]
  int v39; // [esp+48h] [ebp-20h] BYREF
  float v40; // [esp+4Ch] [ebp-1Ch] BYREF
  int v41; // [esp+50h] [ebp-18h] BYREF
  float v42; // [esp+54h] [ebp-14h] BYREF
  int v43; // [esp+58h] [ebp-10h]
  float v44; // [esp+5Ch] [ebp-Ch]
  int v45; // [esp+60h] [ebp-8h]
  int v46; // [esp+64h] [ebp-4h]

  v4 = a3;
  if ( *(_DWORD *)(a1 + 1020) != 1
    || ((*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)a3 + 540))(a3, &v26, 0),
        v24 = v27 * v27 + v26 * v26 + v28 * v28,
        off_10689708(v24) >= 500.0) )
  {
    sub_10111910((_BYTE *)(a3 + 320), (float *)(a3 + 328), (float *)(a3 + 340), &v32, &v29);
    v5 = (v30 - *(float *)(a1 + 1008)) * *(float *)(a1 + 996)
       + (v29 - *(float *)(a1 + 1004)) * *(float *)(a1 + 992)
       + (v31 - *(float *)(a1 + 1012)) * *(float *)(a1 + 1000);
    v6 = *(float *)(a1 + 1000);
    v7 = *(float *)(a1 + 996) * v5;
    v26 = v29 + *(float *)(a1 + 992) * v5;
    v27 = v30 + v7;
    v28 = v5 * v6 + v31;
    sub_1014B360((float *)a1, &v26, (float *)&v41, (float *)&v39);
    v8 = (v34 - *(float *)(a1 + 1012)) * *(float *)(a1 + 1000)
       + (v32 - *(float *)(a1 + 1004)) * *(float *)(a1 + 992)
       + (v33 - *(float *)(a1 + 1008)) * *(float *)(a1 + 996);
    v9 = *(float *)(a1 + 1000);
    v10 = *(float *)(a1 + 996) * v8;
    v26 = v32 + *(float *)(a1 + 992) * v8;
    v27 = v33 + v10;
    v28 = v34 + v8 * v9;
    sub_1014B360((float *)a1, &v26, &v42, &v40);
    v11 = v42;
    if ( *(float *)&v41 >= (double)v42 )
      v12 = v42;
    else
      v12 = *(float *)&v41;
    if ( v12 >= 0.0 )
    {
      if ( *(float *)&v41 < v11 )
        v11 = *(float *)&v41;
    }
    else
    {
      v11 = 0.0;
    }
    *(float *)&v45 = v11;
    v43 = LOBYTE(v44) | 0x400;
    v46 = (int)*(float *)&v45;
    v13 = v42;
    if ( *(float *)&v41 <= (double)v42 )
      v14 = v42;
    else
      v14 = *(float *)&v41;
    v15 = (double)*(int *)(a1 + 976);
    if ( v15 >= v14 )
    {
      if ( *(float *)&v41 > v13 )
        v13 = *(float *)&v41;
    }
    else
    {
      v13 = v15;
    }
    v44 = v13;
    v41 = LOBYTE(v42) | 0x800;
    v45 = (int)v44;
    v16 = v40;
    if ( *(float *)&v39 >= (double)v40 )
      v17 = v40;
    else
      v17 = *(float *)&v39;
    if ( v17 >= 0.0 )
    {
      if ( *(float *)&v39 < v16 )
        v16 = *(float *)&v39;
    }
    else
    {
      v16 = 0.0;
    }
    v44 = v16;
    v41 = LOBYTE(v42) | 0x400;
    v38 = (int)v44;
    v18 = v40;
    if ( *(float *)&v39 <= (double)v40 )
      v19 = v40;
    else
      v19 = *(float *)&v39;
    v20 = (double)*(int *)(a1 + 980);
    if ( v20 >= v19 )
    {
      if ( *(float *)&v39 > v18 )
        v18 = *(float *)&v39;
    }
    else
    {
      v18 = v20;
    }
    v44 = v18;
    v39 = LOBYTE(v40) | 0x800;
    v43 = (int)v44;
    (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)a3 + 540))(a3, &v35, 0);
    v21 = *(_BYTE *)(a1 + 1016) == 0;
    *(float *)&v35 = *(float *)&v35 * 5.0;
    v36 = v36 * 5.0;
    v37 = 5.0 * v37;
    if ( v21 )
      sub_1014C960(a1, a3, (int)&v35);
    v22 = v38;
    if ( v38 < v43 )
    {
      while ( 1 )
      {
        if ( (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1, a2) )
          sub_1014C280(a1, v46 - 1, v22, (float *)&v35, v4 + 716);
        for ( i = v46; i < v45; ++i )
          sub_1014C280(a1, i, v22, (float *)&v35, a3 + 716);
        a2 = 1;
        if ( (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0) )
          sub_1014C280(a1, v45 + 1, v22, (float *)&v35, a3 + 716);
        if ( ++v22 >= v43 )
          break;
        v4 = a3;
      }
    }
  }
}
