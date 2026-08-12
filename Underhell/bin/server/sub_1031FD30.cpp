int *__cdecl sub_1031FD30(float *a1, float *a2, float *a3, int a4, int a5)
{
  int v5; // eax
  int *v6; // esi
  int v8; // eax
  int v9; // eax
  int v10; // edi
  void (__thiscall *v11)(int, float *, float *); // edx
  int v12; // ebx
  int v13; // ecx
  int *v14; // ecx
  int v15; // eax
  int *v16; // ecx
  int v17; // eax
  int *v18; // ecx
  int v19; // eax
  int *v20; // ecx
  int v21; // eax
  int *v22; // ecx
  int v23; // eax
  int *v24; // ecx
  int v25; // eax
  int *v26; // ecx
  int v27; // eax
  int *v28; // ecx
  int v29; // eax
  int *v30; // edi
  int v31; // edx
  float v32; // [esp+14h] [ebp-30h]
  const char *v33; // [esp+24h] [ebp-20h]
  float v34[3]; // [esp+28h] [ebp-1Ch] BYREF
  float v35[3]; // [esp+34h] [ebp-10h] BYREF
  float v36; // [esp+40h] [ebp-4h]

  v5 = sub_101811E0("helicopter_chunk", -1);
  v6 = (int *)__RTDynamicCast(
                v5,
                0,
                (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                (int)&CHelicopterChunk `RTTI Type Descriptor',
                0);
  if ( v6 )
  {
    (*(void (__thiscall **)(int *))(*v6 + 96))(v6);
    sub_100E0D20((int)v6, a1);
    sub_100E0EA0((int)v6, a2);
    (*(void (__thiscall **)(int *, int))(*v6 + 104))(v6, a4);
    v6[280] = a5;
    sub_100EBE30((int)v6, 4);
    v8 = (*(int (__thiscall **)(int *))(v6[80] + 48))(v6 + 80);
    v9 = sub_100E9550(v6, 6, v8, 0, 0);
    v10 = v9;
    if ( v9 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 60))(v9, 1);
      v11 = *(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v10 + 196);
      v34[0] = *a3;
      v34[1] = a3[1];
      v34[2] = a3[2];
      v35[0] = flt_106F1CA8;
      v35[1] = flt_106F1CAC;
      v35[2] = flt_106F1CB0;
      v11(v10, v34, v35);
    }
    sub_100EC3F0(v6, (int)sub_10313EB0, 0.0, 0);
    v32 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0(v6, v32, 0);
    *((_BYTE *)v6 + 1136) = 0;
    v12 = sub_10283150();
    sub_10284B60(v12, (int)v6, "damage");
    v13 = *(_DWORD *)(v12 + 828);
    v36 = 4.0;
    if ( v13 != COERCE_INT(4.0) )
    {
      if ( *(_BYTE *)(v12 + 84) )
      {
        *(_BYTE *)(v12 + 88) |= 1u;
      }
      else
      {
        v14 = *(int **)(v12 + 24);
        if ( v14 )
          sub_100194B0(v14, 828);
      }
      *(float *)(v12 + 828) = 4.0;
    }
    v15 = *(_DWORD *)(v12 + 832);
    v36 = 2.0;
    if ( v15 != COERCE_INT(2.0) )
    {
      if ( *(_BYTE *)(v12 + 84) )
      {
        *(_BYTE *)(v12 + 88) |= 1u;
      }
      else
      {
        v16 = *(int **)(v12 + 24);
        if ( v16 )
          sub_100194B0(v16, 832);
      }
      *(float *)(v12 + 832) = 2.0;
    }
    sub_100C34C0((float *)(v12 + 800), 0.69999999, 0.69999999, 0.69999999);
    sub_102BC090((float *)(v12 + 812), 0.60000002, 0.60000002, 0.60000002);
    v17 = *(_DWORD *)(v12 + 848);
    v36 = 32.0;
    if ( v17 != COERCE_INT(32.0) )
    {
      if ( *(_BYTE *)(v12 + 84) )
      {
        *(_BYTE *)(v12 + 88) |= 1u;
      }
      else
      {
        v18 = *(int **)(v12 + 24);
        if ( v18 )
          sub_100194B0(v18, 848);
      }
      *(float *)(v12 + 848) = 32.0;
    }
    v19 = *(_DWORD *)(v12 + 852);
    v36 = 64.0;
    if ( v19 != COERCE_INT(64.0) )
    {
      if ( *(_BYTE *)(v12 + 84) )
      {
        *(_BYTE *)(v12 + 88) |= 1u;
      }
      else
      {
        v20 = *(int **)(v12 + 24);
        if ( v20 )
          sub_100194B0(v20, 852);
      }
      *(float *)(v12 + 852) = 64.0;
    }
    v21 = *(_DWORD *)(v12 + 856);
    v36 = 8.0;
    if ( v21 != COERCE_INT(8.0) )
    {
      if ( *(_BYTE *)(v12 + 84) )
      {
        *(_BYTE *)(v12 + 88) |= 1u;
      }
      else
      {
        v22 = *(int **)(v12 + 24);
        if ( v22 )
          sub_100194B0(v22, 856);
      }
      *(float *)(v12 + 856) = 8.0;
    }
    v23 = *(_DWORD *)(v12 + 840);
    v36 = 0.0;
    if ( v23 != COERCE_INT(0.0) )
    {
      if ( *(_BYTE *)(v12 + 84) )
      {
        *(_BYTE *)(v12 + 88) |= 1u;
      }
      else
      {
        v24 = *(int **)(v12 + 24);
        if ( v24 )
          sub_100194B0(v24, 840);
      }
      *(float *)(v12 + 840) = 0.0;
    }
    v25 = *(_DWORD *)(v12 + 844);
    v36 = 8.0;
    if ( v25 != COERCE_INT(8.0) )
    {
      if ( *(_BYTE *)(v12 + 84) )
      {
        *(_BYTE *)(v12 + 88) |= 1u;
      }
      else
      {
        v26 = *(int **)(v12 + 24);
        if ( v26 )
          sub_100194B0(v26, 844);
      }
      *(float *)(v12 + 844) = 8.0;
    }
    v27 = *(_DWORD *)(v12 + 824);
    v36 = 0.34999999;
    if ( v27 != COERCE_INT(0.34999999) )
    {
      if ( *(_BYTE *)(v12 + 84) )
      {
        *(_BYTE *)(v12 + 88) |= 1u;
      }
      else
      {
        v28 = *(int **)(v12 + 24);
        if ( v28 )
          sub_100194B0(v28, 824);
      }
      *(float *)(v12 + 824) = 0.34999999;
    }
    v29 = sub_10283340();
    v30 = (int *)v29;
    if ( v29 )
    {
      sub_102851D0(v29, (int)v6, "damage");
      (*(void (__thiscall **)(int *, int *, int))(*v30 + 140))(v30, v6, 1);
      sub_100E10C0((int)v30, &flt_106F1CA8);
      sub_100E0970((int)v30, v31, 0, 0);
      sub_100F5880(v30, 10.0);
    }
    return v6;
  }
  else
  {
    Warning("classname %s used to create wrong class type\n", v33);
    return 0;
  }
}
