void __thiscall sub_100B1010(int this)
{
  int v2; // ebx
  double v3; // st7
  int v4; // ecx
  double v5; // st6
  int v6; // ecx
  double v7; // st6
  double v8; // st6
  int v9; // eax
  int *v10; // eax
  _DWORD *v11; // edi
  int v12; // eax
  int v13; // edx
  _DWORD *v14; // eax
  int v15; // edx
  double v16; // st7
  int v17; // edi
  double v18; // st7
  int v19; // ebx
  double v20; // st7
  double v21; // st7
  int (__thiscall *v22)(int, _DWORD); // edx
  int v23; // eax
  int v24; // ebx
  int v25; // edx
  int v26; // eax
  int v27; // ebx
  wchar_t Buffer[16]; // [esp+4h] [ebp-48h] BYREF
  int v29; // [esp+24h] [ebp-28h] BYREF
  int v30; // [esp+28h] [ebp-24h]
  int v31; // [esp+2Ch] [ebp-20h]
  int v32; // [esp+30h] [ebp-1Ch] BYREF
  int v33; // [esp+34h] [ebp-18h]
  int v34; // [esp+38h] [ebp-14h]
  int v35; // [esp+3Ch] [ebp-10h]
  int v36; // [esp+40h] [ebp-Ch] BYREF
  float v37; // [esp+44h] [ebp-8h]
  __int16 v38; // [esp+48h] [ebp-4h]
  char v39; // [esp+4Bh] [ebp-1h]

  if ( *(_BYTE *)(this + 236) )
  {
    *(_BYTE *)(this + 236) = 0;
  }
  else
  {
    *(_BYTE *)(this + 270) = 0;
    sub_102361D0(&v32, &v29);
    v31 = 0;
    if ( *(int *)(this + 220) > 0 )
    {
      v2 = 0;
      v35 = 0;
      do
      {
        v3 = 255.0;
        v4 = v2 + *(_DWORD *)(this + 208);
        if ( *(_DWORD *)v4 )
        {
          v5 = *(float *)(dword_1043C9D4 + 44) + *((float *)off_103DC81C + 3);
          if ( v5 > *(float *)(v4 + 4) )
            v5 = *(float *)(v4 + 4);
          *(float *)(v4 + 4) = v5;
          v6 = v2 + *(_DWORD *)(this + 208);
          if ( *((float *)off_103DC81C + 3) < (double)*(float *)(v6 + 4) )
          {
            v7 = *(float *)(v6 + 4) - *((float *)off_103DC81C + 3);
            v36 = dword_1042FB88;
            v8 = v7 * 80.0;
            v37 = v8;
            if ( v8 < 255.0 )
              v3 = v8;
            v34 = 0;
            v39 = 1;
            v33 = (int)v3;
            HIBYTE(v36) = (int)v3;
            v9 = *(_DWORD *)v6 - 1;
            v33 = 0;
            HIBYTE(v38) = 0;
            switch ( v9 )
            {
              case 0:
                v10 = (int *)sub_10150040(*(_DWORD *)(v6 + 12));
                if ( v10 && (v10[112] >= 0 || v10[113] >= 0) )
                {
                  v11 = (_DWORD *)v10[468];
                  v12 = sub_1014FF90(*(_DWORD *)(*(_DWORD *)(this + 208) + v2 + 12));
                  v13 = *(_DWORD *)(v2 + *(_DWORD *)(this + 208) + 8);
                  v34 = v12;
                  v33 = v13;
                }
                else
                {
                  v14 = (_DWORD *)sub_1014FF90(*(_DWORD *)(*(_DWORD *)(this + 208) + v2 + 12));
                  v15 = *(_DWORD *)(v2 + *(_DWORD *)(this + 208) + 8);
                  v11 = v14;
                  v34 = 0;
                  v33 = v15;
                }
                goto LABEL_30;
              case 1:
                v17 = sub_1006BE10((unsigned int *)(v6 + 16));
                if ( !v17 )
                  return;
                if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v17 + 812))(v17) )
                {
                  v18 = 255.0;
                  v36 = dword_1042FB8C;
                  if ( v37 < 255.0 )
                    v18 = v37;
                  v30 = (int)v18;
                  HIBYTE(v36) = (int)v18;
                }
                v11 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v17 + 1208))(v17);
LABEL_29:
                v39 = 0;
LABEL_30:
                if ( !v11 )
                  break;
                if ( HIBYTE(v36) )
                  *(_BYTE *)(this + 270) = 1;
                v30 = v31 + 1;
                v19 = (int)((double)v29 - (double)(v31 + 1) * *(float *)(this + 272));
                v30 = v32 + v11[39] - v11[40];
                v20 = (double)v30 - *(float *)(this + 280);
                v30 = (int)v20;
                if ( v39 )
                  v19 += (v11[42] - v11[41]) / 2;
                sub_100B3BE0((int)v20, v19, &v36);
                if ( v34 )
                {
                  v21 = (double)v30;
                  v30 = *(_DWORD *)(v34 + 160) - *(_DWORD *)(v34 + 156);
                  sub_100B3BE0((int)(v21 - (double)v30 * 1.25), v19, &v36);
                }
                if ( v33 )
                {
                  _snwprintf(Buffer, 0x10u, L"%i", *(_DWORD *)(v35 + *(_DWORD *)(this + 208) + 8));
                  v22 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268);
                  v30 = v11[42] - v11[41];
                  v23 = v22(dword_1047CA6C, *(_DWORD *)(this + 296));
                  v24 = (v23 - v30) / -2 + v19;
                  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(
                    dword_1047CA6C,
                    *(_DWORD *)(this + 296));
                  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, v36);
                  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(
                    dword_1047CA6C,
                    (int)((double)v32 - *(float *)(this + 288)),
                    v24);
                  (*(void (__thiscall **)(int, wchar_t *, _DWORD))(*(_DWORD *)dword_1047CA6C + 492))(
                    dword_1047CA6C,
                    Buffer,
                    0);
LABEL_39:
                  v2 = v35;
                  break;
                }
                if ( !HIBYTE(v38) )
                  goto LABEL_39;
                v25 = *(_DWORD *)(this + 304);
                v30 = v11[42] - v11[41];
                v26 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, v25);
                v27 = (v26 - v30) / -2 + v19;
                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(
                  dword_1047CA6C,
                  *(_DWORD *)(this + 304));
                (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, v36);
                (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(
                  dword_1047CA6C,
                  (int)((double)v32 - *(float *)(this + 288)),
                  v27);
                (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 492))(
                  dword_1047CA6C,
                  this + 238,
                  0);
                v2 = v35;
                break;
              case 2:
                if ( !*(_DWORD *)(v6 + 12) )
                  break;
                v11 = *(_DWORD **)(v6 + 20);
                goto LABEL_29;
              case 3:
                v16 = 255.0;
                v11 = (_DWORD *)sub_1014FF90(*(_DWORD *)(v6 + 12));
                v33 = 0;
                HIBYTE(v38) = 1;
                v36 = dword_1042FB8C;
                if ( v37 < 255.0 )
                  v16 = v37;
                v30 = (int)v16;
                HIBYTE(v36) = (int)v16;
                goto LABEL_30;
              default:
                break;
            }
          }
          else
          {
            *(_DWORD *)v6 = 0;
            *(_DWORD *)(v6 + 4) = 0;
            *(_DWORD *)(v6 + 8) = 0;
            *(_DWORD *)(v6 + 12) = 0;
            *(_DWORD *)(v6 + 16) = 0;
            *(_DWORD *)(v6 + 20) = 0;
            sub_100B0FC0((_DWORD *)(this - 44));
          }
        }
        v2 += 24;
        ++v31;
        v35 = v2;
      }
      while ( v31 < *(_DWORD *)(this + 220) );
    }
  }
}
