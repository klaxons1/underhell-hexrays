void __thiscall sub_10099B20(int this, int a2, unsigned int *a3, int a4, int a5, int a6, float *a7)
{
  int v8; // esi
  int v9; // ecx
  double v10; // st7
  double v11; // st4
  double v12; // st7
  double v13; // st4
  double v14; // st5
  int v15; // esi
  int v16; // edi
  int v17; // edi
  int v18; // ecx
  int v19; // esi
  int v20; // ecx
  float *v21; // edx
  int v22; // eax
  int v23; // ecx
  bool v24; // c0
  bool v25; // c3
  _DWORD *v26; // ecx
  int v27; // ecx
  int v28; // eax
  int v29; // edx
  float *v30; // edx
  int v31; // eax
  int v32; // eax
  int v33; // esi
  _DWORD *v34[39]; // [esp+Ch] [ebp-1F0h] BYREF
  int v35; // [esp+A8h] [ebp-154h]
  int v36; // [esp+B0h] [ebp-14Ch]
  char v37; // [esp+BCh] [ebp-140h]
  int v38; // [esp+C0h] [ebp-13Ch]
  int v39; // [esp+C4h] [ebp-138h]
  char v40; // [esp+C8h] [ebp-134h]
  _DWORD v41[3]; // [esp+CCh] [ebp-130h] BYREF
  char v42; // [esp+D8h] [ebp-124h]
  int v43; // [esp+DCh] [ebp-120h]
  float *v44; // [esp+E0h] [ebp-11Ch]
  int v45; // [esp+E4h] [ebp-118h]
  int v46; // [esp+E8h] [ebp-114h]
  int v47; // [esp+ECh] [ebp-110h]
  char v48; // [esp+FCh] [ebp-100h]
  _DWORD v49[19]; // [esp+100h] [ebp-FCh] BYREF
  int v50; // [esp+14Ch] [ebp-B0h]
  int v51; // [esp+1A4h] [ebp-58h]
  int v52; // [esp+1ACh] [ebp-50h]
  int v53; // [esp+1B0h] [ebp-4Ch]
  int v54; // [esp+1F4h] [ebp-8h] BYREF
  int v55; // [esp+1F8h] [ebp-4h] BYREF
  int v56; // [esp+204h] [ebp+8h]
  int v57; // [esp+208h] [ebp+Ch]
  int v58; // [esp+20Ch] [ebp+10h]
  int v59; // [esp+210h] [ebp+14h]

  CVProfile::EnterScope(
    g_VProfCurrentProfile,
    "CDetailObjectSystem::RenderTranslucentDetailObjectsInLeaf",
    0,
    "Detail_Prop_Rendering",
    0,
    4);
  v8 = a6;
  sub_10099510((_DWORD *)this, (unsigned int *)a2, a3, a4, a5, a6, a7);
  if ( *(_DWORD *)(this + 128) != v8 )
  {
    a6 = (unsigned __int16)v8;
    *(_DWORD *)(this + 128) = v8;
    *(_DWORD *)(this + 120) = 0;
    *(_DWORD *)(this + 124) = 0;
    if ( !sub_10095110(1, (int)&a6) )
      goto LABEL_45;
    *(_DWORD *)(this + 120) = sub_100982D0((_DWORD *)this, v8, (float *)a2, (int)a3, *(char **)(this + 136));
  }
  v9 = *(_DWORD *)(this + 124);
  if ( *(_DWORD *)(this + 120) != v9 )
  {
    v10 = 0.0;
    *(float *)&a6 = 0.0;
    if ( a7 )
    {
      v11 = *a7 - *(float *)a2;
      v12 = v11 * v11;
      v13 = a7[1] - *(float *)(a2 + 4);
      v14 = a7[2] - *(float *)(a2 + 8);
      v10 = v14 * v14 + v13 * v13 + v12;
      *(float *)&a6 = v10;
    }
    if ( v10 <= *(float *)(*(_DWORD *)(this + 136) + 8 * v9 + 4) )
    {
      v15 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
      v56 = v15;
      if ( v15 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 8))(v15);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v15 + 80))(v15, 10);
      (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 84))(v15);
      (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 124))(v15);
      v16 = *(_DWORD *)(this + 112);
      if ( (unsigned __int8)sub_100EC2E0() || *(_DWORD *)(dword_1043C114 + 48) == 2 )
        v16 = *(_DWORD *)(this + 116);
      sub_10016C20((int)v34);
      v17 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, int))(*(_DWORD *)v15 + 224))(v15, 1, 0, 0, v16);
      (*(void (__thiscall **)(int, int, _DWORD, int *, int *))(*(_DWORD *)v15 + 512))(v15, v17, 0, &v55, &v54);
      v18 = v54 / 6;
      v19 = 4 * (*(_DWORD *)(this + 120) - *(_DWORD *)(this + 124));
      v57 = v54 / 6;
      if ( v54 / 6 > v55 / 4 )
      {
        v57 = v55 / 4;
        v18 = v55 / 4;
      }
      if ( v19 > v18 )
        v19 = v18;
      v38 = v17;
      v40 = 1;
      v39 = 7;
      a7 = (float *)(6 * v19);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v17 + 40))(v17, 2);
      (*(void (__thiscall **)(int, int, float *, _DWORD **))(*(_DWORD *)v38 + 68))(v38, 4 * v19, a7, v34);
      v43 = v17 + 4;
      v45 = 0;
      v48 = 0;
      v47 = 0;
      v44 = a7;
      v46 = v35;
      v41[0] = v36;
      v42 = v37;
      sub_10016990((int)v49, v17, 4 * v19, v34);
      v47 = 0;
      sub_10016A00(v49);
      v20 = *(_DWORD *)(this + 124);
      v21 = 0;
      a7 = 0;
      if ( v20 < *(_DWORD *)(this + 120) )
      {
        do
        {
          v22 = *(_DWORD *)(this + 124);
          v23 = *(_DWORD *)(this + 136);
          v24 = *(float *)&a6 < (double)*(float *)(v23 + 8 * v22 + 4);
          v25 = *(float *)&a6 == *(float *)(v23 + 8 * v22 + 4);
          v26 = (_DWORD *)(v23 + 8 * v22);
          if ( !v24 && !v25 )
            break;
          v27 = *(_DWORD *)(this + 28) + 44 * *v26;
          v58 = dword_103DDC20[(*(unsigned __int8 *)(v27 + 36) >> 2) & 3];
          v59 = v27;
          if ( (int)v21 + v58 > v19 )
          {
            if ( v40 )
            {
              switch ( v39 )
              {
                case 4:
                  v28 = 2 * v53 - 2;
                  break;
                case 5:
                  v28 = 2 * v53;
                  break;
                case 6:
                  v28 = 3 * v53 - 6;
                  break;
                case 7:
                  v28 = 6 * v53 / 4;
                  break;
                case 8:
                  v28 = 0;
                  break;
                default:
                  v28 = v53;
                  break;
              }
              sub_10016B00(v41, v39, v28);
            }
            (*(void (__thiscall **)(int, int, int, _DWORD **))(*(_DWORD *)v38 + 80))(v38, v53, v45, v34);
            v43 = 0;
            v44 = 0;
            v52 = 0;
            v51 = 0;
            v38 = 0;
            v50 = -1;
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v17 + 48))(v17, -1, 0);
            v19 = 4 * (*(_DWORD *)(this + 120) - *(_DWORD *)(this + 124));
            if ( v19 > v57 )
              v19 = v57;
            v38 = v17;
            v40 = 1;
            v39 = 7;
            v29 = *(_DWORD *)v17;
            a7 = (float *)(6 * v19);
            (*(void (__thiscall **)(int, int))(v29 + 40))(v17, 2);
            (*(void (__thiscall **)(int, int, float *, _DWORD **))(*(_DWORD *)v38 + 68))(v38, 4 * v19, a7, v34);
            v43 = v17 + 4;
            v45 = 0;
            v48 = 0;
            v47 = 0;
            v44 = a7;
            v46 = v35;
            v41[0] = v36;
            v42 = v37;
            sub_10016990((int)v49, v17, 4 * v19, v34);
            v47 = 0;
            sub_10016A00(v49);
            v27 = v59;
            a7 = 0;
          }
          if ( ((*(unsigned __int8 *)(v27 + 36) >> 2) & 3) == 1 )
            sub_10095470(v27, (int)v34);
          v30 = a7;
          ++*(_DWORD *)(this + 124);
          v21 = (float *)((char *)v30 + v58);
          v31 = *(_DWORD *)(this + 124);
          a7 = v21;
        }
        while ( v31 < *(_DWORD *)(this + 120) );
      }
      if ( v40 )
      {
        switch ( v39 )
        {
          case 4:
            v32 = 2 * v53 - 2;
            break;
          case 5:
            v32 = 2 * v53;
            break;
          case 6:
            v32 = 3 * v53 - 6;
            break;
          case 7:
            v32 = 6 * v53 / 4;
            break;
          case 8:
            v32 = 0;
            break;
          default:
            v32 = v53;
            break;
        }
        sub_10016B00(v41, v39, v32);
      }
      (*(void (__thiscall **)(int, int, int, _DWORD **))(*(_DWORD *)v38 + 80))(v38, v53, v45, v34);
      v43 = 0;
      v44 = 0;
      v52 = 0;
      v51 = 0;
      v38 = 0;
      v50 = -1;
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v17 + 48))(v17, -1, 0);
      v33 = v56;
      (*(void (__thiscall **)(int))(*(_DWORD *)v56 + 88))(v56);
      sub_10016BC0(v34);
      (*(void (__thiscall **)(int))(*(_DWORD *)v33 + 12))(v33);
      (*(void (__thiscall **)(int))(*(_DWORD *)v33 + 4))(v33);
    }
  }
LABEL_45:
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
