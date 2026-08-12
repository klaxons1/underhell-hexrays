char __thiscall sub_10202660(_DWORD *this, int a2, int a3, int *a4)
{
  int v5; // edi
  const char *v6; // ebx
  void *v8; // esp
  _DWORD *v9; // esi
  int v10; // edi
  int *v11; // esi
  int v12; // eax
  int v13; // ecx
  const char *v14; // eax
  int v15; // eax
  _DWORD *v16; // ebx
  int v17; // edi
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // edi
  _BYTE v22[8]; // [esp+0h] [ebp-BCh] BYREF
  int v23; // [esp+8h] [ebp-B4h] BYREF
  char v24[64]; // [esp+Ch] [ebp-B0h] BYREF
  _BYTE v25[12]; // [esp+4Ch] [ebp-70h] BYREF
  float v26; // [esp+58h] [ebp-64h]
  float v27; // [esp+68h] [ebp-54h]
  float v28; // [esp+78h] [ebp-44h]
  float v29[3]; // [esp+8Ch] [ebp-30h] BYREF
  char v30[4]; // [esp+98h] [ebp-24h] BYREF
  float v31[3]; // [esp+9Ch] [ebp-20h] BYREF
  int v32; // [esp+A8h] [ebp-14h]
  int v33; // [esp+ACh] [ebp-10h]
  _BYTE *v34; // [esp+B0h] [ebp-Ch]
  int v35; // [esp+B4h] [ebp-8h] BYREF
  const char *v36; // [esp+B8h] [ebp-4h]
  int v37; // [esp+C8h] [ebp+Ch]

  v5 = this[224];
  v33 = v5;
  if ( !v5 )
  {
    v6 = (const char *)this[65];
    if ( !v6 )
      v6 = String;
    Msg("CreateInstance called on a point_template that has no templates: %s\n", v6);
    return 0;
  }
  sub_1024B240();
  v8 = alloca(16 * v5);
  v9 = v22;
  v34 = v22;
  v32 = 0;
  if ( v5 > 0 )
  {
    v10 = 0;
    v11 = &v23;
    while ( 1 )
    {
      v12 = this[221];
      v13 = this[62] >> 1;
      v35 = 0;
      v14 = *(const char **)(v10 + v12);
      v36 = v14;
      if ( (v13 & 1) == 0 )
      {
        if ( (unsigned __int8)sub_1024B360(v14) )
        {
          v36 = (const char *)sub_1024B480(v36);
          goto LABEL_13;
        }
        v14 = v36;
      }
      v36 = *(const char **)sub_1024B380(v30, v14);
      if ( !v36 )
        v36 = String;
LABEL_13:
      sub_101812F0(v10, (int)v11, &v35, (int)v36, 0);
      if ( !v35 )
      {
        Msg("Failed to initialize templated entity with mapdata: %s\n", v36);
        return 0;
      }
      sub_10425A30(a2, a3);
      sub_10425BE0(v24, v10 + this[221] + 4, v25);
      v31[0] = v26;
      v31[1] = v27;
      v31[2] = v28;
      sub_10421A90(v25, v29);
      sub_100E0D20(v35, v31);
      sub_100E0EA0(v35, v29);
      v15 = v32 + 1;
      *(v11 - 2) = v35;
      *(v11 - 1) = 0;
      *v11 = 0;
      v10 += 68;
      v11 += 4;
      v32 = v15;
      if ( v15 >= v33 )
      {
        v9 = v34;
        v5 = v33;
        break;
      }
    }
  }
  sub_10181A80(v5, v9, 1);
  if ( v5 > 0 )
  {
    v16 = v34;
    v37 = v5;
    do
    {
      if ( *v16 )
      {
        v17 = a4[3];
        v18 = a4[1];
        if ( v17 + 1 > v18 )
          sub_102ABFC0(v17 - v18 + 1);
        ++a4[3];
        v19 = *a4;
        v20 = a4[3] - v17 - 1;
        a4[4] = *a4;
        if ( v20 > 0 )
          memcpy((void *)(v19 + 4 * v17 + 4), (const void *)(v19 + 4 * v17), 4 * v20);
        v21 = (_DWORD *)(*a4 + 4 * v17);
        if ( v21 )
          *v21 = *v16;
      }
      v16 += 4;
      --v37;
    }
    while ( v37 );
  }
  return 1;
}
