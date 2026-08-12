int __userpurge sub_101940A0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  int v5; // eax
  double v6; // st7
  int v7; // ebx
  int *v8; // edi
  char v9; // al
  bool v10; // zf
  int v11; // edi
  unsigned __int8 *v12; // edx
  int v13; // eax
  int v14; // ebx
  int v15; // edx
  int v16; // eax
  int v17; // edi
  double v18; // st7
  int v19; // ecx
  int v20; // eax
  double v21; // st7
  float v23; // [esp+34h] [ebp-CCh]
  char v26; // [esp+4Ch] [ebp-B4h] BYREF
  float v27; // [esp+58h] [ebp-A8h]
  float v28; // [esp+64h] [ebp-9Ch]
  float v29; // [esp+70h] [ebp-90h]
  float v30; // [esp+7Ch] [ebp-84h]
  float v31; // [esp+88h] [ebp-78h]
  float v32; // [esp+ACh] [ebp-54h]
  float v33[6]; // [esp+C4h] [ebp-3Ch] BYREF
  __int16 v34; // [esp+DCh] [ebp-24h]
  int v35; // [esp+E0h] [ebp-20h] BYREF
  int v36; // [esp+E4h] [ebp-1Ch]
  __int16 v37; // [esp+E8h] [ebp-18h]
  int v38; // [esp+ECh] [ebp-14h]
  int v39; // [esp+F0h] [ebp-10h] BYREF
  int v40; // [esp+F4h] [ebp-Ch]
  int v41; // [esp+F8h] [ebp-8h]
  char v42; // [esp+FFh] [ebp-1h]

  if ( *(_BYTE *)(a1 + 16) )
  {
    v5 = sub_1007A6A0(off_103DCD78, *(_DWORD *)(a1 + 8));
    if ( v5 )
      (*(void (__thiscall **)(int, _DWORD, int, int *))(*(_DWORD *)(v5 + 4) + 148))(
        v5 + 4,
        *(_DWORD *)(a1 + 12),
        a1 + 28,
        &v35);
    v6 = *((float *)off_103DC81C + 4) + *(float *)(a1 + 20);
    *(float *)(a1 + 20) = v6;
    if ( *(float *)(a1 + 24) > 0.0 )
    {
      if ( *(float *)(a1 + 24) >= v6 )
      {
        if ( v6 < 0.0 )
          v6 = 0.0;
      }
      else
      {
        v6 = *(float *)(a1 + 24);
      }
      *(float *)(a1 + 20) = v6;
      *(float *)(a1 + 56) = *(float *)(a1 + 28);
      *(float *)(a1 + 60) = *(float *)(a1 + 32);
      *(float *)(a1 + 64) = *(float *)(a1 + 36);
    }
    v39 = *(int *)(a1 + 20);
    v42 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v7 = 0;
    v8 = (int *)&unk_104476B0;
    v41 = (int)&v26;
    do
    {
      v9 = sub_1011FDF0(v8, (float *)v41, *(float *)&v39);
      v10 = v42 == 0;
      *((_BYTE *)&v35 + v7) = v9;
      if ( !v10 || (v42 = 0, v9) )
        v42 = 1;
      v41 += 12;
      v8 += 5;
      ++v7;
    }
    while ( (int)v8 < (int)dword_10447778 );
    if ( (_BYTE)v36 && BYTE1(v36) )
    {
      v11 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
              dword_1047C96C,
              "sprites/bluelaser1",
              "ClientEffect textures",
              1,
              0);
      sub_10193330(byte_103EAF9C, &v39, v30);
      v23 = v31 * 32.0;
      sub_10179900((float *)(a1 + 56), (float *)(a1 + 44), v23, v11, v12);
    }
    if ( BYTE2(v35) && HIBYTE(v35) )
    {
      v13 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD, int, int))(*(_DWORD *)dword_1047C96C
                                                                                          + 280))(
              dword_1047C96C,
              "effects/blueblackflash",
              "ClientEffect textures",
              1,
              0,
              a3,
              a2);
      *(float *)&v40 = v29 * 128.0;
      v14 = v13;
      sub_10193330(byte_103EAF9C, &v39, v28);
      v15 = *(_DWORD *)dword_1047C96C;
      v38 = (int)(v27 * 255.0);
      HIBYTE(v39) = v38;
      v16 = (*(int (__thiscall **)(int))(v15 + 380))(dword_1047C96C);
      v17 = v16;
      if ( v16 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 8))(v16);
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v17 + 36))(v17, v14, a1 != 4 ? a1 : 0);
      v33[0] = *(float *)(a1 + 28);
      v33[1] = *(float *)(a1 + 32);
      v18 = *(float *)(a1 + 36);
      v34 = 1;
      v33[2] = v18;
      v33[3] = 2.0;
      v33[4] = 1.0;
      v33[5] = 0.0625;
      if ( sub_1005BF10(v33, 0) > 0.0 )
        sub_10193930((float *)(a1 + 28), v14, v17, a1, *(float *)&v40, *(float *)&v40, *(float *)&v39);
      (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 12))(v17);
      (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 4))(v17);
    }
    if ( (_BYTE)v37 )
    {
      v19 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413164 + 16))(dword_10413164, *(_DWORD *)(a1 + 8));
      v20 = HIWORD(v41);
      *(float *)(v19 + 4) = *(float *)(a1 + 28);
      *(float *)(v19 + 8) = *(float *)(a1 + 32);
      v40 = v20 | 0xC00;
      *(float *)(v19 + 12) = *(float *)(a1 + 36);
      *(_BYTE *)(v19 + 20) = (int)(v32 * 40.0);
      *(_BYTE *)(v19 + 21) = (int)(v32 * 60.0);
      v21 = v32 * 255.0;
      *(_BYTE *)(v19 + 23) = 5;
      v40 = (int)v21;
      *(_BYTE *)(v19 + 22) = (int)v21;
      *(float *)(v19 + 16) = 128.0;
      *(float *)(v19 + 24) = *((float *)off_103DC81C + 3) + 0.001;
    }
    if ( *(float *)(a1 + 20) >= 4.0 && !v42 )
      (*(void (__thiscall **)(int))(*(_DWORD *)(a1 - 4) + 48))(a1 - 4);
  }
  return 1;
}
