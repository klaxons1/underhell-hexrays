_DWORD *__userpurge sub_10170B20@<eax>(
        int a1@<ecx>,
        float a2@<ebx>,
        float a3@<edi>,
        float a4@<esi>,
        int a5,
        int a6,
        float *a7,
        float *a8,
        float a9,
        float a10,
        _DWORD *a11,
        _DWORD *a12,
        char a13)
{
  _DWORD *result; // eax
  int v14; // edi
  int v15; // ebx
  int (__thiscall *v16)(int, int); // eax
  float *v17; // esi
  int v18; // edx
  double v19; // st7
  double (__stdcall *v20)(_DWORD, _DWORD); // eax
  double v21; // st7
  double (__stdcall *v22)(_DWORD, _DWORD); // eax
  double v23; // st7
  int v24; // esi
  int v25; // edx
  double (__stdcall *v26)(_DWORD); // eax
  double v27; // st7
  double (__thiscall *v28)(int); // eax
  double v29; // st7
  double (__thiscall *v30)(int, _DWORD, _DWORD); // eax
  double v31; // st7
  double v32; // st7
  double v33; // st7
  double v34; // st6
  int v35; // ebx
  unsigned __int16 v36; // ax
  int v37; // edi
  int *v38; // eax
  _BYTE v42[48]; // [esp+84h] [ebp-74h] BYREF
  float v43[3]; // [esp+B4h] [ebp-44h] BYREF
  float v44; // [esp+C0h] [ebp-38h]
  float v45; // [esp+C4h] [ebp-34h]
  float v46[3]; // [esp+CCh] [ebp-2Ch] BYREF
  float v47; // [esp+D8h] [ebp-20h]
  float v48; // [esp+DCh] [ebp-1Ch]
  float v49; // [esp+E0h] [ebp-18h]
  int v50; // [esp+E4h] [ebp-14h]
  float v51; // [esp+E8h] [ebp-10h]
  _DWORD *v52; // [esp+ECh] [ebp-Ch]
  int v53; // [esp+F0h] [ebp-8h]
  int v54; // [esp+F4h] [ebp-4h]
  int v55; // [esp+100h] [ebp+8h]
  _DWORD *v56; // [esp+104h] [ebp+Ch]

  result = a12;
  v50 = a1;
  if ( a12 )
  {
    result = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, a12);
    v14 = (int)result;
    v52 = result;
    if ( result )
    {
      v15 = a13;
      v16 = *(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 32);
      v53 = a13;
      v17 = a7;
      v54 = v16(dword_10413178, v14);
      if ( !a11 )
        a11 = (_DWORD *)(int)(((a7[2] + *a7) * a7[1] + a7[2] * *a7) * 0.002314814814814815);
      if ( (int)a11 > *(_DWORD *)(dword_10443CB4 + 48) )
        a11 = *(_DWORD **)(dword_10443CB4 + 48);
      result = (_DWORD *)sub_101F0B70(a6, a5, v42);
      v56 = 0;
      if ( (int)a11 > 0 )
      {
        while ( 1 )
        {
          v18 = *(_DWORD *)dword_10413198;
          v51 = *v17;
          v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(v18 + 4))(dword_10413198, -0.5, 0.5);
          v46[0] = v19 * v51;
          v20 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
          v51 = v17[1];
          v21 = v20(-0.5, 0.5);
          v46[1] = v21 * v51;
          v22 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
          v51 = v17[2];
          v23 = v22(-0.5, 0.5);
          v46[2] = v23 * v51;
          sub_101ED860(v46, v42, v43);
          result = sub_1016FF80(v50, v43, v14);
          v24 = (int)result;
          if ( !result )
            break;
          result[502] = v15;
          if ( (*(int (__thiscall **)(int, int, float, float, float))(*(_DWORD *)dword_10413178 + 36))(
                 dword_10413178,
                 v14,
                 COERCE_FLOAT(LODWORD(a4)),
                 COERCE_FLOAT(LODWORD(a2)),
                 COERCE_FLOAT(LODWORD(a3))) == 2 )
          {
            v51 = COERCE_FLOAT(
                    (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(
                      dword_10413198,
                      0,
                      v54 - 1));
            *(float *)(v24 + 2072) = (float)SLODWORD(v51);
          }
          else if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 36))(dword_10413178, v14) == 3 )
          {
            *(_DWORD *)(v24 + 1200) = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(
                                        dword_10413198,
                                        0,
                                        v54 - 1);
          }
          *(_DWORD *)(v24 + 1980) |= 0xA8u;
          if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 255) < 200 )
          {
            *(_DWORD *)(v24 + 1980) |= 4u;
            *(float *)(v24 + 2032) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198
                                                                                            + 4))(
                                       dword_10413198,
                                       -256.0,
                                       255.0);
            *(float *)(v24 + 2036) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198
                                                                                            + 4))(
                                       dword_10413198,
                                       -256.0,
                                       255.0);
            *(float *)(v24 + 2040) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198
                                                                                            + 4))(
                                       dword_10413198,
                                       -256.0,
                                       255.0);
          }
          if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 255) < 100
            && (a13 & 0x10) != 0 )
          {
            *(_DWORD *)(v24 + 1980) |= 0x10u;
          }
          if ( (a13 & 0x21) != 0 )
          {
            sub_10035090((_BYTE *)v24, 2, 0);
            LOWORD(v55) = *(_DWORD *)(v24 + 88);
            BYTE2(v55) = BYTE2(*(_DWORD *)(v24 + 88));
            HIBYTE(v55) = 0x80;
            if ( *(_DWORD *)(v24 + 88) != v55 )
              *(_DWORD *)(v24 + 88) = v55;
            *(_DWORD *)(v24 + 2044) = 128;
            *(float *)(v24 + 2004) = 0.30000001;
          }
          else
          {
            sub_10035090((_BYTE *)v24, 0, 0);
            *(_DWORD *)(v24 + 2044) = 255;
          }
          v25 = *(_DWORD *)dword_10413198;
          v47 = a8[2];
          v48 = a8[1];
          v26 = *(double (__stdcall **)(_DWORD))(v25 + 4);
          v51 = *a8;
          v49 = -a9;
          a3 = a9;
          v27 = v26(LODWORD(v49));
          v28 = *(double (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 4);
          v44 = v27 + v51;
          a2 = a9;
          a4 = v49;
          v29 = v28(dword_10413198);
          v30 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
          v45 = v29 + v48;
          v31 = v30(dword_10413198, 0.0, LODWORD(a9));
          v32 = v31 + v47;
          *(float *)(v24 + 2108) = v44;
          *(float *)(v24 + 2112) = v45;
          *(float *)(v24 + 2116) = v32;
          v33 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  0.0,
                  1.0);
          v34 = *((float *)off_103DC81C + 3);
          *(_DWORD *)(v24 + 1976) = sub_1016E550;
          *(float *)(v24 + 1984) = v33 + v34 + a10;
          if ( (a13 & 0x80) == 0 )
            ++dword_103E9D20;
          v35 = dword_103E9D20;
          v36 = sub_10062B80(&dword_103E9D04, 0);
          v37 = v36;
          sub_10063940((int)&dword_103E9D04, 0xFFFFu, v36);
          v38 = (int *)(dword_103E9D04 + 12 * v37);
          if ( v38 )
          {
            *v38 = v35;
            v38[1] = v24;
          }
          result = (_DWORD *)((char *)v56 + 1);
          v56 = result;
          if ( (int)result >= (int)a11 )
            break;
          v15 = v53;
          v14 = (int)v52;
          v17 = a7;
        }
      }
    }
  }
  return result;
}
