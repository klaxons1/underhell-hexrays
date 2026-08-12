char __userpurge sub_102EA570@<al>(int *a1@<ecx>, int a2@<ebp>, _DWORD *a3, char a4, char a5)
{
  int v6; // edx
  int v7; // edi
  int (__thiscall *v8)(int *, bool); // edx
  double v9; // st7
  int v10; // edi
  float *v11; // eax
  int v12; // edi
  float *v13; // eax
  double v14; // st7
  double v15; // st7
  double v16; // st6
  float v18[22]; // [esp+34h] [ebp-13Ch] BYREF
  _BYTE v19[12]; // [esp+8Ch] [ebp-E4h] BYREF
  _BYTE v20[80]; // [esp+98h] [ebp-D8h] BYREF
  _DWORD v21[3]; // [esp+E8h] [ebp-88h] BYREF
  float v22[3]; // [esp+F4h] [ebp-7Ch] BYREF
  float v23[3]; // [esp+100h] [ebp-70h] BYREF
  int v24; // [esp+10Ch] [ebp-64h]
  float *v25; // [esp+110h] [ebp-60h]
  float v26; // [esp+114h] [ebp-5Ch]
  float v27; // [esp+118h] [ebp-58h]
  float v28; // [esp+11Ch] [ebp-54h]
  BOOL (__cdecl *v29)(int, int); // [esp+120h] [ebp-50h] BYREF
  int v30; // [esp+124h] [ebp-4Ch]
  int v31; // [esp+128h] [ebp-48h]
  int v32; // [esp+12Ch] [ebp-44h]
  int v33; // [esp+130h] [ebp-40h]
  int v34; // [esp+134h] [ebp-3Ch]
  int v35; // [esp+138h] [ebp-38h]
  int v36; // [esp+13Ch] [ebp-34h]
  int v37; // [esp+140h] [ebp-30h]
  float v38; // [esp+144h] [ebp-2Ch]
  float v39; // [esp+148h] [ebp-28h]
  int v40; // [esp+14Ch] [ebp-24h]
  float v41; // [esp+150h] [ebp-20h]
  float v42; // [esp+154h] [ebp-1Ch] BYREF
  float v43; // [esp+158h] [ebp-18h]
  float v44; // [esp+15Ch] [ebp-14h]
  char v45; // [esp+162h] [ebp-Eh]
  char v46; // [esp+163h] [ebp-Dh]
  int v47; // [esp+164h] [ebp-Ch]
  void *v48; // [esp+168h] [ebp-8h]
  void *retaddr; // [esp+170h] [ebp+0h]

  v47 = a2;
  v48 = retaddr;
  v39 = -99999.0;
  v38 = 99999.0;
  v41 = 99999.0;
  v6 = a1[2];
  v45 = 0;
  v46 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v34 = 0;
  v37 = 0;
  v29 = sub_10223B50;
  v33 = -1;
  v35 = -1;
  v36 = -1;
  sub_102EA430((float *)(v6 + 152), 100.0, a3, (int)&v29);
  v40 = sub_102E9140(&v29);
  if ( v40 == -1 )
    goto LABEL_26;
  do
  {
    v7 = *(_DWORD *)(v30 + 24 * v40 + 16);
    if ( v7 )
    {
      if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
        sub_100DAE60(*(_DWORD *)(v30 + 24 * v40 + 16));
      v8 = *(int (__thiscall **)(int *, bool))(*a1 + 24);
      v42 = *(float *)(v7 + 580);
      v43 = *(float *)(v7 + 584);
      v9 = *(float *)(v7 + 588);
      v10 = a1[1];
      v24 = *(_DWORD *)(v10 + 256);
      v44 = v9 + 1.0;
      v25 = (float *)v8(a1, (v24 & 2) != 0);
      v11 = (float *)(*(int (__thiscall **)(int *, bool))(*a1 + 20))(a1, (v24 & 2) != 0);
      sub_1001F200(v18, &v42, &v42, v11, v25);
      sub_10265570(v21, v10, 8);
      (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
        dword_106B31F4,
        v18,
        33636363,
        v21,
        v19);
      if ( *(_DWORD *)(dword_106CE63C + 48) )
        sub_101A0AD0((int)v19, (int)v20, 255, 255, 0, 1, -1.0);
      if ( !v20[43] )
      {
        v12 = a1[2];
        v13 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1[1] + 532))(a1[1]);
        v14 = v13[1] + *(float *)(v12 + 156);
        v26 = v42 - (*(float *)(v12 + 152) + *v13);
        v27 = v43 - v14;
        v28 = 0.0;
        v15 = off_10689714();
        v16 = *((float *)a1 + 7) * v27 + *((float *)a1 + 6) * v26 + *((float *)a1 + 8) * v28;
        if ( v16 >= 0.5 )
        {
          if ( v39 < v16 )
          {
            v45 = 1;
            v22[0] = v42;
            v22[1] = v43;
            v22[2] = v44;
            v38 = v15;
            v39 = v16;
          }
        }
        else if ( a5 && v41 > v15 )
        {
          v46 = 1;
          v23[0] = v42;
          v23[1] = v43;
          v23[2] = v44;
          v41 = v15;
        }
      }
    }
    v40 = sub_102E91E0(&v29, v40);
  }
  while ( v40 != -1 );
  if ( !v45 )
  {
LABEL_26:
    if ( a5 && v46 && v41 <= 60.0 )
    {
      sub_102E9870(a1, 0, *(float *)(a1[1] + 4132), v23, 0);
      sub_102EA3D0(&v29);
      return 1;
    }
    else
    {
      sub_102E9350(&v29);
      if ( v32 >= 0 && v30 )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v30);
      return 0;
    }
  }
  else if ( a4 && (v39 < 0.69999999 || v38 > 40.0) )
  {
    sub_102EA3D0(&v29);
    return 0;
  }
  else
  {
    sub_102E9870(a1, 0, *(float *)(a1[1] + 4132), v22, 0);
    sub_102E9350(&v29);
    if ( v32 >= 0 )
    {
      if ( v30 )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v30);
    }
    return 1;
  }
}
