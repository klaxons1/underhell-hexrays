int __thiscall sub_102160D0(int this, int a2)
{
  double v3; // st7
  int v4; // ecx
  float v5; // ecx
  double v6; // st7
  int v7; // ecx
  int v8; // ecx
  double v9; // st7
  float v10; // ecx
  int v11; // edx
  double v12; // st7
  float v13; // ecx
  int v14; // edx
  double v15; // st7
  float v16; // eax
  int result; // eax
  int v18; // [esp+1Ch] [ebp-44h]
  int v19; // [esp+20h] [ebp-40h]
  int v20; // [esp+24h] [ebp-3Ch]
  int v21; // [esp+28h] [ebp-38h]
  int v22; // [esp+30h] [ebp-30h] BYREF
  float v23; // [esp+34h] [ebp-2Ch]
  float v24; // [esp+38h] [ebp-28h]
  int v25; // [esp+3Ch] [ebp-24h] BYREF
  float v26; // [esp+40h] [ebp-20h]
  float v27; // [esp+44h] [ebp-1Ch]
  int v28; // [esp+48h] [ebp-18h] BYREF
  float v29; // [esp+4Ch] [ebp-14h]
  float v30; // [esp+50h] [ebp-10h]
  int v31; // [esp+54h] [ebp-Ch] BYREF
  float v32; // [esp+58h] [ebp-8h]
  float v33; // [esp+5Ch] [ebp-4h]
  int v34; // [esp+64h] [ebp+4h]

  v3 = *(float *)(this + 416);
  v4 = 17 * *(_DWORD *)(this + 400);
  v22 = *(int *)(a2 + 4 * v4 + 88);
  v23 = *(float *)(a2 + 4 * v4 + 92);
  v5 = *(float *)(a2 + 4 * v4 + 96);
  *(float *)&v22 = v3 + *(float *)&v22;
  v6 = *(float *)(this + 420);
  v24 = v5;
  v7 = *(_DWORD *)(this + 404);
  v23 = v6 + v23;
  v8 = a2 + 68 * v7 + 88;
  v24 = *(float *)(this + 424) + v24;
  v9 = *(float *)(this + 428);
  v25 = *(int *)v8;
  v26 = *(float *)(v8 + 4);
  v10 = *(float *)(v8 + 8);
  *(float *)&v25 = v9 + *(float *)&v25;
  v27 = v10;
  v11 = 17 * *(_DWORD *)(this + 408);
  v26 = *(float *)(this + 432) + v26;
  v27 = *(float *)(this + 436) + v10;
  v12 = *(float *)(this + 440);
  v28 = *(int *)(a2 + 4 * v11 + 88);
  v29 = *(float *)(a2 + 4 * v11 + 92);
  v13 = *(float *)(a2 + 4 * v11 + 96);
  *(float *)&v28 = v12 + *(float *)&v28;
  v30 = v13;
  v14 = 17 * *(_DWORD *)(this + 412);
  v29 = *(float *)(this + 444) + v29;
  v30 = *(float *)(this + 448) + v13;
  v31 = *(int *)(a2 + 4 * v14 + 88);
  v15 = *(float *)&v31 + *(float *)(this + 452);
  v32 = *(float *)(a2 + 4 * v14 + 92);
  v16 = *(float *)(a2 + 4 * v14 + 96);
  *(float *)&v31 = v15;
  v33 = v16;
  v32 = *(float *)(this + 456) + v32;
  v34 = *(unsigned __int8 *)(this + 496);
  v33 = *(float *)(this + 460) + v16;
  LOBYTE(v18) = (int)((double)v34 * 0.5);
  BYTE1(v18) = (int)((double)*(unsigned __int8 *)(this + 497) * 0.5);
  HIBYTE(v18) = -1;
  BYTE2(v18) = (int)((double)*(unsigned __int8 *)(this + 498) * 0.5);
  LOBYTE(v19) = (int)((double)*(unsigned __int8 *)(this + 500) * 0.5);
  BYTE1(v19) = (int)((double)*(unsigned __int8 *)(this + 501) * 0.5);
  HIBYTE(v20) = -1;
  HIBYTE(v19) = -1;
  BYTE2(v19) = (int)((double)*(unsigned __int8 *)(this + 502) * 0.5);
  LOBYTE(v20) = (int)((double)*(unsigned __int8 *)(this + 504) * 0.5);
  BYTE1(v20) = (int)((double)*(unsigned __int8 *)(this + 505) * 0.5);
  BYTE2(v20) = (int)((double)*(unsigned __int8 *)(this + 506) * 0.5);
  LOBYTE(v21) = (int)((double)*(unsigned __int8 *)(this + 508) * 0.5);
  BYTE1(v21) = (int)((double)*(unsigned __int8 *)(this + 509) * 0.5);
  HIBYTE(v21) = -1;
  result = (unsigned __int8)(int)(0.5 * (double)*(unsigned __int8 *)(this + 510));
  BYTE2(v21) = (int)(0.5 * (double)*(unsigned __int8 *)(this + 510));
  if ( *(_BYTE *)(this + 522) )
  {
    sub_10234600((int)&v22, *(float *)(this + 464), 16, 8, *(_DWORD *)(this + 496), 0);
    result = sub_10234600((int)&v22, *(float *)(this + 468), 16, 8, v18, 0);
  }
  if ( *(_BYTE *)(this + 523) )
  {
    sub_10234600((int)&v25, *(float *)(this + 472), 16, 8, *(_DWORD *)(this + 500), 0);
    result = sub_10234600((int)&v25, *(float *)(this + 476), 16, 8, v19, 0);
  }
  if ( *(_BYTE *)(this + 524) )
  {
    sub_10234600((int)&v28, *(float *)(this + 480), 16, 8, *(_DWORD *)(this + 504), 0);
    result = sub_10234600((int)&v28, *(float *)(this + 484), 16, 8, v20, 0);
  }
  if ( *(_BYTE *)(this + 525) )
  {
    sub_10234600((int)&v31, *(float *)(this + 488), 16, 8, *(_DWORD *)(this + 508), 0);
    return sub_10234600((int)&v31, *(float *)(this + 492), 16, 8, v21, 0);
  }
  return result;
}
