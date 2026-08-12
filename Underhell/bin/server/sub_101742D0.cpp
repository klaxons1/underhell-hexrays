char __thiscall sub_101742D0(void *this, int a2, int a3, int a4, float a5)
{
  int v5; // ebx
  int v6; // edi
  int *v7; // ecx
  int v8; // edx
  unsigned int v9; // eax
  int *v10; // ecx
  int v11; // esi
  unsigned int v12; // edx
  int *v13; // ecx
  unsigned int v14; // edx
  int *v15; // ecx
  int v16; // ebx
  int v17; // esi
  int *v18; // ebx
  int *v19; // eax
  int *v20; // eax
  int *v21; // ecx
  _DWORD *v22; // eax
  void *v24; // [esp-8h] [ebp-50h]
  int v25[8]; // [esp+8h] [ebp-40h] BYREF
  char v26[8]; // [esp+28h] [ebp-20h] BYREF
  float v27; // [esp+30h] [ebp-18h]
  float v28[3]; // [esp+34h] [ebp-14h] BYREF
  void *v29; // [esp+40h] [ebp-8h]
  int v30; // [esp+44h] [ebp-4h]
  int v31; // [esp+50h] [ebp+8h]
  int v32; // [esp+50h] [ebp+8h]

  v5 = a2;
  v29 = this;
  if ( a2 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
  {
    v30 = a2;
  }
  else
  {
    v30 = 0;
    v5 = 0;
  }
  switch ( (int)a5 )
  {
    case 14:
      a2 = 0;
      break;
    case 15:
      a2 = 2;
      break;
    case 16:
      a2 = 4;
      break;
    case 17:
      a2 = 6;
      break;
    case 18:
      a2 = 8;
      break;
    default:
      break;
  }
  if ( !v5 )
    return 0;
  (*(void (__thiscall **)(int, char *, _DWORD, _DWORD))(*(_DWORD *)v5 + 528))(v5, v26, 0, 0);
  v27 = 0.0;
  off_10689714();
  v6 = sub_101811E0("prop_physics", -1);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v6 + 104))(v6, "models/PG_props/pg_obj/pg_glow_stick.mdl");
  if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
    sub_100DAE60(v5);
  v28[0] = *(float *)(v5 + 580);
  v28[1] = *(float *)(v5 + 584);
  v28[2] = *(float *)(v5 + 588) + 36.0;
  sub_100E0D20(v6, v28);
  if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
    sub_100DAE60(v5);
  sub_100E0EA0(v6, (float *)(v5 + 704));
  if ( *(_DWORD *)(v6 + 848) != a2 )
  {
    if ( *(_BYTE *)(v6 + 84) )
    {
      *(_BYTE *)(v6 + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(v6 + 24);
      if ( v7 )
        sub_100194B0(v7, 848);
    }
    *(_DWORD *)(v6 + 848) = a2;
  }
  sub_100EAB80((_DWORD *)v6, 32);
  sub_100EAB80((_DWORD *)v6, 16);
  sub_101129A0((unsigned __int16 *)(v6 + 320), *(_WORD *)(v6 + 356) | 4);
  sub_100E0970(v6, v8, 0, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 96))(v6);
  v25[2] = 0;
  v25[5] = -1;
  v25[6] = 0;
  sub_10211160(v6, (int)v25);
  sub_100EACE0((unsigned __int16 *)v6, v5, 0);
  v9 = *(_DWORD *)(v5 + 2164);
  if ( v9 != -1 )
  {
    v10 = &off_1061BE18[4 * (*(_DWORD *)(v5 + 2164) & 0xFFF) + 1];
    if ( off_1061BE18[4 * (*(_DWORD *)(v5 + 2164) & 0xFFF) + 2] == v9 >> 12 )
    {
      v11 = *v10;
      if ( *v10 )
      {
        v12 = *(_DWORD *)(v11 + 192) & 0xFFFFFFDF;
        v31 = v12;
        if ( *(_DWORD *)(v11 + 192) != v12 )
        {
          if ( *(_BYTE *)(v11 + 84) )
          {
            *(_BYTE *)(v11 + 88) |= 1u;
          }
          else
          {
            v13 = *(int **)(v11 + 24);
            if ( v13 )
            {
              sub_100194B0(v13, 192);
              v12 = v31;
            }
          }
          *(_DWORD *)(v11 + 192) = v12;
        }
        if ( *(_DWORD *)(v11 + 24) )
          **(_DWORD **)(v11 + 24) |= 0x80u;
        sub_100D8500((_DWORD *)v11);
        v14 = *(_DWORD *)(v11 + 192) & 0xFFFFFFEF;
        v32 = v14;
        if ( *(_DWORD *)(v11 + 192) != v14 )
        {
          if ( *(_BYTE *)(v11 + 84) )
          {
            *(_BYTE *)(v11 + 88) |= 1u;
          }
          else
          {
            v15 = *(int **)(v11 + 24);
            if ( v15 )
            {
              sub_100194B0(v15, 192);
              v14 = v32;
            }
          }
          *(_DWORD *)(v11 + 192) = v14;
        }
        sub_101129A0((unsigned __int16 *)(v11 + 320), *(_WORD *)(v11 + 356) & 0xFFFB);
        sub_1016AF10(v11);
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v11 + 140))(v11, 0, -1);
        sub_100E9550((_DWORD *)v11, 6, 0, 0, 0);
        v16 = v30;
        if ( (*(_DWORD *)(v30 + 252) & 0x800) != 0 )
          sub_100DAE60(v30);
        sub_100E0D20(v11, (float *)(v16 + 580));
        v17 = 0;
        v18 = (int *)(v16 + 4928);
        v19 = v18;
        while ( *v19 < 19 || *v19 > 23 )
        {
          ++v17;
          ++v19;
          if ( v17 >= 28 )
            goto LABEL_52;
        }
        if ( v18[v17] )
        {
          v20 = v18 - 1232;
          if ( *((_BYTE *)v18 - 4844) )
          {
            *((_BYTE *)v20 + 88) |= 1u;
          }
          else
          {
            v21 = (int *)v20[6];
            if ( v21 )
              sub_100194B0(v21, 4 * v17 + 4928);
          }
          v18[v17] = 0;
        }
LABEL_52:
        v5 = v30;
      }
    }
  }
  v22 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
  v24 = v29;
  *(_DWORD *)(v5 + 2164) = *v22;
  sub_1025FAC0(v24);
  return 1;
}
