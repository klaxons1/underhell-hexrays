int __thiscall sub_1003B860(int this)
{
  int result; // eax
  double v3; // st7
  int v4; // edi
  char v5; // al
  char v6; // al
  int v7; // ebx
  unsigned __int8 v8; // al
  _DWORD *v9; // ecx
  char v10; // al
  _DWORD *v11; // ecx
  unsigned __int8 v12; // al
  double v13; // st6
  long double v14; // st7
  unsigned __int8 v15; // al
  int v16; // eax
  float *v17; // eax
  float *v18; // eax
  float *v19; // eax
  double v20; // st7
  int v21; // edi
  void *v22; // ebx
  int v23; // eax
  int v24; // eax
  char v25; // [esp-Ch] [ebp-28h]
  float v26; // [esp+4h] [ebp-18h]
  float v27; // [esp+4h] [ebp-18h]
  float v28; // [esp+8h] [ebp-14h]
  float v29; // [esp+8h] [ebp-14h]
  float v30; // [esp+Ch] [ebp-10h]
  float v31; // [esp+Ch] [ebp-10h]
  int v32; // [esp+10h] [ebp-Ch]
  int v33; // [esp+14h] [ebp-8h]
  float v34; // [esp+18h] [ebp-4h]
  int v35; // [esp+18h] [ebp-4h]

  result = *(_DWORD *)(this + 156);
  if ( result != *((_DWORD *)off_103DC81C + 1) )
  {
    v32 = dword_1047CA8C;
    (*(void (**)(void))(*(_DWORD *)dword_1047CA8C + 100))();
    v3 = (double)*(int *)(this + 76) * 363.0;
    switch ( *(_BYTE *)(this + 80) )
    {
      case 1:
        v4 = (int)(sin(v3 + *((float *)off_103DC81C + 3) + *((float *)off_103DC81C + 3)) * 16.0
                 + (double)*(unsigned __int8 *)(this + 87));
        goto LABEL_13;
      case 2:
        v4 = (int)(sin(v3 + *((float *)off_103DC81C + 3) * 8.0) * 16.0 + (double)*(unsigned __int8 *)(this + 87));
        goto LABEL_13;
      case 3:
        v4 = (int)(sin(v3 + *((float *)off_103DC81C + 3) + *((float *)off_103DC81C + 3)) * 64.0
                 + (double)*(unsigned __int8 *)(this + 87));
        goto LABEL_13;
      case 4:
        v4 = (int)(sin(v3 + *((float *)off_103DC81C + 3) * 8.0) * 64.0 + (double)*(unsigned __int8 *)(this + 87));
        goto LABEL_13;
      case 5:
        v5 = *(_BYTE *)(this + 87);
        if ( v5 )
        {
          v6 = v5 - 1;
          goto LABEL_10;
        }
        v25 = 0;
        goto LABEL_11;
      case 6:
        v8 = *(_BYTE *)(this + 87);
        v9 = (_DWORD *)(this - 4);
        if ( v8 <= 3u )
          sub_10010170(v9, 0);
        else
          sub_10010170(v9, v8 - 4);
        goto LABEL_12;
      case 7:
        v10 = *(_BYTE *)(this + 87);
        v11 = (_DWORD *)(this - 4);
        if ( v10 == -1 )
          sub_10010170(v11, 255);
        else
          sub_10010170(v11, v10 + 1);
        goto LABEL_12;
      case 8:
        v12 = *(_BYTE *)(this + 87);
        if ( v12 >= 0xFCu )
        {
          v25 = -1;
        }
        else
        {
          v6 = v12 + 4;
LABEL_10:
          v25 = v6;
        }
LABEL_11:
        sub_10010170((_DWORD *)(this - 4), v25);
LABEL_12:
        v4 = *(unsigned __int8 *)(this + 87);
        goto LABEL_13;
      case 9:
        v13 = *((float *)off_103DC81C + 3) * 4.0;
        goto LABEL_26;
      case 0xA:
        v13 = *((float *)off_103DC81C + 3) * 16.0;
        goto LABEL_26;
      case 0xB:
        v13 = *((float *)off_103DC81C + 3) * 36.0;
LABEL_26:
        v14 = sin(v3 + v13);
        goto LABEL_27;
      case 0xC:
        v14 = sin(v3 + *((float *)off_103DC81C + 3) * 17.0)
            + sin(*((float *)off_103DC81C + 3) + *((float *)off_103DC81C + 3));
        goto LABEL_27;
      case 0xD:
        v14 = sin(v3 + *((float *)off_103DC81C + 3) * 23.0) + sin(*((float *)off_103DC81C + 3) * 16.0);
LABEL_27:
        if ( (int)(v14 * 20.0) < 0 )
          goto LABEL_28;
        goto LABEL_12;
      case 0xF:
      case 0x10:
        v17 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 4) + 36))(this - 4);
        v26 = *v17;
        v28 = v17[1];
        v30 = v17[2];
        v18 = (float *)sub_101422C0();
        v27 = v26 - *v18;
        v29 = v28 - v18[1];
        v31 = v30 - v18[2];
        v19 = (float *)sub_101422E0();
        v20 = v19[1] * v29 + *v19 * v27 + v19[2] * v31;
        v34 = v20;
        if ( *(_BYTE *)(this + 80) == 15 )
        {
          v34 = 1.0;
        }
        else if ( v20 <= 0.0 )
        {
LABEL_28:
          v4 = 0;
          goto LABEL_29;
        }
        sub_10010170((_DWORD *)(this - 4), 180);
        if ( v34 > 100.0 )
          v21 = (int)((1.0 - (v34 - 100.0) * 0.0025) * (double)*(unsigned __int8 *)(this + 87));
        else
          v21 = *(unsigned __int8 *)(this + 87);
        v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, -32, 31) + v21;
LABEL_13:
        if ( v4 > 255 )
        {
          v7 = 255;
          goto LABEL_30;
        }
LABEL_29:
        v7 = v4 < 0 ? 0 : v4;
LABEL_30:
        v15 = (*(int (__thiscall **)(int))(*(_DWORD *)(this - 4) + 556))(this - 4);
        if ( v15 != 0xFF )
        {
          v16 = (int)((double)v15 * 0.0039215689 * (0.0039215689 * (double)v7) * 255.0 + 0.5);
          if ( v16 <= 255 )
            LOBYTE(v7) = v16 < 0 ? 0 : v16;
          else
            LOBYTE(v7) = -1;
        }
        *(_BYTE *)(this + 81) = v7;
        *(_DWORD *)(this + 156) = *((_DWORD *)off_103DC81C + 1);
        if ( *(_WORD *)(this + 114) != 0xFFFF )
        {
          v22 = off_103DCDDC;
          v33 = *(unsigned __int16 *)(this + 114);
          v35 = *(_DWORD *)off_103DCDDC;
          v23 = (*(int (__thiscall **)(int))(*(_DWORD *)(this - 4) + 344))(this - 4);
          (*(void (__thiscall **)(void *, int, int))(v35 + 52))(v22, v33, v23);
        }
        v24 = *(unsigned __int16 *)(this + 298);
        if ( (_WORD)v24 != 0xFFFF )
          (*(void (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)off_103DD080 + 136))(
            off_103DD080,
            v24,
            (unsigned __int8)(-1 - *(_BYTE *)(this + 81)));
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v32 + 104))(v32);
        break;
      case 0x18:
        v4 = (int)(fabs(sin(v3 + *((float *)off_103DC81C + 3) * 12.0)) * 255.0);
        goto LABEL_13;
      default:
        if ( *(_BYTE *)(this + 112) )
          goto LABEL_12;
        v4 = 255;
        goto LABEL_29;
    }
  }
  return result;
}
