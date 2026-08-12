int __userpurge sub_1016F230@<eax>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  int result; // eax
  float *v5; // ebx
  float *v6; // eax
  double v7; // st7
  double v8; // st7
  double v9; // st7
  int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // [esp-4h] [ebp-58h]
  int v16; // [esp+0h] [ebp-54h]
  float v17; // [esp+4h] [ebp-50h]
  int v18; // [esp+8h] [ebp-4Ch]
  int v19; // [esp+Ch] [ebp-48h]
  int v20; // [esp+10h] [ebp-44h]
  int v21; // [esp+14h] [ebp-40h]
  int v22; // [esp+18h] [ebp-3Ch]
  float v23; // [esp+1Ch] [ebp-38h]
  int v24; // [esp+1Ch] [ebp-38h]
  int v25; // [esp+20h] [ebp-34h]
  int v26; // [esp+24h] [ebp-30h]
  float v27; // [esp+28h] [ebp-2Ch]
  int v28; // [esp+2Ch] [ebp-28h]
  float v29; // [esp+38h] [ebp-1Ch]
  float v30; // [esp+3Ch] [ebp-18h]
  float v31; // [esp+40h] [ebp-14h]
  int v32; // [esp+48h] [ebp-Ch]
  int v33; // [esp+4Ch] [ebp-8h]

  v32 = 0;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1);
  if ( result )
  {
    if ( (*(_DWORD *)(a1 + 1976) & 0x800000) != 0 )
    {
      v28 = a2;
      v5 = sub_101356D0();
      v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 - 4) + 36))(a1 - 4);
      v29 = *v6 - *v5;
      v30 = v6[1] - v5[1];
      v31 = v6[2] - v5[2];
      off_103EDFEC();
      a2 = v28;
      v7 = *(float *)(a1 + 2048) * v30 + *(float *)(a1 + 2044) * v29 + *(float *)(a1 + 2052) * v31;
      if ( v7 > 0.0 )
      {
        if ( v7 >= 0.3 )
          v7 = 0.3;
        v23 = v7;
        v8 = sub_100145F0(v23, 0.0, 0.30000001, 0.0, 1.0);
        if ( (double)*(int *)(a1 + 2040) - (double)*(int *)(a1 + 2040) * v8 >= 1.0 )
          v9 = (double)*(int *)(a1 + 2040) - v8 * (double)*(int *)(a1 + 2040);
        else
          v9 = 1.0;
        LOWORD(v33) = *(_DWORD *)(a1 + 84);
        BYTE2(v33) = BYTE2(*(_DWORD *)(a1 + 84));
        HIBYTE(v33) = (int)v9;
        if ( *(_DWORD *)(a1 + 84) != v33 )
          *(_DWORD *)(a1 + 84) = v33;
      }
    }
    v10 = *(_DWORD *)dword_10413178;
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1);
    v12 = (*(int (__thiscall **)(int, int))(v10 + 36))(dword_10413178, v11) - 2;
    if ( v12 )
    {
      if ( v12 == 1 )
        return sub_1016BC40((_DWORD *)(a1 - 4), a3);
    }
    else
    {
      if ( *(int *)(a1 + 1196) <= 0 )
        v13 = 0;
      else
        v13 = sub_1007A6A0(off_103DCD78, *(_DWORD *)(a1 + 1196));
      v27 = *(float *)(a1 + 2056);
      v26 = *(unsigned __int8 *)(a1 + 86);
      v25 = *(unsigned __int8 *)(a1 + 85);
      v24 = *(unsigned __int8 *)(a1 + 84);
      v22 = *(unsigned __int8 *)(a1 + 87);
      v21 = *(unsigned __int8 *)(a1 + 80);
      v20 = *(unsigned __int8 *)(a1 + 112);
      v19 = *(_DWORD *)(a1 + 1192);
      v18 = v13;
      v17 = *(float *)(a1 + 2068);
      v16 = (*(int (__thiscall **)(int))(*(_DWORD *)(a1 - 4) + 40))(a1 - 4);
      v15 = (*(int (__thiscall **)(int))(*(_DWORD *)(a1 - 4) + 36))(a1 - 4);
      v14 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1);
      return sub_1006C500(
               (double (__thiscall ***)(_DWORD, int, int *, int, int, int, float *))(a1 + 1956),
               a2,
               a1 - 4,
               v14,
               v15,
               v16,
               v17,
               v18,
               v19,
               v20,
               v21,
               v22,
               v24,
               v25,
               v26,
               v27,
               1.0);
    }
    return v32;
  }
  return result;
}
