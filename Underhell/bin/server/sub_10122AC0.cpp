int __cdecl sub_10122AC0(
        int a1,
        const char *a2,
        int a3,
        int a4,
        int a5,
        int ArgList,
        int a7,
        int a8,
        int a9,
        int a10,
        float a11,
        float a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        float a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int (__cdecl *a26)(int a1, int a2, int a3))
{
  int (__cdecl *v26)(int, int, int); // eax
  _DWORD *v27; // ebx
  int v28; // ecx
  _DWORD *v29; // eax
  int v30; // eax
  int v31; // edi
  float *v32; // esi
  float *v33; // eax
  float *v34; // esi
  int v35; // eax
  int i; // ecx
  void *v37; // eax
  int v38; // eax
  void *v39; // edi
  _BYTE *v40; // eax
  _BYTE *v41; // eax
  int v42; // eax
  int v43; // edi
  int v44; // ecx
  int v45; // esi
  int v46; // edx
  int v47; // eax
  int *v48; // edx
  int v49; // eax
  _BYTE *v50; // ebx
  void *v51; // eax
  _BYTE *v52; // eax
  int v54; // [esp-Ch] [ebp-64h]
  _DWORD v55[19]; // [esp+Ch] [ebp-4Ch] BYREF

  sub_10121CB0((float *)a1);
  *(_DWORD *)(a1 + 44) = a2;
  v26 = a26;
  *(_DWORD *)(a1 + 8) = 5;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 60) = v26;
  if ( v26 == std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>> || v26 == sub_10121B30 )
    *(_DWORD *)(a1 + 52) = 512;
  v27 = (_DWORD *)sub_10184390(24);
  v27[3] = a4;
  v27[5] = ArgList;
  v27[2] = a5;
  v27[4] = a3;
  if ( a9 == 5 )
    *v27 = a22;
  else
    v27[1] = a21;
  v28 = (76 * (unsigned __int64)(unsigned int)(ArgList + 1)) >> 32 != 0 ? -1 : 76 * (ArgList + 1);
  v29 = (_DWORD *)sub_10184390(__CFADD__(v28, 4) ? -1 : v28 + 4);
  if ( v29 )
  {
    *v29 = ArgList + 1;
    v30 = (int)(v29 + 1);
    v31 = ArgList;
    a26 = (int (__cdecl *)(int, int, int))v30;
    v32 = (float *)v30;
    if ( ArgList >= 0 )
    {
      do
      {
        sub_10121CB0(v32);
        v32 += 19;
        --v31;
      }
      while ( v31 >= 0 );
      v30 = (int)a26;
    }
    a26 = (int (__cdecl *)(int, int, int))v30;
  }
  else
  {
    a26 = 0;
  }
  v33 = (float *)sub_10184390(76);
  if ( v33 )
    v34 = sub_10121CB0(v33);
  else
    v34 = 0;
  v35 = 0;
  for ( i = ArgList; i > 0; ++v35 )
    i >>= 1;
  v54 = v35;
  v37 = sub_10122910("lengthprop%d", ArgList);
  v38 = sub_10122040((int)v55, (int)v37, 0, 0, v54, 1, sub_10122A00);
  sub_10121C30((int)v34, v38);
  sub_10121CF0(v55);
  *((_DWORD *)v34 + 18) = v27;
  v39 = sub_10122970(1, "_LPT_%s_%d", a2, ArgList);
  v40 = (_BYTE *)sub_10184390(20);
  if ( v40 )
    v41 = sub_10122330(v40, (int)v34, 1, (int)v39);
  else
    v41 = 0;
  v42 = sub_101221E0((int)v55, (int)"lengthproxy", 0, (int)v41, sub_101229D0);
  v43 = (int)a26;
  sub_10121C30((int)a26, v42);
  sub_10121CF0(v55);
  v44 = 1;
  v45 = ArgList + 1;
  *(_DWORD *)(v43 + 72) = v27;
  if ( ArgList + 1 > 1 )
  {
    if ( ArgList >= 4 )
    {
      v46 = 2;
      v47 = v43 + 160;
      do
      {
        *(_DWORD *)(v47 - 80) = a8;
        *(_DWORD *)(v47 - 76) = a9;
        *(_DWORD *)(v47 - 72) = a10;
        *(float *)(v47 - 68) = a11;
        *(float *)(v47 - 64) = a12;
        *(_DWORD *)(v47 - 60) = a13;
        *(_DWORD *)(v47 - 56) = a14;
        *(_DWORD *)(v47 - 52) = a15;
        *(_DWORD *)(v47 - 48) = a16;
        *(_DWORD *)(v47 - 44) = a17;
        *(_DWORD *)(v47 - 44) = a17;
        *(_DWORD *)(v47 - 40) = a18;
        *(float *)(v47 - 36) = a19;
        *(_DWORD *)(v47 - 32) = a20;
        *(_DWORD *)(v47 - 28) = a21;
        *(_DWORD *)(v47 - 24) = a22;
        *(_DWORD *)(v47 - 20) = a23;
        *(_DWORD *)(v47 - 16) = a24;
        *(_DWORD *)(v47 - 12) = a25;
        *(_DWORD *)(v47 - 16) = 0;
        *(_DWORD *)(v47 - 40) = dword_10617494[v44];
        *(_DWORD *)(v47 - 48) = v46 - 2;
        *(_DWORD *)(v47 - 12) = v27;
        if ( a9 == 5 )
        {
          *(_DWORD *)(v47 - 24) = sub_10122A80;
          *(_DWORD *)(v47 - 32) = 512;
        }
        else
        {
          *(_DWORD *)(v47 - 28) = sub_10122A30;
        }
        *(_DWORD *)(v47 - 4) = a8;
        *(_DWORD *)v47 = a9;
        *(_DWORD *)(v47 + 4) = a10;
        *(float *)(v47 + 8) = a11;
        *(float *)(v47 + 12) = a12;
        *(_DWORD *)(v47 + 16) = a13;
        *(_DWORD *)(v47 + 20) = a14;
        *(_DWORD *)(v47 + 24) = a15;
        *(_DWORD *)(v47 + 28) = a16;
        *(_DWORD *)(v47 + 32) = a17;
        *(_DWORD *)(v47 + 32) = a17;
        *(_DWORD *)(v47 + 36) = a18;
        *(float *)(v47 + 40) = a19;
        *(_DWORD *)(v47 + 44) = a20;
        *(_DWORD *)(v47 + 48) = a21;
        *(_DWORD *)(v47 + 52) = a22;
        *(_DWORD *)(v47 + 56) = a23;
        *(_DWORD *)(v47 + 60) = a24;
        *(_DWORD *)(v47 + 64) = a25;
        *(_DWORD *)(v47 + 60) = 0;
        *(_DWORD *)(v47 + 36) = off_10617498[v44];
        *(_DWORD *)(v47 + 64) = v27;
        *(_DWORD *)(v47 + 28) = v44;
        if ( a9 == 5 )
        {
          *(_DWORD *)(v47 + 52) = sub_10122A80;
          *(_DWORD *)(v47 + 44) = 512;
        }
        else
        {
          *(_DWORD *)(v47 + 48) = sub_10122A30;
        }
        *(_DWORD *)(v47 + 72) = a8;
        *(_DWORD *)(v47 + 76) = a9;
        *(_DWORD *)(v47 + 80) = a10;
        *(float *)(v47 + 84) = a11;
        *(float *)(v47 + 88) = a12;
        *(_DWORD *)(v47 + 92) = a13;
        *(_DWORD *)(v47 + 96) = a14;
        *(_DWORD *)(v47 + 100) = a15;
        *(_DWORD *)(v47 + 104) = a16;
        *(_DWORD *)(v47 + 108) = a17;
        *(_DWORD *)(v47 + 108) = a17;
        *(_DWORD *)(v47 + 112) = a18;
        *(float *)(v47 + 116) = a19;
        *(_DWORD *)(v47 + 120) = a20;
        *(_DWORD *)(v47 + 124) = a21;
        *(_DWORD *)(v47 + 128) = a22;
        *(_DWORD *)(v47 + 132) = a23;
        *(_DWORD *)(v47 + 136) = a24;
        *(_DWORD *)(v47 + 140) = a25;
        *(_DWORD *)(v47 + 136) = 0;
        *(_DWORD *)(v47 + 112) = off_1061749C[v44];
        *(_DWORD *)(v47 + 140) = v27;
        *(_DWORD *)(v47 + 104) = v46;
        if ( a9 == 5 )
        {
          *(_DWORD *)(v47 + 128) = sub_10122A80;
          *(_DWORD *)(v47 + 120) = 512;
        }
        else
        {
          *(_DWORD *)(v47 + 124) = sub_10122A30;
        }
        *(_DWORD *)(v47 + 148) = a8;
        *(_DWORD *)(v47 + 152) = a9;
        *(_DWORD *)(v47 + 156) = a10;
        *(float *)(v47 + 160) = a11;
        *(float *)(v47 + 164) = a12;
        *(_DWORD *)(v47 + 168) = a13;
        *(_DWORD *)(v47 + 172) = a14;
        *(_DWORD *)(v47 + 176) = a15;
        *(_DWORD *)(v47 + 180) = a16;
        *(_DWORD *)(v47 + 184) = a17;
        *(_DWORD *)(v47 + 184) = a17;
        *(_DWORD *)(v47 + 188) = a18;
        *(float *)(v47 + 192) = a19;
        *(_DWORD *)(v47 + 196) = a20;
        *(_DWORD *)(v47 + 200) = a21;
        *(_DWORD *)(v47 + 204) = a22;
        *(_DWORD *)(v47 + 208) = a23;
        *(_DWORD *)(v47 + 212) = a24;
        *(_DWORD *)(v47 + 216) = a25;
        *(_DWORD *)(v47 + 212) = 0;
        *(_DWORD *)(v47 + 188) = off_106174A0[v44];
        *(_DWORD *)(v47 + 216) = v27;
        *(_DWORD *)(v47 + 180) = v46 + 1;
        if ( a9 == 5 )
        {
          *(_DWORD *)(v47 + 204) = sub_10122A80;
          *(_DWORD *)(v47 + 196) = 512;
        }
        else
        {
          *(_DWORD *)(v47 + 200) = sub_10122A30;
        }
        v44 += 4;
        v46 += 4;
        v47 += 304;
      }
      while ( v44 < ArgList - 2 );
      v43 = (int)a26;
    }
    v45 = ArgList + 1;
    if ( v44 < ArgList + 1 )
    {
      v48 = &dword_10617494[v44];
      v49 = v43 + 76 * v44 + 8;
      do
      {
        *(_DWORD *)(v49 - 4) = a8;
        *(_DWORD *)v49 = a9;
        *(_DWORD *)(v49 + 4) = a10;
        *(float *)(v49 + 8) = a11;
        *(float *)(v49 + 12) = a12;
        *(_DWORD *)(v49 + 16) = a13;
        *(_DWORD *)(v49 + 20) = a14;
        *(_DWORD *)(v49 + 24) = a15;
        *(_DWORD *)(v49 + 28) = a16;
        *(_DWORD *)(v49 + 32) = a17;
        *(_DWORD *)(v49 + 32) = a17;
        *(_DWORD *)(v49 + 36) = a18;
        *(float *)(v49 + 40) = a19;
        *(_DWORD *)(v49 + 44) = a20;
        *(_DWORD *)(v49 + 48) = a21;
        *(_DWORD *)(v49 + 52) = a22;
        *(_DWORD *)(v49 + 56) = a23;
        *(_DWORD *)(v49 + 60) = a24;
        *(_DWORD *)(v49 + 64) = a25;
        *(_DWORD *)(v49 + 60) = 0;
        *(_DWORD *)(v49 + 36) = *v48;
        *(_DWORD *)(v49 + 64) = v27;
        *(_DWORD *)(v49 + 28) = v44 - 1;
        if ( a9 == 5 )
        {
          *(_DWORD *)(v49 + 52) = sub_10122A80;
          *(_DWORD *)(v49 + 44) = 512;
        }
        else
        {
          *(_DWORD *)(v49 + 48) = sub_10122A30;
        }
        ++v44;
        ++v48;
        v49 += 76;
      }
      while ( v44 < v45 );
      v43 = (int)a26;
    }
  }
  v50 = (_BYTE *)sub_10184390(20);
  if ( v50 )
  {
    v51 = sub_10122970(1, "_ST_%s_%d", a2, ArgList);
    v52 = sub_10122330(v50, v43, v45, (int)v51);
  }
  else
  {
    v52 = 0;
  }
  *(_DWORD *)(a1 + 64) = v52;
  sub_10121CF0(&a7);
  return a1;
}
