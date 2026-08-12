void __thiscall sub_101B6540(
        _DWORD *this,
        __int16 *a2,
        char a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int16 a8,
        float a9,
        int a10)
{
  int v10; // ebx
  int *v11; // eax
  int v12; // eax
  int (__thiscall *v13)(__int16 *); // eax
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // edi
  int v22; // eax
  int v23; // edi
  int v24; // ecx
  double v25; // st7
  double v26; // st6
  int v27; // edi
  int v28; // ebx
  double v29; // rt0
  _DWORD *v30; // eax
  double v31; // st6
  int v32; // eax
  int v33; // esi
  int v34; // eax
  int (__thiscall *v35)(__int16 *); // eax
  int v36; // eax
  int v37; // edi
  int v38; // eax
  int v39; // edi
  int v40; // ebx
  _DWORD *v41; // eax
  _DWORD *v42; // eax
  int v43; // ebx
  int v44; // edi
  wchar_t *v45; // esi
  int v46; // eax
  float *v47; // edi
  int v48; // esi
  int v49; // eax
  int v50; // edi
  int v51; // esi
  double v52; // st7
  wchar_t Buffer[128]; // [esp+18h] [ebp-10Ch] BYREF
  char v54[4]; // [esp+118h] [ebp-Ch] BYREF
  float *v55; // [esp+11Ch] [ebp-8h]
  int v56; // [esp+120h] [ebp-4h] BYREF
  int v57; // [esp+130h] [ebp+Ch]
  wchar_t *i; // [esp+130h] [ebp+Ch]
  int v59; // [esp+138h] [ebp+14h]
  int v60; // [esp+140h] [ebp+1Ch]
  int v61; // [esp+140h] [ebp+1Ch]
  int v62; // [esp+148h] [ebp+24h]
  float v63; // [esp+148h] [ebp+24h]
  int v64; // [esp+148h] [ebp+24h]
  int v65; // [esp+148h] [ebp+24h]
  int v66; // [esp+14Ch] [ebp+28h]

  v10 = (int)this;
  v55 = (float *)this;
  if ( a3 )
    v11 = (_DWORD *)((char *)this + 398);
  else
    v11 = (int *)(*(int (__thiscall **)(_DWORD *, char *))(this[14] + 228))(this + 14, v54);
  v56 = *v11;
  v12 = *(_DWORD *)(dword_1043CA1C + 48);
  if ( v12 )
  {
    if ( (unsigned int)(v12 - 2) <= 1 )
    {
      if ( !a2 )
      {
        if ( a3 )
          a8 = 255;
        sub_101B6270(v10, a4, a5, a6, a7, a8, a9, a10);
        return;
      }
      sub_101B6270(v10, a4, a5, a6, a7, a8, a9, a10);
      v13 = *(int (__thiscall **)(__int16 *))(*(_DWORD *)a2 + 1208);
      HIBYTE(v56) = (int)(a9 * 0.0039215689 * (double)HIBYTE(v56));
      if ( v13(a2) )
      {
        v14 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)a2 + 1208))(a2);
        v15 = *(_DWORD *)(v14 + 160) - *(_DWORD *)(v14 + 156);
        v16 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)a2 + 1208))(a2);
        v17 = *(_DWORD *)(v16 + 168) - *(_DWORD *)(v16 + 164);
        if ( a3 && *(_DWORD *)(dword_1043CA1C + 48) == 3 )
          v18 = (int)(((double)a7 * 0.66666669 - (double)v17) * 0.5);
        else
          v18 = (a7 - v17) / 2;
        v66 = v18;
        if ( !(*(unsigned __int8 (__thiscall **)(__int16 *))(*(_DWORD *)a2 + 804))(a2) )
        {
          LOWORD(v62) = 255;
          BYTE2(v62) = 0;
          HIBYTE(v62) = HIBYTE(v56);
          v56 = v62;
        }
        v19 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)a2 + 1208))(a2);
        sub_100B37C0(v19, a4 + (a6 - v15) / 2, a5 + v66, v15, v17, &v56);
        v10 = (int)v55;
      }
      if ( a3 && (*(int (__thiscall **)(__int16 *))(*(_DWORD *)a2 + 1204))(a2) )
      {
        v20 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)a2 + 1204))(a2);
        v21 = *(_DWORD *)(v20 + 160) - *(_DWORD *)(v20 + 156);
        v22 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)a2 + 1204))(a2);
        v23 = (a6 - v21) / 2;
        v24 = *(_DWORD *)(dword_1043CA1C + 48) == 3
            ? (int)(((double)a7 * 0.66666669 - (double)(*(_DWORD *)(v22 + 168) - *(_DWORD *)(v22 + 164))) * 0.5)
            : (a7 - (*(_DWORD *)(v22 + 168) - *(_DWORD *)(v22 + 164))) / 2;
        v25 = *(float *)(v10 + 280);
        HIBYTE(v56) = -1;
        v63 = v25;
        if ( v25 > 0.0 )
        {
          v26 = 1.0;
          v27 = a4 + v23;
          v28 = v24 + a5;
          while ( 1 )
          {
            if ( v26 > v25 )
              HIBYTE(v56) = (int)(v25 * (double)HIBYTE(v56));
            v30 = (_DWORD *)(*(int (__thiscall **)(__int16 *))(*(_DWORD *)a2 + 1204))(a2);
            sub_100B3BE0(v30, v27, v28, &v56);
            v31 = v63 - 1.0;
            v63 = v31;
            if ( v31 <= 0.0 )
              break;
            v29 = v31;
            v26 = 1.0;
            v25 = v29;
          }
          v10 = (int)v55;
        }
      }
    }
  }
  else
  {
    sub_101B6270(v10, a4, a5, a6, a7, a8, a9, a10);
    v35 = *(int (__thiscall **)(__int16 *))(*(_DWORD *)a2 + 1204);
    HIBYTE(v56) = (int)(a9 * 0.0039215689 * (double)HIBYTE(v56));
    if ( v35(a2) )
    {
      v36 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)a2 + 1204))(a2);
      v37 = *(_DWORD *)(v36 + 160) - *(_DWORD *)(v36 + 156);
      v38 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)a2 + 1204))(a2);
      v39 = (a6 - v37) / 2;
      if ( a3 && *(_DWORD *)(dword_1043CA1C + 48) )
        v40 = (int)(((double)a7 * 0.66666669 - (double)(*(_DWORD *)(v38 + 168) - *(_DWORD *)(v38 + 164))) * 0.5);
      else
        v40 = (a7 - (*(_DWORD *)(v38 + 168) - *(_DWORD *)(v38 + 164))) / 2;
      if ( (*(unsigned __int8 (__thiscall **)(__int16 *))(*(_DWORD *)a2 + 804))(a2) )
      {
        if ( a3 )
        {
          HIBYTE(v56) = (int)a9;
          v41 = (_DWORD *)(*(int (__thiscall **)(__int16 *))(*(_DWORD *)a2 + 1204))(a2);
          sub_100B3BE0(v41, v39 + a4, v40 + a5, &v56);
        }
      }
      else
      {
        BYTE2(v60) = 0;
        LOWORD(v60) = 255;
        HIBYTE(v60) = HIBYTE(v56);
        v56 = v60;
      }
      v42 = (_DWORD *)(*(int (__thiscall **)(__int16 *))(*(_DWORD *)a2 + 1208))(a2);
      sub_100B3BE0(v42, a4 + v39, a5 + v40, &v56);
      v10 = (int)v55;
    }
  }
  if ( *(_DWORD *)(dword_1043CA1C + 48) != 2 )
  {
    v56 = *(_DWORD *)(v10 + 373);
    v32 = sub_1000AA30(a2);
    if ( a3 )
    {
      v33 = v32 + 184;
      v34 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA78 + 8))(dword_1047CA78, v32 + 184);
      if ( v34 )
      {
        _snwprintf(Buffer, 0x7Fu, L"%s", v34);
        Buffer[127] = 0;
      }
      else
      {
        (*(void (__thiscall **)(int, int, wchar_t *, int))(*(_DWORD *)dword_1047CA78 + 12))(
          dword_1047CA78,
          v33,
          Buffer,
          256);
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, v56);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, *(_DWORD *)(v10 + 272));
      v43 = 0;
      v44 = 0;
      v64 = 0;
      v57 = 0;
      v61 = 0;
      v45 = Buffer;
      if ( !Buffer[0] )
        goto LABEL_58;
      do
      {
        v46 = *v45;
        if ( v46 == 10 )
        {
          if ( v43 > v57 )
            v57 = v43;
          if ( !v61 )
            v61 = v43;
          v43 = 0;
        }
        else if ( v46 != 13 )
        {
          v43 += (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C + 284))(
                   dword_1047CA6C,
                   *((_DWORD *)v55 + 68),
                   *v45);
          ++v44;
        }
        ++v45;
      }
      while ( *v45 );
      v64 = v44;
      if ( v43 > v57 )
        v57 = v43;
      if ( !v61 )
LABEL_58:
        v61 = v57;
      v47 = v55;
      v59 = a5 + (int)v55[88];
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(
        dword_1047CA6C,
        (int)((v55[74] - (double)v61) * 0.5 + (double)a4),
        v59);
      v48 = (int)((double)v64 * v47[104]);
      v65 = v48;
      for ( i = Buffer; v48 > 0; ++i )
      {
        v49 = *i;
        if ( v49 == 10 )
        {
          v50 = dword_1047CA6C;
          v51 = *(_DWORD *)dword_1047CA6C;
          v52 = (double)(*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_1047CA6C + 268))(*((_DWORD *)v55 + 68)) * 1.1
              + (double)v59;
          (*(void (__thiscall **)(int, int, int))(v51 + 80))(v50, a4 + (a6 - v43) / 2, (int)v52);
          v48 = v65;
        }
        else if ( v49 != 13 )
        {
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 92))(dword_1047CA6C, v49, 0);
          v65 = --v48;
        }
      }
    }
  }
}
