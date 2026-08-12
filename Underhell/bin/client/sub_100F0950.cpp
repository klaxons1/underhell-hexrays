int __userpurge sub_100F0950@<eax>(int a1@<ecx>, int a2@<edi>, int a3@<esi>, const char *a4)
{
  bool v5; // zf
  unsigned __int16 v7; // ax
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // edi
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  float v19; // ecx
  int (__thiscall *v20)(int); // edx
  int v21; // eax
  int (__thiscall *v22)(int); // edx
  int v23; // eax
  int (__thiscall *v24)(int); // edx
  int v25; // eax
  int (__thiscall *v26)(int); // edx
  int v27; // esi
  int v28; // ecx
  int v29; // esi
  float v31; // [esp+4h] [ebp-18h] BYREF
  float v32; // [esp+8h] [ebp-14h]
  float v33; // [esp+Ch] [ebp-10h] BYREF
  float v34; // [esp+10h] [ebp-Ch]
  int v35; // [esp+14h] [ebp-8h]
  float v36; // [esp+18h] [ebp-4h]
  unsigned __int16 v37; // [esp+24h] [ebp+8h]
  int v38; // [esp+24h] [ebp+8h]

  v5 = *(_DWORD *)(a1 + 92) == 0;
  v36 = *(float *)&a1;
  if ( v5 )
    return 0;
  if ( *(float *)&a4 == 0.0 )
  {
    v7 = -1;
  }
  else
  {
    v31 = *(float *)&a4;
    v7 = sub_100EDB60((_WORD *)(a1 + 180), (int)&v31);
  }
  if ( v7 == 0xFFFF )
  {
    v8 = (*(int (__thiscall **)(_DWORD, const char *, const char *, int, _DWORD))(**(_DWORD **)(a1 + 92) + 280))(
           *(_DWORD *)(a1 + 92),
           a4,
           "Particle textures",
           1,
           0);
    v9 = v8;
    if ( v8 )
    {
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 48))(v8, a2, a3);
      v10 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 92) + 380))(*(_DWORD *)(a1 + 92));
      v11 = v10;
      v35 = v10;
      if ( v10 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10);
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v11 + 36))(v11, v9, a1);
      v37 = sub_100F0870(a1 + 180, a4);
      v12 = sub_100DDA40(28);
      v13 = 0;
      if ( v12 )
      {
        *(_DWORD *)(v12 + 20) = 0;
        *(float *)v12 = 0.0;
        *(_DWORD *)(v12 + 24) = 0;
        *(float *)(v12 + 8) = 1.0;
        *(_DWORD *)(v12 + 16) = v12 + 20;
        v13 = v12;
      }
      *(_DWORD *)(*(_DWORD *)(a1 + 184) + 16 * v37 + 12) = v13;
      *(_DWORD *)(v13 + 24) = v9;
      v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 40))(v9);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 28))(v9) && v14 )
      {
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)v9 + 32))(v9, &v33);
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)v9 + 36))(v9, &v31);
        v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 16))(v14);
        *(float *)v13 = (double)v15 * (v31 * 0.0 + v33);
        v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 16))(v14);
        *(float *)(v13 + 8) = (double)v16 * (v33 + v31);
        v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 20))(v14);
        *(float *)(v13 + 4) = (double)v17 * (v32 * 0.0 + v34);
        v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 20))(v14);
        v19 = v36;
        *(float *)(v13 + 12) = (double)v18 * (v34 + v32);
        *(_DWORD *)(v13 + 16) = sub_100EF4E0((_DWORD *)LODWORD(v19), v14);
      }
      else
      {
        *(float *)(v13 + 4) = 0.0;
        *(_DWORD *)(v13 + 16) = v13 + 20;
        *(float *)v13 = 0.0;
        *(_DWORD *)(v13 + 20) = v9;
        v14 = v9;
        *(float *)(v13 + 8) = (float)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 16))(v9);
        *(float *)(v13 + 12) = (float)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 20))(v9);
      }
      v20 = *(int (__thiscall **)(int))(*(_DWORD *)v14 + 16);
      v36 = *(float *)v13 + 0.5;
      v21 = v20(v14);
      *(float *)v13 = v36 / (double)v21;
      v22 = *(int (__thiscall **)(int))(*(_DWORD *)v14 + 20);
      v36 = *(float *)(v13 + 4) + 0.5;
      v23 = v22(v14);
      *(float *)(v13 + 4) = v36 / (double)v23;
      v24 = *(int (__thiscall **)(int))(*(_DWORD *)v14 + 16);
      v36 = *(float *)(v13 + 8) - 0.5;
      v25 = v24(v14);
      *(float *)(v13 + 8) = v36 / (double)v25;
      v26 = *(int (__thiscall **)(int))(*(_DWORD *)v14 + 20);
      v36 = *(float *)(v13 + 12) - 0.5;
      v38 = v26(v14);
      v27 = v35;
      v28 = v35;
      *(float *)(v13 + 12) = v36 / (double)v38;
      (*(void (__thiscall **)(int))(*(_DWORD *)v28 + 12))(v28);
      (*(void (__thiscall **)(int))(*(_DWORD *)v27 + 4))(v27);
      return v13;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v29 = 2 * v7;
    sub_100EFAE0(a1, a1, v29, *(_DWORD *)(*(_DWORD *)(a1 + 184) + 16 * v7 + 12));
    return *(_DWORD *)(*(_DWORD *)(a1 + 184) + 8 * v29 + 12);
  }
}
