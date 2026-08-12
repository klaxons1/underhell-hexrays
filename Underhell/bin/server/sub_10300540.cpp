int __usercall sub_10300540@<eax>(int a1@<ecx>, double a2@<st0>)
{
  unsigned int v3; // eax
  int v4; // eax
  unsigned int v5; // eax
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  int *v11; // ecx
  unsigned int v12; // eax
  int v13; // edi
  float *v14; // eax
  _DWORD *v15; // eax
  float *v16; // eax
  float v17; // ecx
  float v18; // edx
  float v19; // eax
  int result; // eax
  float v21[3]; // [esp+4h] [ebp-18h] BYREF
  float v22[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( sub_102FC120((float *)a1) )
  {
    *(_DWORD *)(a1 + 3988) = 1;
    v3 = *(_DWORD *)(a1 + 4100);
    if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 4100) & 0xFFF) + 2] != v3 >> 12 )
      v4 = 0;
    else
      v4 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4100) & 0xFFF) + 1];
    sub_100577F0(a1 + 3700, v4, 0);
    a2 = 0.0;
    *(float *)(a1 + 4072) = 0.0;
    v5 = *(_DWORD *)(a1 + 412);
    if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 2] != v5 >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 1];
    v7 = (_DWORD *)__RTDynamicCast(
                     v6,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                     (int)&CAntlionTemplateMaker `RTTI Type Descriptor',
                     0);
    if ( v7 )
      sub_102ABBB0(v7, 1);
  }
  v8 = *(_DWORD *)(a1 + 3988);
  if ( !v8 )
    return 0;
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      v10 = *(_DWORD *)(a1 + 4104);
      if ( v10 != -1 )
      {
        v11 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 4104) & 0xFFF) + 1];
        v12 = v10 >> 12;
        if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 4104) & 0xFFF) + 2] == v12 )
        {
          if ( *v11 )
          {
            if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 4104) & 0xFFF) + 2] == v12 )
              v13 = *v11;
            else
              v13 = 0;
            if ( (*(_DWORD *)(v13 + 252) & 0x800) != 0 )
              sub_100DAE60(v13);
            v14 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 576))(a1);
            if ( fabs(v14[1] - *(float *)(v13 + 584))
               + fabs(*v14 - *(float *)(v13 + 580))
               + fabs(v14[2] - *(float *)(v13 + 588)) > 256.0 )
            {
              if ( sub_1026A890((unsigned int *)(a1 + 4104)) )
              {
                v15 = (_DWORD *)sub_1026A890((unsigned int *)(a1 + 4104));
                v16 = (float *)sub_10019640(v15);
              }
              else
              {
                v16 = (float *)(a1 + 2864);
              }
              v17 = *v16;
              v18 = v16[1];
              v19 = v16[2];
              v22[0] = v17;
              v22[1] = v18;
              v22[2] = v19;
              if ( sub_102FF820(a1, v22, v21) )
              {
                *(float *)(a1 + 2864) = v21[0];
                result = 101;
                *(float *)(a1 + 2868) = v21[1];
                *(float *)(a1 + 2872) = v21[2];
                return result;
              }
            }
          }
        }
      }
    }
    return 0;
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(a1 + 3700) + 24))(a1 + 3700) )
    return 0;
  if ( sub_102FEC30((_DWORD *)a1) )
    return 104;
  sub_10164AB0((_DWORD *)a1, a1 + 3700);
  return sub_10092C60(a1, a2);
}
