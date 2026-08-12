void __fastcall sub_10134720(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  int v11; // edi
  double v12; // st7
  double v13; // st6
  double v14; // st6
  int v15; // eax
  int v16; // ecx
  int v17; // ebx
  int v18; // eax
  _BYTE *v19; // esi
  bool v20; // zf
  int v21; // ebx
  int v22; // ecx
  _BYTE *v23; // esi
  int v24; // [esp+4h] [ebp-1Ch] BYREF
  int v25; // [esp+8h] [ebp-18h]
  int v26; // [esp+Ch] [ebp-14h]
  int v27; // [esp+10h] [ebp-10h]
  int v28; // [esp+18h] [ebp-8h]
  int v29; // [esp+1Ch] [ebp-4h]
  int v30; // [esp+40h] [ebp+20h]
  int v31; // [esp+40h] [ebp+20h]
  int v32; // [esp+48h] [ebp+28h]

  v11 = a1;
  LOWORD(a1) = 0;
  if ( *(_DWORD *)(dword_1043985C + 48) && a11 > 1 )
  {
    *(_DWORD *)(v11 + 57744) = 0;
    v29 = 0;
    if ( a10 > 0 )
    {
      v32 = a9 + a10 - 1;
      do
      {
        v12 = 24.0;
        v13 = *(float *)(a8 + 12 * (((unsigned __int16)*(_DWORD *)(v11 + 57652) - (_WORD)a1) & 0x3FF)) * 0.33333334;
        v28 = a8 + 12 * (((unsigned __int16)*(_DWORD *)(v11 + 57652) - (_WORD)a1) & 0x3FF);
        v14 = v13 * 24.0;
        if ( v14 < 24.0 )
          v12 = v14;
        v15 = (int)v12;
        v24 = v32;
        v26 = 1;
        v27 = 1;
        if ( (int)v12 >= 8 )
        {
          v16 = 0;
          v17 = a6 + a4 - 12;
          v18 = v15 - 8;
          v25 = v17;
          if ( !*(_DWORD *)(dword_1043973C + 48) )
          {
            v17 += 1 - v18;
            v25 = v17;
            v16 = v18 - 1;
          }
          if ( v16 < v18 )
          {
            v19 = (_BYTE *)(v16 + 76 + v11 + 2 * (v16 + 76));
            v30 = v18 - v16;
            do
            {
              sub_10134600((int *)v11, &v24, v19, v19, 255, 255);
              --v17;
              v19 += 3;
              v20 = v30-- == 1;
              v25 = v17;
            }
            while ( !v20 );
          }
          goto LABEL_19;
        }
        v21 = a6 + a4 - 4 - v15;
        v22 = 8 - v15;
        v20 = *(_DWORD *)(dword_1043973C + 48) == 0;
        v25 = v21;
        if ( v20 )
        {
          v22 = 1;
        }
        else if ( v22 <= 0 )
        {
          goto LABEL_19;
        }
        v23 = (_BYTE *)(v15 + 68 + v11 + 2 * (v15 + 68));
        v31 = v22;
        do
        {
          sub_10134600((int *)v11, &v24, v23, v23, 255, 255);
          --v21;
          v23 += 3;
          v20 = v31-- == 1;
          v25 = v21;
        }
        while ( !v20 );
LABEL_19:
        v25 = a6 + a4 - 12;
        sub_10134600((int *)v11, &v24, (_BYTE *)(v11 + 282), (_BYTE *)(v11 + 282), 255, 255);
        v20 = *(_BYTE *)(v28 + 8) == 0;
        v25 = a6 + a4 - 3;
        if ( v20 )
          sub_10134600((int *)v11, &v24, (_BYTE *)(v11 + 279), (_BYTE *)(v11 + 279), 200, 200);
        else
          sub_10134600((int *)v11, &v24, (_BYTE *)(v11 + 276), (_BYTE *)(v11 + 276), 255, 255);
        --v32;
        a1 = v29 + 1;
        v29 = a1;
      }
      while ( a1 < a10 );
    }
    sub_10134030(v11, 1);
  }
}
