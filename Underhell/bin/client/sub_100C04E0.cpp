void __userpurge sub_100C04E0(float *a1@<ecx>, int a2@<ebx>, _DWORD *a3, int a4, int a5, int a6, float a7)
{
  int v7; // esi
  int v8; // edi
  double v9; // st7
  int v10; // ecx
  _DWORD *v11; // edi
  int v12; // esi
  int v13; // ebx
  int v14; // eax
  double v15; // st7
  _WORD *v16; // edi
  _WORD *v17; // eax
  _WORD *v18; // edx
  int v20; // eax
  float v21; // [esp+0h] [ebp-48h]
  int v23; // [esp+14h] [ebp-34h]
  int v24; // [esp+24h] [ebp-24h]
  int v25; // [esp+28h] [ebp-20h]
  float v26; // [esp+30h] [ebp-18h]
  int v27; // [esp+34h] [ebp-14h]
  int v28; // [esp+38h] [ebp-10h]
  int v29; // [esp+3Ch] [ebp-Ch]
  int v30; // [esp+40h] [ebp-8h]
  int v31; // [esp+44h] [ebp-4h]

  v7 = a5;
  v8 = *(_DWORD *)(a5 + 8236);
  v24 = v8;
  v9 = sub_100BF850((float *)a5, a1[101], a1[103], a1[105]);
  v10 = 0;
  v26 = v9;
  v27 = 0;
  if ( v8 > 0 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD **)(*(_DWORD *)(v7 + 8224) + 4 * v10);
      v25 = v11[7];
      v12 = a3[2] + v11[1];
      v13 = *a3 + *v11 + 3 + v11[2];
      v23 = *a3 + *v11 + 3;
      v31 = v11[3];
      if ( v10 == a6 )
      {
        v9 = v9 * a7;
      }
      else
      {
        if ( v12 < *(_DWORD *)(a4 + 8) )
          goto LABEL_20;
        v14 = *(_DWORD *)(a4 + 12);
        if ( v12 > v14 )
        {
          v15 = (double)(v12 - v14) / ((double)v31 * 0.25);
          v21 = v15;
          sub_101EE8A0(v21, 0.2);
          if ( v15 > 1.0 )
          {
            v10 = v27;
            goto LABEL_20;
          }
          v9 = (1.0 - v15) * v26;
        }
      }
      v28 = v11[8];
      HIBYTE(v28) = (int)((double)HIBYTE(v28) * v9);
      if ( !*(_BYTE *)(a5 + 8208) )
      {
        LOWORD(v30) = -1;
        BYTE2(v30) = -1;
        LOWORD(v29) = 25700;
        BYTE2(v29) = 40;
        HIBYTE(v30) = (int)(v9 * 255.0);
        v28 = v30;
        HIBYTE(v29) = HIBYTE(v30);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, v29);
        (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
          dword_1047CA6C,
          v23,
          v12,
          v13 + 2,
          v12 + v31);
      }
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, v25, a2);
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, v23, v12);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, v28);
      v16 = (_WORD *)v11[6];
      v17 = v16;
      if ( !v16 )
        v17 = &unk_10302674;
      v18 = v17 + 1;
      while ( *v17++ )
        ;
      v20 = v17 - v18;
      if ( !v16 )
        v16 = &unk_10302674;
      a2 = 0;
      (*(void (__stdcall **)(_WORD *, int))(*(_DWORD *)dword_1047CA6C + 88))(v16, v20);
      v10 = v27;
LABEL_20:
      v27 = ++v10;
      if ( v10 >= v24 )
        return;
      v9 = v26;
      v7 = a5;
    }
  }
}
