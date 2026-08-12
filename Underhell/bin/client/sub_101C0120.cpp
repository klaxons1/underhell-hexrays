void __cdecl sub_101C0120(int a1, int a2, int a3, int a4)
{
  int v5; // edi
  int v6; // esi
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  double v11; // st5
  double v12; // st4
  double v13; // st6
  int v14; // edx
  double v15; // st5
  double v16; // st6
  int v17; // edx
  double v18; // st5
  double v19; // st6
  int v20; // edx
  double v21; // st5
  double v22; // st6
  int v23; // edx
  float *v24; // eax
  double v25; // st5
  double v26; // st4
  double v27; // st6
  int v28; // edx
  int v29; // eax
  float *v30; // esi
  _BYTE *v31; // edi
  int v32; // ebx
  int v33; // eax
  bool v34; // zf
  int v35; // [esp+14h] [ebp-24h]
  int v36; // [esp+14h] [ebp-24h]
  int v37; // [esp+18h] [ebp-20h]
  int v38; // [esp+18h] [ebp-20h]
  _DWORD v39[2]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v40; // [esp+24h] [ebp-14h]
  float v41[4]; // [esp+28h] [ebp-10h] BYREF
  int v42; // [esp+44h] [ebp+Ch]
  int v43; // [esp+44h] [ebp+Ch]
  _BYTE *v44; // [esp+48h] [ebp+10h]

  v5 = a4;
  v6 = 0;
  v7 = sub_100DDA40((unsigned __int64)(unsigned int)(4 * a4 * a3) >> 30 != 0 ? -1 : 16 * a4 * a3);
  v8 = a3;
  v40 = v7;
  v39[0] = a3;
  v39[1] = a4;
  if ( a4 > 0 )
  {
    v37 = 12 * a3;
    v9 = a1 + 20;
    v42 = 0;
    v35 = a1 + 20;
    do
    {
      v10 = 0;
      if ( a3 >= 4 )
      {
        do
        {
          v11 = *(float *)(v9 - 16);
          v12 = *(float *)(v9 - 20);
          v13 = *(float *)(v9 - 12);
          v14 = 4 * (v10 + v6 * v8);
          v9 += 48;
          *(float *)(v40 + 4 * v14) = v12;
          *(float *)(v40 + 4 * v14 + 4) = v11;
          *(float *)(v40 + 4 * v14 + 8) = v13;
          *(float *)(v40 + 4 * v14 + 12) = 0.0;
          v15 = *(float *)(v9 - 52);
          v16 = *(float *)(v9 - 48);
          v17 = 4 * (v10 + v6 * v39[0]) + 4;
          *(float *)(v40 + 4 * v17) = *(float *)(v9 - 56);
          *(float *)(v40 + 4 * v17 + 4) = v15;
          *(float *)(v40 + 4 * v17 + 8) = v16;
          *(float *)(v40 + 4 * v17 + 12) = 0.0;
          v18 = *(float *)(v9 - 40);
          v19 = *(float *)(v9 - 36);
          v20 = 4 * (v10 + v6 * v39[0]) + 8;
          *(float *)(v40 + 4 * v20) = *(float *)(v9 - 44);
          *(float *)(v40 + 4 * v20 + 4) = v18;
          *(float *)(v40 + 4 * v20 + 8) = v19;
          *(float *)(v40 + 4 * v20 + 12) = 0.0;
          v21 = *(float *)(v9 - 28);
          v22 = *(float *)(v9 - 24);
          v23 = 4 * (v10 + v6 * v39[0]) + 12;
          v10 += 4;
          *(float *)(v40 + 4 * v23) = *(float *)(v9 - 32);
          *(float *)(v40 + 4 * v23 + 4) = v21;
          *(float *)(v40 + 4 * v23 + 8) = v22;
          *(float *)(v40 + 4 * v23 + 12) = 0.0;
          v8 = v39[0];
        }
        while ( v10 < a3 - 3 );
        v5 = a4;
      }
      if ( v10 < a3 )
      {
        v24 = (float *)(a1 + 12 * (v10 + v42) + 8);
        do
        {
          v25 = *(v24 - 1);
          v26 = *(v24 - 2);
          v27 = *v24;
          v28 = 4 * (v10 + v6 * v8);
          ++v10;
          v24 += 3;
          *(float *)(v40 + 4 * v28) = v26;
          *(float *)(v40 + 4 * v28 + 4) = v25;
          *(float *)(v40 + 4 * v28 + 8) = v27;
          *(float *)(v40 + 4 * v28 + 12) = 0.0;
          v8 = v39[0];
        }
        while ( v10 < a3 );
      }
      v9 = v37 + v35;
      v42 += a3;
      ++v6;
      v35 += v37;
    }
    while ( v6 < v5 );
  }
  sub_101C6070(8.0);
  if ( v5 > 0 )
  {
    v29 = 16 * v39[0];
    v30 = (float *)(v40 + 8);
    v38 = 16 * v39[0];
    v43 = v40 + 8;
    v44 = (_BYTE *)(a2 + 2);
    v36 = v5;
    do
    {
      if ( a3 > 0 )
      {
        v31 = v44;
        v32 = a3;
        do
        {
          v41[0] = *(v30 - 2);
          v41[1] = *(v30 - 1);
          v41[2] = *v30;
          v41[3] = v30[1];
          v33 = sub_101BF590(v41);
          *v31 = v33;
          *(v31 - 2) = BYTE2(v33);
          *(v31 - 1) = BYTE1(v33);
          v31[1] = HIBYTE(v33);
          v30 += 4;
          v31 += 4;
          --v32;
        }
        while ( v32 );
        v29 = v38;
      }
      v44 += 4 * a3;
      v30 = (float *)(v29 + v43);
      v34 = v36-- == 1;
      v43 += v29;
    }
    while ( !v34 );
  }
  Concurrency::details::TaskStack::~TaskStack((Concurrency::details::TaskStack *)v39);
}
