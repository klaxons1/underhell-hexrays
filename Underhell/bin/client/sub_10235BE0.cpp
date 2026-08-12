int __thiscall sub_10235BE0(unsigned __int16 *this, float *a2, int a3, float *a4)
{
  int v5; // eax
  int v6; // ebx
  int v7; // ebp
  int i; // edi
  int v9; // eax
  double v10; // st6
  int v11; // eax
  float *v12; // ebp
  float *v13; // edi
  float *v14; // esi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int result; // eax
  int v20; // [esp+14h] [ebp-F38h]
  int v21; // [esp+28h] [ebp-F24h]
  int v22; // [esp+28h] [ebp-F24h]
  int v23; // [esp+28h] [ebp-F24h]
  int v24[2]; // [esp+2Ch] [ebp-F20h] BYREF
  int v25; // [esp+34h] [ebp-F18h]
  int v26; // [esp+38h] [ebp-F14h]
  int v27; // [esp+3Ch] [ebp-F10h]
  int v28; // [esp+40h] [ebp-F0Ch]
  int v29; // [esp+44h] [ebp-F08h]
  int v30; // [esp+58h] [ebp-EF4h]
  int v31; // [esp+5Ch] [ebp-EF0h]
  int v32; // [esp+60h] [ebp-EECh]
  int v33; // [esp+64h] [ebp-EE8h]
  int v34; // [esp+68h] [ebp-EE4h]
  int v35; // [esp+6Ch] [ebp-EE0h]
  int v36; // [esp+70h] [ebp-EDCh]
  int v37; // [esp+74h] [ebp-ED8h]
  int v38; // [esp+78h] [ebp-ED4h]
  int v39; // [esp+7Ch] [ebp-ED0h]
  int v40; // [esp+80h] [ebp-ECCh]
  int v41; // [esp+8Ch] [ebp-EC0h] BYREF
  int v42; // [esp+90h] [ebp-EBCh]
  int v43; // [esp+94h] [ebp-EB8h]
  int v44; // [esp+9Ch] [ebp-EB0h]
  float v45[12]; // [esp+BCh] [ebp-E90h] BYREF
  float v46[24]; // [esp+ECh] [ebp-E60h] BYREF
  _BYTE v47[1536]; // [esp+14Ch] [ebp-E00h] BYREF
  float v48[512]; // [esp+74Ch] [ebp-800h] BYREF

  v20 = dword_1047CA88;
  v5 = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_1047CA88 + 40))(*this);
  sub_101288D0((int)v24, v5, v20);
  v6 = 0;
  v7 = sub_10126D90(v24);
  for ( i = 0; i < 24; ++i )
  {
    v46[i] = 0.5;
    if ( i < v7 )
    {
      v9 = sub_10127A80((char *)v24, i);
      if ( *(float *)(v9 + 8) < 0.0 && *(float *)(v9 + 12) > 0.0 )
        v46[i] = -1.0 / (*(float *)(v9 + 12) - *(float *)(v9 + 8)) * *(float *)(v9 + 8);
    }
  }
  v21 = sub_1001DB80((int)v24, *((_DWORD *)this + 4), (int)v46);
  if ( !v21 )
    v21 = 1;
  v10 = *((float *)this + 6) * *((float *)this + 7) / (double)v21;
  *(float *)&v22 = v10 - (double)(int)v10;
  sub_1001F9A0((int)v24, (int)v47, v48, (1024 << *((_DWORD *)this + 5)) | 0x40300);
  sub_10024510(
    v7,
    v24,
    0,
    (int)v47,
    v48,
    *((_DWORD *)this + 4),
    v22,
    (int)v46,
    (1024 << *((_DWORD *)this + 5)) | 0x40300,
    1.0,
    *((float *)this + 7));
  v11 = a3;
  if ( a3 > *(_DWORD *)(v24[0] + 156) )
    v11 = *(_DWORD *)(v24[0] + 156);
  if ( v11 > 0 )
  {
    v12 = a4;
    v13 = (float *)v47;
    v14 = v48;
    v23 = v11;
    do
    {
      sub_101EED90(v14, v45);
      sub_101EDA20(v13, 3, (int)v45);
      v15 = *(_DWORD *)(v6 + *(_DWORD *)(v24[0] + 160) + v24[0] + 4);
      if ( v15 == -1 )
        sub_101EDC00(a2, v45, v12);
      else
        sub_101EDC00(&a4[12 * v15], v45, v12);
      v14 += 4;
      v13 += 3;
      v12 += 12;
      v6 += 216;
      --v23;
    }
    while ( v23 );
  }
  nullsub_4();
  if ( v40 )
    sub_10034930(v40);
  sub_100F9890(&v41);
  sub_100F9B70(&v41);
  v16 = v41;
  if ( v43 >= 0 )
  {
    if ( v41 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v41);
      v16 = 0;
      v41 = 0;
    }
    v42 = 0;
  }
  v44 = v16;
  if ( v43 >= 0 )
  {
    if ( v16 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v16);
      v41 = 0;
    }
    v42 = 0;
  }
  v17 = v35;
  v38 = 0;
  if ( v37 >= 0 )
  {
    if ( v35 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v35);
      v17 = 0;
      v35 = 0;
    }
    v36 = 0;
  }
  v39 = v17;
  if ( v37 >= 0 )
  {
    if ( v17 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v17);
      v35 = 0;
    }
    v36 = 0;
  }
  v18 = v30;
  v33 = 0;
  if ( v32 >= 0 )
  {
    if ( v30 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v30);
      v18 = 0;
      v30 = 0;
    }
    v31 = 0;
  }
  v34 = v18;
  if ( v32 >= 0 )
  {
    if ( v18 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v18);
      v30 = 0;
    }
    v31 = 0;
  }
  result = v25;
  v28 = 0;
  if ( v27 >= 0 )
  {
    if ( v25 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v25);
      result = 0;
      v25 = 0;
    }
    v26 = 0;
  }
  v29 = result;
  if ( v27 >= 0 )
  {
    if ( result )
      return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
  }
  return result;
}
