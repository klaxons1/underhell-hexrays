int __thiscall sub_10180660(_DWORD *this, int a2)
{
  int v3; // ebx
  int result; // eax
  int v5; // ebx
  int v6; // ebx
  float *v7; // ebx
  float *v8; // ebx
  float *v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // eax
  int v13; // esi
  const char *v14; // eax
  const char *v15; // eax
  const char **v16; // eax
  const char **v17; // ebx
  _DWORD *v18; // esi
  int v19; // ecx
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // edx
  const char ***v24; // ecx
  int v25; // [esp+10h] [ebp-4h]
  int v26; // [esp+1Ch] [ebp+8h]

  v3 = this[70];
  if ( v3 )
  {
    sub_10180210((int *)this[70]);
    sub_10034930(v3);
    this[70] = 0;
  }
  result = sub_100DDA40(104);
  if ( result )
  {
    *(_DWORD *)(result + 64) = 0;
    *(_DWORD *)(result + 68) = 0;
    *(_DWORD *)(result + 72) = 0;
    *(_DWORD *)(result + 76) = 0;
    *(_DWORD *)(result + 80) = 0;
    *(_DWORD *)(result + 84) = 0;
    *(_DWORD *)(result + 88) = 0;
    *(_DWORD *)(result + 92) = 0;
    *(_DWORD *)(result + 96) = 0;
    *(_DWORD *)(result + 100) = 0;
    *(_DWORD *)result = 0;
    *(_DWORD *)(result + 4) = 0;
    *(_DWORD *)(result + 8) = -1;
    *(float *)(result + 16) = 0.0;
    *(float *)(result + 20) = 0.0;
    *(float *)(result + 24) = 0.0;
    *(float *)(result + 28) = 0.0;
    *(float *)(result + 32) = 0.0;
    *(float *)(result + 36) = 0.0;
    *(float *)(result + 48) = 0.0;
    *(float *)(result + 52) = 0.0;
    *(float *)(result + 56) = 0.0;
    *(_BYTE *)(result + 60) = 0;
  }
  else
  {
    result = 0;
  }
  this[70] = result;
  if ( result )
  {
    *(_DWORD *)result = sub_1012D330(a2, "modelname", 0);
    v5 = this[70];
    *(_DWORD *)(v5 + 4) = sub_1012D330(a2, "modelname_hwm", 0);
    v6 = this[70];
    *(_DWORD *)(v6 + 8) = sub_1022A800("skin", -1);
    v7 = (float *)this[70];
    sub_1022A940("angles_x", 0.0);
    sub_1022A940("angles_y", 0.0);
    sub_1022A940("angles_z", 0.0);
    v7[4] = 0.0;
    v7[5] = 0.0;
    v7[6] = 0.0;
    v8 = (float *)this[70];
    sub_1022A940("origin_x", 110.0);
    sub_1022A940("origin_y", 5.0);
    sub_1022A940("origin_z", 5.0);
    v8[7] = 110.0;
    v8[8] = 5.0;
    v8[9] = 5.0;
    v9 = (float *)this[70];
    sub_1022A940("frame_origin_x", 110.0);
    sub_1022A940("frame_origin_y", 5.0);
    sub_1022A940("frame_origin_z", 5.0);
    v9[12] = 110.0;
    v9[13] = 5.0;
    v9[14] = 5.0;
    v10 = this[70];
    *(_DWORD *)(v10 + 12) = sub_1012D330(a2, "vcd", 0);
    v11 = this[70];
    *(_BYTE *)(v11 + 60) = sub_1022A800("spotlight", 0) == 1;
    v12 = this[70];
    *(float *)(v12 + 40) = 0.0;
    *(float *)(v12 + 44) = 0.0;
    result = sub_10229C90(a2);
    v13 = result;
    v26 = result;
    if ( result )
    {
      while ( 1 )
      {
        v14 = (const char *)sub_10229A00(v13);
        if ( !_stricmp(v14, "animation") )
        {
          (*(void (__thiscall **)(_DWORD *, int))(*this + 884))(this, v13);
        }
        else
        {
          v15 = (const char *)sub_10229A00(v13);
          if ( !_stricmp(v15, "attached_model") )
          {
            v16 = (const char **)sub_100DDA40(8);
            v17 = v16;
            if ( v16 )
            {
              *v16 = 0;
              v16[1] = 0;
              *v16 = sub_1012D330(v13, "modelname", 0);
              v17[1] = (const char *)sub_1022A800("skin", -1);
              v18 = (_DWORD *)this[70];
              v20 = v18[22];
              v25 = v18[24];
              v19 = v25;
              if ( v25 + 1 > v20 )
              {
                sub_1010AFF0(v18 + 21, v25 - v20 + 1);
                v19 = v25;
              }
              ++v18[24];
              v21 = v18[21];
              v22 = v18[24] - v19 - 1;
              v18[25] = v21;
              if ( v22 > 0 )
              {
                memcpy((void *)(v21 + 4 * v19 + 4), (const void *)(v21 + 4 * v19), 4 * v22);
                v19 = v25;
              }
              v23 = v18[21];
              v13 = v26;
              v24 = (const char ***)(v23 + 4 * v19);
              if ( v24 )
                *v24 = v17;
            }
          }
        }
        result = sub_1021F0F0(v13);
        v26 = result;
        if ( !result )
          break;
        v13 = result;
      }
    }
    *((_BYTE *)this + 312) = 1;
  }
  return result;
}
