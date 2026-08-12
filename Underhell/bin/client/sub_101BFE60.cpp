void __cdecl sub_101BFE60(int a1, int a2, int a3, int a4)
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
  int v31; // edi
  int v32; // ebx
  bool v33; // zf
  int v34; // [esp+14h] [ebp-24h]
  int v35; // [esp+14h] [ebp-24h]
  int v36; // [esp+18h] [ebp-20h]
  int v37; // [esp+18h] [ebp-20h]
  _DWORD v38[2]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v39; // [esp+24h] [ebp-14h]
  float v40[4]; // [esp+28h] [ebp-10h] BYREF
  int v41; // [esp+44h] [ebp+Ch]
  int v42; // [esp+44h] [ebp+Ch]
  int v43; // [esp+48h] [ebp+10h]

  v5 = a4;
  v6 = 0;
  v7 = sub_100DDA40((unsigned __int64)(unsigned int)(4 * a4 * a3) >> 30 != 0 ? -1 : 16 * a4 * a3);
  v8 = a3;
  v39 = v7;
  v38[0] = a3;
  v38[1] = a4;
  if ( a4 > 0 )
  {
    v36 = 12 * a3;
    v9 = a1 + 20;
    v41 = 0;
    v34 = a1 + 20;
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
          *(float *)(v39 + 4 * v14) = v12;
          *(float *)(v39 + 4 * v14 + 4) = v11;
          *(float *)(v39 + 4 * v14 + 8) = v13;
          *(float *)(v39 + 4 * v14 + 12) = 0.0;
          v15 = *(float *)(v9 - 52);
          v16 = *(float *)(v9 - 48);
          v17 = 4 * (v10 + v6 * v38[0]) + 4;
          *(float *)(v39 + 4 * v17) = *(float *)(v9 - 56);
          *(float *)(v39 + 4 * v17 + 4) = v15;
          *(float *)(v39 + 4 * v17 + 8) = v16;
          *(float *)(v39 + 4 * v17 + 12) = 0.0;
          v18 = *(float *)(v9 - 40);
          v19 = *(float *)(v9 - 36);
          v20 = 4 * (v10 + v6 * v38[0]) + 8;
          *(float *)(v39 + 4 * v20) = *(float *)(v9 - 44);
          *(float *)(v39 + 4 * v20 + 4) = v18;
          *(float *)(v39 + 4 * v20 + 8) = v19;
          *(float *)(v39 + 4 * v20 + 12) = 0.0;
          v21 = *(float *)(v9 - 28);
          v22 = *(float *)(v9 - 24);
          v23 = 4 * (v10 + v6 * v38[0]) + 12;
          v10 += 4;
          *(float *)(v39 + 4 * v23) = *(float *)(v9 - 32);
          *(float *)(v39 + 4 * v23 + 4) = v21;
          *(float *)(v39 + 4 * v23 + 8) = v22;
          *(float *)(v39 + 4 * v23 + 12) = 0.0;
          v8 = v38[0];
        }
        while ( v10 < a3 - 3 );
        v5 = a4;
      }
      if ( v10 < a3 )
      {
        v24 = (float *)(a1 + 12 * (v10 + v41) + 8);
        do
        {
          v25 = *(v24 - 1);
          v26 = *(v24 - 2);
          v27 = *v24;
          v28 = 4 * (v10 + v6 * v8);
          ++v10;
          v24 += 3;
          *(float *)(v39 + 4 * v28) = v26;
          *(float *)(v39 + 4 * v28 + 4) = v25;
          *(float *)(v39 + 4 * v28 + 8) = v27;
          *(float *)(v39 + 4 * v28 + 12) = 0.0;
          v8 = v38[0];
        }
        while ( v10 < a3 );
      }
      v9 = v36 + v34;
      v41 += a3;
      ++v6;
      v34 += v36;
    }
    while ( v6 < v5 );
  }
  sub_101C6070(8.0);
  if ( v5 > 0 )
  {
    v29 = 16 * v38[0];
    v30 = (float *)(v39 + 8);
    v37 = 16 * v38[0];
    v42 = v39 + 8;
    v43 = a2 + 2;
    v35 = v5;
    do
    {
      if ( a3 > 0 )
      {
        v31 = v43;
        v32 = a3;
        do
        {
          v40[0] = *(v30 - 2);
          v40[1] = *(v30 - 1);
          v40[2] = *v30;
          v40[3] = v30[1];
          *(_DWORD *)(v31 - 2) = sub_101BF590(v40);
          v30 += 4;
          v31 += 4;
          --v32;
        }
        while ( v32 );
        v29 = v37;
      }
      v43 += 4 * a3;
      v30 = (float *)(v29 + v42);
      v33 = v35-- == 1;
      v42 += v29;
    }
    while ( !v33 );
  }
  Concurrency::details::TaskStack::~TaskStack((Concurrency::details::TaskStack *)v38);
}
