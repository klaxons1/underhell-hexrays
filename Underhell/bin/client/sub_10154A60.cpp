void __userpurge sub_10154A60(float *a1@<ecx>, int a2@<ebp>, float a3)
{
  int v4; // eax
  float *v5; // eax
  float v6; // ecx
  int v7; // edx
  float v8; // eax
  double v9; // st7
  double v10; // st6
  double v11; // st6
  float v12; // esi
  int v13; // edx
  double (__thiscall *v14)(int, _DWORD, _DWORD); // eax
  double v15; // st7
  double (__thiscall *v16)(int, _DWORD, _DWORD); // eax
  double v17; // st7
  float v18[20]; // [esp+34h] [ebp-10Ch] BYREF
  float v19[3]; // [esp+84h] [ebp-BCh] BYREF
  float v20[2]; // [esp+90h] [ebp-B0h] BYREF
  float v21; // [esp+98h] [ebp-A8h]
  float v22; // [esp+B0h] [ebp-90h]
  char v23; // [esp+C6h] [ebp-7Ah]
  _DWORD v24[5]; // [esp+E0h] [ebp-60h] BYREF
  float v25; // [esp+F4h] [ebp-4Ch]
  float v26[3]; // [esp+F8h] [ebp-48h] BYREF
  float v27[2]; // [esp+104h] [ebp-3Ch] BYREF
  float v28; // [esp+10Ch] [ebp-34h]
  float v29; // [esp+110h] [ebp-30h]
  float v30; // [esp+114h] [ebp-2Ch]
  float v31; // [esp+118h] [ebp-28h]
  float v32; // [esp+11Ch] [ebp-24h] BYREF
  float v33; // [esp+120h] [ebp-20h]
  int v34; // [esp+124h] [ebp-1Ch]
  float v35; // [esp+128h] [ebp-18h] BYREF
  float v36; // [esp+12Ch] [ebp-14h]
  float v37; // [esp+130h] [ebp-10h]
  int v38; // [esp+134h] [ebp-Ch]
  void *v39; // [esp+138h] [ebp-8h]
  void *retaddr; // [esp+140h] [ebp+0h]

  v38 = a2;
  v39 = retaddr;
  v4 = sub_100422D0();
  if ( v4 )
  {
    v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 268))(v4);
    v6 = *v5;
    v7 = *((_DWORD *)v5 + 1);
    v8 = v5[2];
    *(float *)&v24[3] = v6;
    v24[4] = v7;
    v25 = v8;
    if ( sub_10150F90(a1, v27, &v32) )
    {
      v9 = 0.075000003;
      if ( a3 <= 0.075000003 )
        v9 = a3;
      v10 = a1[310];
      if ( v10 > 0.0099999998 )
        v10 = 0.0099999998;
      v11 = v9 * (v10 * (v33 * v32)) + a1[307];
      v34 = (int)v11;
      a1[307] = v11 - (double)(int)v11;
      v29 = flt_1043D718;
      v30 = flt_1043D71C;
      v31 = flt_1043D720 - *(float *)(dword_1043D65C + 44);
      if ( (int)v11 > 0 )
      {
        v34 = (int)v11;
        while ( 1 )
        {
          v12 = v28;
          v35 = v27[0];
          v13 = *(_DWORD *)dword_10413198;
          v36 = v27[1];
          v14 = *(double (__thiscall **)(int, _DWORD, _DWORD))(v13 + 4);
          v37 = v28;
          v15 = v14(dword_10413198, 0.0, 1.0);
          v16 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
          v35 = v15 * v32 + v27[0];
          v17 = v16(dword_10413198, 0.0, 1.0);
          v26[0] = v35;
          v36 = v17 * v33 + v36;
          v26[2] = v25;
          v26[1] = v36;
          sub_1000E430(v18, v26, &v35);
          sub_1012D400(v24, 0, 0);
          (*(void (__thiscall **)(int, float *, int, _DWORD *, float *))(*(_DWORD *)dword_104131A0 + 16))(
            dword_104131A0,
            v18,
            16395,
            v24,
            v19);
          if ( *(_DWORD *)(dword_10439134 + 48) )
            sub_10130AC0(v19, v20, 255, 0, 0, 1, 5.0);
          if ( v22 >= 1.0 )
            goto LABEL_14;
          if ( (v23 & 4) != 0 )
            break;
LABEL_15:
          if ( !--v34 )
            return;
        }
        v35 = v20[0];
        v36 = v20[1];
        v37 = v21;
        v12 = v21;
LABEL_14:
        sub_10154950((int)a1, v35, v36, v12, v29, v30, v31);
        goto LABEL_15;
      }
    }
  }
}
