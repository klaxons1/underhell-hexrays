int __usercall sub_1020DBB0@<eax>(float *a1@<eax>, float *a2@<ecx>, int a3@<edi>, int a4, int a5, int a6)
{
  int result; // eax
  int v7; // esi
  int v8; // ebx
  int *v9; // ecx
  unsigned int v10; // ebx
  int *v11; // ecx
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  const char *v15; // eax
  int v16; // ebx
  int *v17; // ecx
  _DWORD *v18; // eax
  int v19; // eax
  float *v20; // eax
  float *v21; // edi
  int v22; // ebx
  int v23; // ebx
  int v24; // eax
  int v25; // ebx
  int v26; // edi
  float v27; // [esp+1Ch] [ebp-24h]
  float v28; // [esp+24h] [ebp-1Ch]
  float v29; // [esp+28h] [ebp-18h]
  float v30; // [esp+28h] [ebp-18h]
  float v31; // [esp+28h] [ebp-18h]
  float v32; // [esp+28h] [ebp-18h]
  float v33; // [esp+28h] [ebp-18h]
  int v34; // [esp+2Ch] [ebp-14h]
  int v35; // [esp+38h] [ebp-8h] BYREF
  void (__thiscall **v36)(int, _DWORD); // [esp+3Ch] [ebp-4h]

  result = sub_100E2680((int)"prop_physics", a2, a1, a4);
  v7 = result;
  if ( result )
  {
    v34 = a3;
    if ( a4 )
    {
      v8 = *(_DWORD *)(result + 248) | *(_DWORD *)(a4 + 248);
      if ( *(_DWORD *)(result + 248) != v8 )
      {
        if ( *(_BYTE *)(result + 84) )
        {
          *(_BYTE *)(result + 88) |= 1u;
        }
        else
        {
          v9 = *(int **)(result + 24);
          if ( v9 )
            sub_100194B0(v9, 248);
        }
        *(_DWORD *)(v7 + 248) = v8;
      }
      v10 = *(_DWORD *)(v7 + 248) & 0xFFFFFFF7;
      if ( *(_DWORD *)(v7 + 248) != v10 )
      {
        if ( *(_BYTE *)(v7 + 84) )
        {
          *(_BYTE *)(v7 + 88) |= 1u;
        }
        else
        {
          v11 = *(int **)(v7 + 24);
          if ( v11 )
            sub_100194B0(v11, 248);
        }
        *(_DWORD *)(v7 + 248) = v10;
      }
    }
    *(float *)(v7 + 1200) = *(float *)(a6 + 16);
    v12 = __RTDynamicCast(
            a4,
            0,
            (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
            (int)&CBreakableProp `RTTI Type Descriptor',
            0);
    v35 = v12;
    if ( v12 )
    {
      v13 = v12 + 1120;
      v14 = *(_DWORD *)(v12 + 1120);
      v36 = *(void (__thiscall ***)(int, _DWORD))(v7 + 1120);
      v29 = ((double (__thiscall *)(int, int))*(_DWORD *)(v14 + 12))(v13, a3);
      (*v36)(v7 + 1120, LODWORD(v29));
      v36 = (void (__thiscall **)(int, _DWORD))(*(_DWORD *)(v7 + 1120) + 4);
      v30 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v13 + 16))(v13);
      (*v36)(v7 + 1120, LODWORD(v30));
      v36 = (void (__thiscall **)(int, _DWORD))(*(_DWORD *)(v7 + 1120) + 8);
      v31 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v13 + 20))(v13);
      (*v36)(v7 + 1120, LODWORD(v31));
      sub_1020D350(v7, v35);
    }
    *(_DWORD *)(v7 + 460) = *sub_10162BE0(&v35, (_BYTE *)(a5 + 12));
    sub_100D8500((_DWORD *)v7);
    v15 = *(const char **)(*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v7 + 28))(v7, &v35, v34);
    if ( !v15 )
      v15 = String;
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v7 + 104))(v7, v15);
    sub_100EBE30(v7, *(_DWORD *)(a5 + 1056));
    if ( *(float *)(a5 + 1040) > 0.0 && *(float *)(a5 + 1040) <= (double)*(float *)(a5 + 1044) )
      sub_100C3430(v7, *(float *)(a5 + 1040), *(float *)(a5 + 1044));
    if ( 0.0 != *(float *)(a5 + 1036) )
    {
      v16 = *(_DWORD *)(v7 + 248) | 0x400000;
      if ( *(_DWORD *)(v7 + 248) != v16 )
      {
        if ( *(_BYTE *)(v7 + 84) )
        {
          *(_BYTE *)(v7 + 88) |= 1u;
        }
        else
        {
          v17 = *(int **)(v7 + 24);
          if ( v17 )
            sub_100194B0(v17, 248);
        }
        *(_DWORD *)(v7 + 248) = v16;
      }
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 96))(v7);
    v18 = (_DWORD *)__RTDynamicCast(
                      a4,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                      (int)&CBreakableProp `RTTI Type Descriptor',
                      0);
    if ( v18 && (v18[64] & 0x8000000) != 0 )
    {
      v19 = sub_100BD8F0(v18);
      v20 = (float *)__RTDynamicCast(
                       v19,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                       (int)&CEntityFlame `RTTI Type Descriptor',
                       0);
      v21 = v20;
      v28 = 0.0;
      if ( v20 )
      {
        v22 = *(_DWORD *)v7;
        v27 = sub_1012AF80(v20);
        (*(void (__thiscall **)(int, _DWORD, _DWORD, float, _DWORD))(v22 + 808))(
          v7,
          LODWORD(v27),
          0,
          COERCE_FLOAT(LODWORD(v28)),
          0);
        v23 = *(_DWORD *)v7;
        v24 = sub_1012AF90(v21);
        (*(void (__thiscall **)(int, int))(v23 + 816))(v7, v24);
        v25 = *(_DWORD *)v7;
        v32 = sub_1012AFA0(v21);
        (*(void (__thiscall **)(int, _DWORD))(v25 + 820))(v7, LODWORD(v32));
        return v7;
      }
      v26 = *(_DWORD *)v7;
      v33 = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4
                                                                                           + 4))(
              dword_106B31E4,
              5.0,
              10.0,
              0,
              LODWORD(v28),
              0);
      (*(void (__thiscall **)(int, _DWORD))(v26 + 808))(v7, LODWORD(v33));
    }
    return v7;
  }
  return result;
}
