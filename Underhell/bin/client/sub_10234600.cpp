int __usercall sub_10234600@<eax>(int a1@<esi>, float *a2, float a3, int a4, int a5, int a6, char a7)
{
  int v7; // esi
  int v8; // ebx
  int v9; // ecx
  int v10; // eax
  double v11; // st7
  int v12; // ebp
  long double v13; // st6
  long double v14; // st6
  float *v15; // eax
  long double v16; // st5
  long double v17; // st4
  long double v18; // st6
  long double v19; // st5
  double v20; // st7
  int v21; // ecx
  __int16 v22; // dx
  int v23; // esi
  bool v24; // zf
  int v25; // eax
  int v27; // [esp+20h] [ebp-208h]
  int v28; // [esp+20h] [ebp-208h]
  int v29; // [esp+24h] [ebp-204h]
  int v30; // [esp+24h] [ebp-204h]
  float i; // [esp+28h] [ebp-200h]
  int v32; // [esp+2Ch] [ebp-1FCh]
  int v33; // [esp+30h] [ebp-1F8h]
  float v34; // [esp+34h] [ebp-1F4h]
  int v35; // [esp+38h] [ebp-1F0h]
  float v36; // [esp+3Ch] [ebp-1ECh]
  _BYTE v37[180]; // [esp+40h] [ebp-1E8h] BYREF
  int v38; // [esp+F4h] [ebp-134h]
  int v39; // [esp+F8h] [ebp-130h]
  char v40; // [esp+FCh] [ebp-12Ch]
  _DWORD v41[3]; // [esp+100h] [ebp-128h] BYREF
  unsigned __int8 v42; // [esp+10Ch] [ebp-11Ch]
  int v43; // [esp+110h] [ebp-118h]
  int v44; // [esp+114h] [ebp-114h]
  int v45; // [esp+118h] [ebp-110h]
  __int16 v46; // [esp+11Ch] [ebp-10Ch]
  int v47; // [esp+120h] [ebp-108h]
  _DWORD v48[41]; // [esp+134h] [ebp-F4h] BYREF
  int v49; // [esp+1D8h] [ebp-50h]
  int v50; // [esp+1E0h] [ebp-48h]
  int v51; // [esp+1E4h] [ebp-44h]
  float *v52; // [esp+1ECh] [ebp-3Ch]
  int *v53; // [esp+214h] [ebp-14h]

  sub_102343B0(a1);
  v7 = a5;
  v8 = a4 + 1;
  v27 = a5 - 1;
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C970 + 380))(dword_1047C970);
  v32 = v9;
  if ( v9 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
    v9 = v32;
  }
  v10 = dword_1047CA38;
  if ( !a7 )
    v10 = dword_1047CA34;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v9 + 36))(v9, v10, 0);
  sub_10016C20((int)v37);
  v35 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v32 + 224))(v32, 1, 0, 0, 0);
  sub_10061780((int)v37, v35, 1, a5 * (a4 + 1), (a5 - 1) * (4 * (a4 + 1) - 4));
  v33 = 0;
  if ( a5 > 0 )
  {
    v11 = a3;
    do
    {
      v12 = 0;
      v29 = 0;
      if ( v8 > 0 )
      {
        v13 = (double)v33 / (double)v27 * 3.141592653589793;
        v36 = cos(v13) * v11;
        v14 = sin(v13);
        for ( i = v14; ; v14 = i )
        {
          v15 = v52 + 1;
          v34 = (float)a4;
          v16 = (double)v29 / v34 * 6.283185307179586;
          v17 = v14 * cos(v16);
          v18 = sin(v16) * v14 * v11 + a2[1];
          v19 = v11 * v17;
          v20 = a2[2] + v36;
          *v52 = v19 + *a2;
          *v15 = v18;
          v15[1] = v20;
          *v53 = BYTE2(a6) | ((BYTE1(a6) | (((unsigned __int8)a6 | (HIBYTE(a6) << 8)) << 8)) << 8);
          sub_10016A80(v48);
          v11 = a3;
          v29 = ++v12;
          if ( v12 >= v8 )
            break;
        }
        v7 = a5;
      }
      ++v33;
    }
    while ( v33 < v7 );
  }
  if ( v27 > 0 )
  {
    v21 = v47;
    v22 = 0;
    v28 = 0;
    v30 = a5 - 1;
    do
    {
      v23 = a4;
      if ( a4 > 0 )
      {
        do
        {
          *(_WORD *)(v41[0] + 2 * v21) = v22 + v46;
          v47 += v42;
          if ( v47 > v45 )
            v45 = v47;
          *(_WORD *)(v41[0] + 2 * v47) = v22 + v8 + v46;
          v47 += v42;
          if ( v47 > v45 )
            v45 = v47;
          *(_WORD *)(v41[0] + 2 * v47) = v22 + v46;
          v47 += v42;
          if ( v47 > v45 )
            v45 = v47;
          *(_WORD *)(v41[0] + 2 * v47) = v46 + v22 + 1;
          v47 += v42;
          v21 = v47;
          if ( v47 > v45 )
            v45 = v47;
          ++v22;
          --v23;
        }
        while ( v23 );
      }
      v22 = v8 + v28;
      v24 = v30-- == 1;
      v28 += v8;
    }
    while ( !v24 );
  }
  if ( v40 )
  {
    switch ( v39 )
    {
      case 4:
        v25 = 2 * v51 - 2;
        break;
      case 5:
        v25 = 2 * v51;
        break;
      case 6:
        v25 = 3 * v51 - 6;
        break;
      case 7:
        v25 = 6 * v51 / 4;
        break;
      case 8:
        v25 = 0;
        break;
      default:
        v25 = v51;
        break;
    }
    sub_10016B00(v41, v39, v25);
  }
  (*(void (__thiscall **)(int, int, int, _BYTE *))(*(_DWORD *)v38 + 80))(v38, v51, v45, v37);
  v43 = 0;
  v44 = 0;
  v50 = 0;
  v49 = 0;
  v48[19] = -1;
  v38 = 0;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v35 + 48))(v35, -1, 0);
  if ( v49 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v49 + 8))(v49) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v49 + 16))(v49);
  if ( v43 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v43 + 8))(v43) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v43 + 16))(v43);
  (*(void (__thiscall **)(int))(*(_DWORD *)v32 + 12))(v32);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v32 + 4))(v32);
}
