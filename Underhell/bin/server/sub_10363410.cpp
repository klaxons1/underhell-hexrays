void __thiscall sub_10363410(int this)
{
  _DWORD *v1; // ebx
  bool v2; // zf
  _DWORD *v3; // esi
  int v4; // eax
  unsigned int v5; // eax
  _DWORD *v6; // edx
  int v7; // ecx
  int v8; // edi
  int v9; // eax
  int v10; // esi
  int v11; // ebx
  int v12; // edi
  int v13; // eax
  int *v14; // ecx
  _DWORD *v15; // edi
  int v16; // ecx
  int v17; // esi
  int *v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  float *v22; // esi
  int *v23; // ecx
  int v24; // ecx
  _BYTE *v25; // esi
  int *v26; // ecx
  char *String1[5]; // [esp+10h] [ebp-20h]
  _DWORD *v28; // [esp+24h] [ebp-Ch]
  int v29; // [esp+28h] [ebp-8h]
  _DWORD *v30; // [esp+2Ch] [ebp-4h]

  v1 = (_DWORD *)this;
  v2 = *(_BYTE *)(this + 4289) == 0;
  v28 = (_DWORD *)this;
  if ( v2 )
  {
    sub_10360B50((_DWORD *)this);
  }
  else
  {
    sub_103631F0((_DWORD *)this);
    v3 = v1 + 1088;
    v29 = 0;
    v30 = v1 + 1088;
    do
    {
      if ( *v3 == -1 || off_1061BE18[4 * (*v3 & 0xFFF) + 2] != *v3 >> 12 || !off_1061BE18[4 * (*v3 & 0xFFF) + 1] )
      {
        String1[0] = "physgun";
        String1[1] = "thumb";
        String1[2] = "pinky";
        String1[3] = "index";
        v4 = sub_100FB5C0("sprites/physcannon_bluelight2.vmt", 5.0);
        if ( v4 )
          *v3 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
        else
          *v3 = -1;
        v5 = v1[1046];
        if ( v5 == -1 || off_1061BE18[4 * (v1[1046] & 0xFFF) + 2] != v5 >> 12 )
          v6 = 0;
        else
          v6 = (_DWORD *)off_1061BE18[4 * (v1[1046] & 0xFFF) + 1];
        if ( *v3 == -1 || off_1061BE18[4 * (*v3 & 0xFFF) + 2] != *v3 >> 12 )
          v7 = 0;
        else
          v7 = off_1061BE18[4 * (*v3 & 0xFFF) + 1];
        sub_100FAE40(v7, v6, v1);
        if ( *v3 == -1 || off_1061BE18[4 * (*v3 & 0xFFF) + 2] != *v3 >> 12 )
          v8 = 0;
        else
          v8 = off_1061BE18[4 * (*v3 & 0xFFF) + 1];
        v9 = sub_100BEF30((int)v1, String1[v29]);
        v10 = *(_DWORD *)(v8 + 816);
        v11 = v9;
        v12 = v8 + 872;
        if ( *(_DWORD *)(v12 + 4 * v10 - 4) != v9 )
        {
          v13 = v12 - 872;
          if ( *(_BYTE *)(v12 - 788) )
          {
            *(_BYTE *)(v13 + 88) |= 1u;
          }
          else
          {
            v14 = *(int **)(v13 + 24);
            if ( v14 )
              sub_100194B0(v14, 4 * v10 - 4 + 872);
          }
          *(_DWORD *)(v12 + 4 * v10 - 4) = v11;
        }
        v15 = v30;
        if ( *v30 == -1 || off_1061BE18[4 * (*v30 & 0xFFF) + 2] != *v30 >> 12 )
          v16 = 0;
        else
          v16 = off_1061BE18[4 * (*v30 & 0xFFF) + 1];
        v17 = v16 + 116;
        if ( *(_BYTE *)(v16 + 119) != 0xFF )
        {
          if ( *(_BYTE *)(v16 + 84) )
          {
            *(_BYTE *)(v16 + 88) |= 1u;
          }
          else
          {
            v18 = *(int **)(v16 + 24);
            if ( v18 )
              sub_100194B0(v18, 116);
          }
          *(_BYTE *)(v17 + 3) = -1;
        }
        if ( *v15 == -1 || off_1061BE18[4 * (*v15 & 0xFFF) + 2] != *v15 >> 12 )
          v19 = 0;
        else
          v19 = off_1061BE18[4 * (*v15 & 0xFFF) + 1];
        sub_1005C620((_BYTE *)(v19 + 116), 255, 255, 255, HIBYTE(*(_DWORD *)(v19 + 116)));
        if ( *v15 == -1 || off_1061BE18[4 * (*v15 & 0xFFF) + 2] != *v15 >> 12 )
          v20 = 0;
        else
          v20 = off_1061BE18[4 * (*v15 & 0xFFF) + 1];
        v21 = *(_DWORD *)(v20 + 928);
        v22 = (float *)(v20 + 928);
        *(float *)&String1[4] = 5.5;
        if ( v21 != COERCE_INT(5.5) )
        {
          if ( *(_BYTE *)(v20 + 84) )
          {
            *(_BYTE *)(v20 + 88) |= 1u;
          }
          else
          {
            v23 = *(int **)(v20 + 24);
            if ( v23 )
              sub_100194B0(v23, 928);
          }
          *v22 = 5.5;
        }
        if ( *v15 == -1 || off_1061BE18[4 * (*v15 & 0xFFF) + 2] != *v15 >> 12 )
          v24 = 0;
        else
          v24 = off_1061BE18[4 * (*v15 & 0xFFF) + 1];
        v25 = (_BYTE *)(v24 + 113);
        if ( *(_BYTE *)(v24 + 113) != 5 )
        {
          if ( *(_BYTE *)(v24 + 84) )
          {
            *(_BYTE *)(v24 + 88) |= 1u;
          }
          else
          {
            v26 = *(int **)(v24 + 24);
            if ( v26 )
              sub_100194B0(v26, 113);
          }
          *v25 = 5;
        }
        v1 = v28;
        v3 = v30;
      }
      ++v3;
      ++v29;
      v30 = v3;
    }
    while ( v29 < 4 );
  }
}
