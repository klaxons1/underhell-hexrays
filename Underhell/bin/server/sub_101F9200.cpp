int __thiscall sub_101F9200(void *this, int a2, int a3, int a4)
{
  int v7; // ecx
  double v8; // st7
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  float *v15; // eax
  int v16; // eax
  double v17; // st7
  double v18; // st6
  int v19; // eax
  int result; // eax
  int v21; // esi
  int *v22; // ecx
  void (__thiscall **v23)(int, int); // [esp+3Ch] [ebp+8h]
  int v24; // [esp+3Ch] [ebp+8h]
  int *v25; // [esp+40h] [ebp+Ch]

  (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 12))(this, a2, a3);
  v7 = dword_106B31C8;
  v25 = (int *)(a2 + 4216);
  *(float *)(dword_106B31C8 + 12) = (double)*(int *)(a2 + 4216) * *(float *)(dword_106B31C8 + 28);
  if ( *(_BYTE *)(a2 + 4220) )
    v8 = 0.0;
  else
    v8 = *(float *)(v7 + 28);
  *(float *)(dword_106B31C8 + 16) = v8;
  *(_DWORD *)(a3 + 36) |= *(_DWORD *)(a2 + 3312);
  *(_DWORD *)(a3 + 36) &= ~*(_DWORD *)(a2 + 3308);
  if ( *(_BYTE *)(a2 + 4220)
    && *(_BYTE *)(a2 + 306) == 8
    && *(_DWORD *)(*(_DWORD *)(dword_1069ABE0 + 28) + 48)
    && *(_DWORD *)(dword_106BBA84 + 48) )
  {
    *(float *)(dword_106B31C8 + 16) = *(float *)(dword_106B31C8 + 28);
  }
  (*(void (__thiscall **)(int *, int))(*off_10667F9C + 8))(off_10667F9C, a2);
  sub_1011AF70((_DWORD *)a2, a3);
  if ( *(_DWORD *)(a3 + 44) )
  {
    if ( ((v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(
                  dword_106B31D0,
                  *(_DWORD *)(a3 + 44))) != 0
       || (v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
      && (v10 = *(_DWORD *)(v9 + 12)) != 0 )
    {
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 20))(v10);
    }
    else
    {
      v11 = 0;
    }
    v12 = __RTDynamicCast(
            v11,
            0,
            (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
            (int)&CBaseCombatWeapon `RTTI Type Descriptor',
            0);
    if ( v12 )
    {
      v23 = (void (__thiscall **)(int, int))(*(_DWORD *)a2 + 1432);
      v13 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 1256))(v12, *(_DWORD *)(a3 + 48));
      (*v23)(a2, v13);
    }
  }
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1092))(a2);
  v24 = v14;
  if ( *(_BYTE *)(a3 + 40) && (!v14 || sub_100F5970((void *)a2)) )
    *(_DWORD *)(a2 + 4152) = *(unsigned __int8 *)(a3 + 40);
  sub_100F5B80((_DWORD *)a2, *(_DWORD *)(a3 + 36));
  sub_101F90E0(a2, *(float *)(dword_106B31C8 + 28));
  v15 = (float *)off_10668020;
  *((float *)off_10668020 + 22) = *(float *)(a2 + 3248);
  v15[23] = *(float *)(a2 + 3252);
  v15[24] = *(float *)(a2 + 3256);
  v16 = *(_DWORD *)(a2 + 3264);
  if ( v16 )
  {
    if ( v16 != 2 )
      goto LABEL_26;
    v18 = *(float *)(a3 + 16) + *(float *)(a2 + 3272);
    v17 = *(float *)(a3 + 20) + *(float *)(a2 + 3276);
    *(float *)(a2 + 3248) = *(float *)(a3 + 12) + *(float *)(a2 + 3268);
    *(float *)(a2 + 3252) = v18;
  }
  else
  {
    *(float *)(a2 + 3248) = *(float *)(a3 + 12);
    *(float *)(a2 + 3252) = *(float *)(a3 + 16);
    v17 = *(float *)(a3 + 20);
  }
  *(float *)(a2 + 3256) = v17;
LABEL_26:
  if ( sub_101C8820((_DWORD *)a2, 0) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 264))(dword_106B3CDC, a2);
    (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 1192))(a2);
  }
  v19 = sub_100E9270((_DWORD *)a2, 0);
  if ( v19 > 0 && v19 <= *v25 )
  {
    sub_100EC4A0((int *)a2, -1.0, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 196))(a2);
  }
  (*(void (__thiscall **)(void *, int, int, int, void *))(*(_DWORD *)this + 4))(this, a2, a3, a4, off_10668020);
  if ( v24 )
    (*(void (__thiscall **)(int, int, void *))(*(_DWORD *)v24 + 20))(v24, a2, off_10668020);
  else
    (*(void (__thiscall **)(int *, int, void *))(*off_10667F9C + 4))(off_10667F9C, a2, off_10668020);
  (*(void (__thiscall **)(void *, int, int, void *))(*(_DWORD *)this + 8))(this, a2, a3, off_10668020);
  (*(void (__thiscall **)(int))(*(_DWORD *)a4 + 12))(a4);
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 1196))(a2);
  (*(void (__thiscall **)(int *, int))(*off_10667F9C + 12))(off_10667F9C, a2);
  *(_DWORD *)(a2 + 4120) = 0;
  result = sub_100E8600(0);
  dword_10697280 = 0;
  v21 = *v25 + 1;
  if ( *v25 != v21 )
  {
    result = (int)(v25 - 1054);
    if ( *((_BYTE *)v25 - 4132) )
    {
      *(_BYTE *)(result + 88) |= 1u;
      *v25 = v21;
    }
    else
    {
      v22 = *(int **)(result + 24);
      if ( v22 )
        result = sub_100194B0(v22, 4216);
      *v25 = v21;
    }
  }
  return result;
}
