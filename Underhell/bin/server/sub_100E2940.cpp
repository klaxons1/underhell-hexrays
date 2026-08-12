int __usercall sub_100E2940@<eax>(int a1@<eax>, float *a2, int a3, float *a4, float *a5)
{
  float v5; // edx
  float *v6; // ebx
  float v7; // ecx
  float v8; // edx
  int v9; // esi
  float v10; // ecx
  float v11; // edx
  int v12; // eax
  int v13; // ebx
  int v14; // ebx
  int v15; // eax
  int (__stdcall *v16)(int, int); // edx
  float v18[6]; // [esp+Ch] [ebp-48h] BYREF
  char v19; // [esp+24h] [ebp-30h]
  float v20[3]; // [esp+28h] [ebp-2Ch] BYREF
  float v21; // [esp+34h] [ebp-20h]
  float v22; // [esp+38h] [ebp-1Ch]
  float v23; // [esp+3Ch] [ebp-18h]
  float v24; // [esp+40h] [ebp-14h]
  float v25; // [esp+44h] [ebp-10h]
  float v26; // [esp+48h] [ebp-Ch]
  int v27; // [esp+4Ch] [ebp-8h]
  float *v28; // [esp+50h] [ebp-4h]

  v5 = *(float *)(a1 + 8);
  v6 = a4;
  v24 = *(float *)(a1 + 4);
  v7 = *(float *)(a1 + 12);
  v25 = v5;
  v8 = *(float *)(a1 + 16);
  v9 = *(_DWORD *)a1;
  v26 = v7;
  v10 = *(float *)(a1 + 20);
  v21 = v8;
  v11 = *(float *)(a1 + 24);
  v12 = *(_DWORD *)(v9 + 320);
  v22 = v10;
  v23 = v11;
  v27 = (*(int (__thiscall **)(int))(v12 + 48))(v9 + 320);
  sub_101129A0(*(unsigned __int16 *)(v9 + 356) | 4);
  if ( a2 == (float *)v9 )
  {
    if ( v6 )
    {
      sub_100E11A0(v9, v6);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 320))(v9) )
        sub_101E1CC0(v6, 0);
    }
    if ( a5 )
    {
      sub_100DD660(v9, a5);
      v20[0] = flt_106F1CA8;
      v20[1] = flt_106F1CAC;
      v20[2] = flt_106F1CB0;
      sub_100D9710((float *)(v9 + 464), v20);
    }
    v13 = a3;
    if ( a3 )
    {
      sub_100EAB80(v9, 8);
      sub_1025F370(v9, v13, 0);
    }
  }
  else
  {
    sub_100DAE60(v9);
  }
  v14 = *(_DWORD *)(v9 + 424);
  HIBYTE(a2) = 0;
  if ( v14 )
  {
    if ( a5 )
      (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v14 + 196))(v14, a5, 0);
    if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
      sub_100DAE60(v9);
    v15 = *(_DWORD *)v9;
    v28 = (float *)(v9 + 704);
    if ( (*(unsigned __int8 (__thiscall **)(int))(v15 + 320))(v9)
      || (*(int (__thiscall **)(int))(*(_DWORD *)(v9 + 320) + 44))(v9 + 320) == 2 )
    {
      v28 = &flt_106F1CB4;
    }
    else
    {
      HIBYTE(a2) = 1;
    }
    if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
      sub_100DAE60(v9);
    (*(void (__thiscall **)(int, int, float *, int))(*(_DWORD *)v14 + 180))(v14, v9 + 580, v28, 1);
  }
  v18[0] = v24;
  v19 = HIBYTE(a2);
  v18[1] = v25;
  a2 = v18;
  v18[2] = v26;
  v16 = (*off_1061BE1C)[3];
  v18[3] = v21;
  v18[4] = v22;
  v18[5] = v23;
  ((void (__thiscall *)(int (__stdcall ***)(int, int), int, _DWORD, float **))v16)(off_1061BE1C, v9, 0, &a2);
  return sub_101129A0(v27);
}
