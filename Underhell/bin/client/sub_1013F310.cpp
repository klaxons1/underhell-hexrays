// bad sp value at call has been detected, the output may be wrong!
int __cdecl sub_1013F310(int a1, int a2, _DWORD *a3)
{
  int v3; // esi
  int *v4; // edi
  bool v5; // cl
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // ebx
  float v14; // ebx
  double v15; // st7
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v20; // [esp+9Ch] [ebp-40h]
  int v21; // [esp+A0h] [ebp-3Ch]
  int v22; // [esp+A4h] [ebp-38h]
  int v23; // [esp+A8h] [ebp-34h]
  float v24; // [esp+ACh] [ebp-30h]
  float v25; // [esp+B0h] [ebp-2Ch] BYREF
  float v26; // [esp+B4h] [ebp-28h] BYREF
  float v27; // [esp+B8h] [ebp-24h] BYREF
  int v28; // [esp+BCh] [ebp-20h] BYREF
  int v29; // [esp+C0h] [ebp-1Ch]
  float v30; // [esp+C4h] [ebp-18h]
  int v31; // [esp+C8h] [ebp-14h] BYREF
  int v32; // [esp+CCh] [ebp-10h]
  int v33; // [esp+D0h] [ebp-Ch] BYREF
  int v34; // [esp+D4h] [ebp-8h] BYREF
  int v35; // [esp+D8h] [ebp-4h] BYREF
  int v36; // [esp+E4h] [ebp+8h]

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v3 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
  v24 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 28))(v3));
  v32 = 0;
  if ( *(_DWORD *)(dword_1043A9D4 + 48) == 1 )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 24))(v3, 0);
    (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)v3 + 32))(v3, &v33, &v31);
    (*(void (__thiscall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)v3 + 152))(v3, 0, 0, v33, v31);
    (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)v3 + 288))(v3, 255, 0, 0);
  }
  if ( *(_DWORD *)(a1 + 8) )
  {
    v4 = (int *)(a1 + 36);
    do
    {
      v5 = 1;
      if ( *(v4 - 9) == 1 )
      {
        v5 = *(_DWORD *)(*(_DWORD *)(*(v4 - 8) + 28) + 48) != 0;
      }
      else if ( *(v4 - 9) == 2 )
      {
        v5 = *(_DWORD *)(*(_DWORD *)(*(v4 - 8) + 28) + 48) == 0;
      }
      v6 = *(v4 - 6);
      if ( (v6 || *(_DWORD *)(dword_1043A9D4 + 48) != 1) && v5 )
      {
        v33 = 0;
        if ( !v6 )
          v33 = a2;
        v7 = *v4;
        v36 = *v4;
        if ( !*v4 )
        {
          v8 = (*(int (__thiscall **)(int, _DWORD, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
                 dword_1047C96C,
                 *(v4 - 7),
                 "Other textures",
                 1,
                 0);
          v36 = v8;
          if ( v8 )
            sub_10233300(v8);
          v7 = v36;
        }
        v9 = *(v4 - 6);
        if ( v9 )
        {
          v20 = (*(int (__thiscall **)(int, int, const char *, int))(*(_DWORD *)dword_1047C96C + 304))(
                  dword_1047C96C,
                  v9,
                  "RenderTargets",
                  1);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 24))(v3, v20);
        }
        else
        {
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 24))(v3, 0);
        }
        (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)v3 + 32))(v3, &v35, &v34);
        (*(void (__thiscall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)v3 + 152))(v3, 0, 0, v35, v34);
        v10 = v35 / *(v4 - 4);
        v11 = v34 / *(v4 - 3);
        v12 = *(v4 - 5);
        v35 = v10;
        v34 = v11;
        if ( v12 )
        {
          v13 = (*(int (__thiscall **)(int, int, const char *, int))(*(_DWORD *)dword_1047C96C + 304))(
                  dword_1047C96C,
                  v12,
                  "RenderTargets",
                  1);
          v31 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 12))(v13);
          v14 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v13 + 16))(v13));
          v29 = (v31 - 1) / *(v4 - 2);
          LODWORD(v30) = (LODWORD(v14) - 1) / *(v4 - 1);
          v30 = (float)SLODWORD(v30);
          *(float *)&v29 = (float)v29;
          sub_1013F150(v36, 0, 0, v35, v34, 0.0, 0.0, *(float *)&v29, v30, v31, SLODWORD(v14), (_DWORD *)v33, 0);
          if ( *(v4 - 6) && *(_DWORD *)(dword_1043A9D4 + 48) == 1 )
          {
            (*(void (__thiscall **)(int, _DWORD, int, int, int, float, float, float, float, int, int, float, int, int))(*(_DWORD *)v3 + 24))(
              v3,
              0,
              v21,
              v22,
              v23,
              COERCE_FLOAT(LODWORD(v24)),
              COERCE_FLOAT(LODWORD(v25)),
              COERCE_FLOAT(LODWORD(v26)),
              COERCE_FLOAT(LODWORD(v27)),
              v28,
              v29,
              COERCE_FLOAT(LODWORD(v30)),
              v31,
              v32);
            (*(void (__thiscall **)(int, float *, int *))(*(_DWORD *)v3 + 32))(v3, &v27, &v28);
            (*(void (__thiscall **)(int, _DWORD, _DWORD, float, int))(*(_DWORD *)v3 + 152))(
              v3,
              0,
              0,
              COERCE_FLOAT(LODWORD(v27)),
              v28);
            v15 = v30;
            v16 = v31;
            v32 = 1;
            v31 = 1;
            v30 = 0.0;
            *(float *)&v29 = v14;
            v28 = v16;
            v27 = v15;
            v26 = v14;
            v25 = 0.0;
            v24 = 0.0;
            v23 = v34;
            v22 = v35;
            v21 = 200;
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v3 + 412))(v3, v36, 400);
          }
        }
        else
        {
          if ( *(v4 - 6) || !*(_DWORD *)(dword_1043AA1C + 48) )
            sub_1013F150(v7, 0, 0, v10, v11, 0.0, 0.0, 1.0, 1.0, 1, 1, (_DWORD *)v33, 0);
          else
            sub_1013F150(v7, 0, 0, v10 / 2, v11, 0.0, 0.0, 0.5, 1.0, 1, 1, (_DWORD *)v33, 0);
          if ( *(v4 - 6) && *(_DWORD *)(dword_1043A9D4 + 48) == 1 )
          {
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 24))(v3, 0);
            (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v3 + 32))(v3, &v25, &v26);
            (*(void (__thiscall **)(int, _DWORD, _DWORD, float, float))(*(_DWORD *)v3 + 152))(
              v3,
              0,
              0,
              COERCE_FLOAT(LODWORD(v25)),
              COERCE_FLOAT(LODWORD(v26)));
            sub_1013F150(
              v7,
              220 * (v32 % 4) + 10,
              220 * (v32 / 4) + 10,
              200,
              200,
              0.0,
              0.0,
              1.0,
              1.0,
              1,
              1,
              (_DWORD *)v33,
              0);
          }
        }
        if ( a3 )
        {
          v17 = v35 - 1;
          v18 = v34 - 1;
          *a3 = 0;
          a3[2] = v17;
          a3[1] = 0;
          a3[3] = v18;
        }
      }
      ++v32;
      v4 += 10;
    }
    while ( *(v4 - 7) );
  }
  (*(void (__thiscall **)(int, float))(*(_DWORD *)v3 + 24))(v3, COERCE_FLOAT(LODWORD(v24)));
  (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v3 + 12))(v3, v21, v22, v23);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
}
