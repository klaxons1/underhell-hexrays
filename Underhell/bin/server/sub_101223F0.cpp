int __cdecl sub_101223F0(
        int a1,
        int ArgList,
        int a3,
        int a4,
        int a5,
        char a6,
        int a7,
        int a8,
        int a9,
        float a10,
        float a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        float a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int (__cdecl *a25)(int a1, int a2, int a3))
{
  int v25; // edx
  int v27; // eax
  int v28; // ebx
  int (__cdecl *v29)(int, int, int); // eax
  int v30; // ebx
  int v31; // ecx
  _DWORD *v32; // eax
  int v33; // ecx
  _DWORD *v34; // edx
  float *i; // eax
  int v36; // eax
  int v37; // edx
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  int v41; // ecx
  int v42; // ebx
  int v43; // eax
  int v45; // [esp+Ch] [ebp-8h]
  int v46; // [esp+10h] [ebp-4h]
  int v47; // [esp+1Ch] [ebp+8h]
  int v48; // [esp+1Ch] [ebp+8h]
  int v49; // [esp+24h] [ebp+10h]

  v25 = (int)a25;
  *(float *)(a1 + 16) = 0.0;
  *(float *)(a1 + 20) = 0.0;
  *(_DWORD *)a1 = &SendProp::`vftable';
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 36) = -1;
  *(_DWORD *)(a1 + 8) = 5;
  *(_DWORD *)(a1 + 44) = ArgList;
  *(_DWORD *)(a1 + 68) = a3;
  *(_DWORD *)(a1 + 60) = v25;
  v27 = sub_10184390(76);
  if ( v27 )
  {
    *(_DWORD *)(v27 + 36) = -1;
    *(float *)(v27 + 16) = 0.0;
    *(_DWORD *)v27 = &SendProp::`vftable';
    *(float *)(v27 + 20) = 0.0;
    *(_DWORD *)(v27 + 44) = 0;
    *(_DWORD *)(v27 + 68) = 0;
    *(_DWORD *)(v27 + 64) = 0;
    *(_DWORD *)(v27 + 56) = 0;
    *(_DWORD *)(v27 + 40) = 0;
    *(_DWORD *)(v27 + 8) = 0;
    *(_DWORD *)(v27 + 52) = 0;
    *(_DWORD *)(v27 + 12) = 0;
    *(_DWORD *)(v27 + 24) = 0;
    *(_DWORD *)(v27 + 28) = 0;
    *(_DWORD *)(v27 + 32) = 1;
    v28 = v27;
  }
  else
  {
    v28 = 0;
  }
  sub_10121C30(v28, (int)&a6);
  v29 = a25;
  *(_DWORD *)(a1 + 24) = v28;
  if ( v29 == std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>> || v29 == sub_10121B30 )
    *(_DWORD *)(a1 + 52) = 512;
  v30 = a5;
  v31 = (76 * (unsigned __int64)(unsigned int)a5) >> 32 != 0 ? -1 : 76 * a5;
  v32 = (_DWORD *)sub_10184390(__CFADD__(v31, 4) ? -1 : v31 + 4);
  if ( v32 )
  {
    v33 = a5 - 1;
    v34 = v32 + 1;
    *v32 = a5;
    for ( i = (float *)(v32 + 1); v33 >= 0; --v33 )
    {
      i[4] = 0.0;
      *(_DWORD *)i = &SendProp::`vftable';
      i[5] = 0.0;
      i[11] = 0.0;
      i[17] = 0.0;
      i[16] = 0.0;
      i[14] = 0.0;
      i[10] = 0.0;
      i[2] = 0.0;
      i[13] = 0.0;
      i[3] = 0.0;
      i[6] = 0.0;
      i[7] = 0.0;
      *((_DWORD *)i + 8) = 1;
      i[9] = NAN;
      i += 19;
    }
    v49 = (int)v34;
  }
  else
  {
    v49 = 0;
  }
  v36 = sub_10122910("%s", ArgList);
  v37 = 0;
  a25 = (int (__cdecl *)(int, int, int))v36;
  v38 = a4;
  if ( a5 >= 4 )
  {
    v45 = 3 * a4;
    v46 = 2 * a4;
    v47 = 0;
    v39 = v49 + 84;
    do
    {
      *(_DWORD *)(v39 - 80) = a7;
      *(_DWORD *)(v39 - 76) = a8;
      *(_DWORD *)(v39 - 72) = a9;
      *(float *)(v39 - 68) = a10;
      *(float *)(v39 - 64) = a11;
      *(_DWORD *)(v39 - 60) = a12;
      *(_DWORD *)(v39 - 56) = a13;
      *(_DWORD *)(v39 - 52) = a14;
      *(_DWORD *)(v39 - 48) = a15;
      *(_DWORD *)(v39 - 44) = a16;
      *(_DWORD *)(v39 - 44) = a16;
      *(_DWORD *)(v39 - 40) = a17;
      *(float *)(v39 - 36) = a18;
      *(_DWORD *)(v39 - 32) = a19;
      *(_DWORD *)(v39 - 28) = a20;
      *(_DWORD *)(v39 - 24) = a21;
      *(_DWORD *)(v39 - 20) = a22;
      *(_DWORD *)(v39 - 16) = a23;
      *(_DWORD *)(v39 - 12) = a24;
      *(_DWORD *)(v39 - 16) = v47;
      *(_DWORD *)(v39 - 40) = off_10617498[v37];
      *(_DWORD *)(v39 - 44) = a25;
      *(_DWORD *)(v39 - 4) = a7;
      *(_DWORD *)v39 = a8;
      *(_DWORD *)(v39 + 4) = a9;
      *(float *)(v39 + 8) = a10;
      *(float *)(v39 + 12) = a11;
      *(_DWORD *)(v39 + 16) = a12;
      *(_DWORD *)(v39 + 20) = a13;
      *(_DWORD *)(v39 + 24) = a14;
      *(_DWORD *)(v39 + 28) = a15;
      *(_DWORD *)(v39 + 32) = a16;
      *(_DWORD *)(v39 + 32) = a16;
      *(_DWORD *)(v39 + 36) = a17;
      *(float *)(v39 + 40) = a18;
      *(_DWORD *)(v39 + 44) = a19;
      *(_DWORD *)(v39 + 48) = a20;
      *(_DWORD *)(v39 + 52) = a21;
      *(_DWORD *)(v39 + 56) = a22;
      *(_DWORD *)(v39 + 60) = a23;
      *(_DWORD *)(v39 + 64) = a24;
      *(_DWORD *)(v39 + 60) = v38 + v47;
      *(_DWORD *)(v39 + 36) = off_1061749C[v37];
      *(_DWORD *)(v39 + 32) = a25;
      *(_DWORD *)(v39 + 72) = a7;
      *(_DWORD *)(v39 + 76) = a8;
      *(_DWORD *)(v39 + 80) = a9;
      *(float *)(v39 + 84) = a10;
      *(float *)(v39 + 88) = a11;
      *(_DWORD *)(v39 + 92) = a12;
      *(_DWORD *)(v39 + 96) = a13;
      *(_DWORD *)(v39 + 100) = a14;
      *(_DWORD *)(v39 + 104) = a15;
      *(_DWORD *)(v39 + 108) = a16;
      *(_DWORD *)(v39 + 108) = a16;
      *(_DWORD *)(v39 + 112) = a17;
      *(float *)(v39 + 116) = a18;
      *(_DWORD *)(v39 + 120) = a19;
      *(_DWORD *)(v39 + 124) = a20;
      *(_DWORD *)(v39 + 128) = a21;
      *(_DWORD *)(v39 + 132) = a22;
      *(_DWORD *)(v39 + 136) = a23;
      *(_DWORD *)(v39 + 140) = a24;
      *(_DWORD *)(v39 + 136) = v46;
      *(_DWORD *)(v39 + 112) = off_106174A0[v37];
      *(_DWORD *)(v39 + 108) = a25;
      *(_DWORD *)(v39 + 148) = a7;
      *(_DWORD *)(v39 + 152) = a8;
      *(_DWORD *)(v39 + 156) = a9;
      *(float *)(v39 + 160) = a10;
      *(float *)(v39 + 164) = a11;
      *(_DWORD *)(v39 + 168) = a12;
      *(_DWORD *)(v39 + 172) = a13;
      *(_DWORD *)(v39 + 176) = a14;
      *(_DWORD *)(v39 + 180) = a15;
      *(_DWORD *)(v39 + 184) = a16;
      *(_DWORD *)(v39 + 184) = a16;
      *(_DWORD *)(v39 + 188) = a17;
      *(float *)(v39 + 192) = a18;
      *(_DWORD *)(v39 + 196) = a19;
      *(_DWORD *)(v39 + 200) = a20;
      *(_DWORD *)(v39 + 204) = a21;
      *(_DWORD *)(v39 + 208) = a22;
      *(_DWORD *)(v39 + 212) = a23;
      *(_DWORD *)(v39 + 216) = a24;
      *(_DWORD *)(v39 + 212) = v45;
      *(_DWORD *)(v39 + 188) = off_106174A4[v37];
      v40 = 4 * v38;
      v47 += v40;
      v46 += v40;
      v45 += v40;
      *(_DWORD *)(v39 + 184) = a25;
      v30 = a5;
      v37 += 4;
      v39 += 304;
      v38 = a4;
    }
    while ( v37 < a5 - 3 );
  }
  if ( v37 < v30 )
  {
    v48 = v38 * v37;
    v41 = v49 + 76 * v37 + 8;
    do
    {
      *(_DWORD *)(v41 - 4) = a7;
      *(_DWORD *)v41 = a8;
      *(_DWORD *)(v41 + 4) = a9;
      *(float *)(v41 + 8) = a10;
      ++v37;
      v41 += 76;
      *(float *)(v41 - 64) = a11;
      *(_DWORD *)(v41 - 60) = a12;
      *(_DWORD *)(v41 - 56) = a13;
      *(_DWORD *)(v41 - 52) = a14;
      *(_DWORD *)(v41 - 48) = a15;
      *(_DWORD *)(v41 - 44) = a16;
      *(_DWORD *)(v41 - 44) = a16;
      *(_DWORD *)(v41 - 40) = a17;
      *(float *)(v41 - 36) = a18;
      *(_DWORD *)(v41 - 32) = a19;
      *(_DWORD *)(v41 - 28) = a20;
      *(_DWORD *)(v41 - 24) = a21;
      *(_DWORD *)(v41 - 20) = a22;
      *(_DWORD *)(v41 - 16) = a23;
      *(_DWORD *)(v41 - 12) = a24;
      v42 = v48;
      v48 += v38;
      *(_DWORD *)(v41 - 16) = v42;
      *(_DWORD *)(v41 - 40) = dword_10617494[v37];
      *(_DWORD *)(v41 - 44) = a25;
      v30 = a5;
    }
    while ( v37 < a5 );
  }
  v43 = sub_10184390(20);
  if ( v43 )
  {
    *(_BYTE *)(v43 + 16) &= 0xF8u;
    *(_DWORD *)(v43 + 12) = 0;
    *(_DWORD *)(v43 + 4) = v30;
    *(_DWORD *)(a1 + 64) = v43;
    *(_DWORD *)v43 = v49;
    *(_DWORD *)(v43 + 8) = ArgList;
  }
  else
  {
    *(_DWORD *)(a1 + 64) = 0;
  }
  return a1;
}
