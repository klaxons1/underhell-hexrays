char __cdecl sub_10114F30(int *a1, char *String1, int *a3)
{
  char *v3; // esi
  int v5; // eax
  int v7; // ebx
  _DWORD *v8; // esi
  double v9; // st7
  float v10; // ecx
  float v11; // edx
  float v12; // ecx
  float v13; // edx
  int *v14; // esi
  int v15; // ebx
  int v16; // esi
  unsigned __int16 v17; // ax
  int v18; // esi
  _DWORD *v19; // ebx
  double v20; // st7
  int v21; // ecx
  float v22[3]; // [esp+8h] [ebp-2Ch] BYREF
  float v23; // [esp+14h] [ebp-20h] BYREF
  float v24; // [esp+18h] [ebp-1Ch]
  float v25; // [esp+1Ch] [ebp-18h]
  float v26; // [esp+20h] [ebp-14h] BYREF
  float v27; // [esp+24h] [ebp-10h]
  float v28; // [esp+28h] [ebp-Ch]
  int v29; // [esp+2Ch] [ebp-8h]
  _DWORD *v30; // [esp+30h] [ebp-4h]
  int v31; // [esp+3Ch] [ebp+8h]

  v3 = String1;
  sub_10114D30(a1, a3, String1);
  v5 = *a1;
  if ( !*a1 )
    return 0;
  *(float *)&v31 = 0.0;
  v7 = 0;
  v29 = *((_DWORD *)String1 + 10);
  if ( v5 <= 0 )
    goto LABEL_7;
  v8 = a1 + 6;
  do
  {
    v9 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)*v8 + 116))(*v8) + *(float *)&v31;
    ++v7;
    v8 += 6;
    *(float *)&v31 = v9;
  }
  while ( v7 < *a1 );
  v3 = String1;
  if ( v9 <= 1.0 )
LABEL_7:
    *(float *)&v31 = 1.0;
  v10 = *((float *)v3 + 7);
  v11 = *((float *)v3 + 8);
  v25 = *((float *)v3 + 9);
  v28 = *((float *)v3 + 6);
  v23 = v10;
  v12 = *((float *)v3 + 4);
  v24 = v11;
  v13 = *((float *)v3 + 5);
  v26 = v12;
  v27 = v13;
  if ( v29 >= 0 && v29 < *a1 )
  {
    v14 = &a1[6 * v29 + 6];
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)*v14 + 236))(*v14, &v23);
    (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)*v14 + 188))(*v14, &v26, 0);
  }
  v15 = 0;
  if ( *a1 > 0 )
  {
    v30 = a1 + 6;
    do
    {
      v16 = *v30;
      v17 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v30 + 76))(*v30);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v16 + 72))(v16, v17 | 8);
      v30 += 6;
      ++v15;
    }
    while ( v15 < *a1 );
  }
  if ( v26 != flt_10459240 || v27 != *(float *)&qword_10459244 || v28 != *((float *)&qword_10459244 + 1) )
  {
    v18 = 0;
    if ( *a1 > 0 )
    {
      v19 = a1 + 6;
      do
      {
        if ( v29 != v18 )
        {
          v20 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)*v19 + 116))(*v19) / *(float *)&v31;
          v21 = *v19;
          v22[0] = v23 * v20;
          v22[1] = v24 * v20;
          v22[2] = v20 * v25;
          (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v21 + 240))(v21, v22, &v26);
        }
        ++v18;
        v19 += 6;
      }
      while ( v18 < *a1 );
    }
  }
  return 1;
}
