_BYTE *__userpurge sub_10171250@<eax>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        int a4@<esi>,
        float *a5,
        float *a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  double v10; // st7
  double v11; // st7
  int v13; // esi
  _BYTE *result; // eax
  int v15; // ebx
  _BYTE *v17; // esi
  double v18; // st7
  double v19; // st7
  float v21; // [esp+2Ch] [ebp-28h]
  float v22; // [esp+30h] [ebp-24h]
  float v23; // [esp+34h] [ebp-20h]
  float v24; // [esp+38h] [ebp-1Ch]
  float v25; // [esp+3Ch] [ebp-18h]
  _BYTE *v26; // [esp+40h] [ebp-14h]
  float v27; // [esp+44h] [ebp-10h]
  float v29; // [esp+4Ch] [ebp-8h]
  float v30; // [esp+50h] [ebp-4h]
  float v31; // [esp+60h] [ebp+Ch]
  float v32; // [esp+60h] [ebp+Ch]
  float v33; // [esp+60h] [ebp+Ch]
  int v34; // [esp+64h] [ebp+10h]

  v10 = (double)a10 * 0.0099999998;
  v30 = v10;
  v11 = v10 * 1.5;
  v29 = v11;
  if ( v11 > 1.0 )
    v29 = 1.0;
  v13 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, a7, a3, a4);
  v34 = v13;
  if ( !v13 )
    return (_BYTE *)Warning("No model %d!\n", a7);
  result = (_BYTE *)((*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413178 + 32))(dword_10413178, v13, a2) - 1);
  v15 = 0;
  v26 = result;
  if ( a8 > 0 )
  {
    while ( 1 )
    {
      result = sub_1016FF80(a1, a5, v13);
      v17 = result;
      if ( !result )
        break;
      sub_10035090(result, 4, 0);
      if ( *((_DWORD *)v17 + 22) != -1 )
        *((_DWORD *)v17 + 22) = -1;
      *((_DWORD *)v17 + 495) |= 0x88u;
      *((float *)v17 + 515) = 0.5;
      *((_DWORD *)v17 + 511) = 255;
      v17[84] = 14;
      *((float *)v17 + 500) = 2.0;
      v31 = *a6;
      v27 = -v30;
      v23 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              LODWORD(v27),
              LODWORD(v30))
          + v31;
      v32 = a6[1];
      v24 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              LODWORD(v27),
              LODWORD(v30))
          + v32;
      v33 = a6[2];
      v25 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(0.0, LODWORD(v29)) + v33;
      v18 = (double)a9;
      v22 = 1.2 * v18;
      v21 = v18 * 0.8;
      v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              LODWORD(v21),
              LODWORD(v22));
      *((float *)v17 + 527) = v23 * v19;
      *((float *)v17 + 528) = v19 * v24;
      *((float *)v17 + 529) = v19 * v25;
      sub_10034A30((float *)v17, a5);
      *((float *)v17 + 496) = *((float *)off_103DC81C + 3) + 0.35;
      result = (_BYTE *)(*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)dword_10413198 + 8))(
                          dword_10413198,
                          0,
                          v26);
      ++v15;
      *((float *)v17 + 518) = (float)(int)result;
      if ( v15 >= a8 )
        break;
      v13 = v34;
    }
  }
  return result;
}
