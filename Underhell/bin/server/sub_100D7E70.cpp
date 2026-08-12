int __userpurge sub_100D7E70@<eax>(_DWORD *a1@<ecx>, int a2@<edi>, int a3)
{
  int v4; // ecx
  float v5; // edx
  int v6; // eax
  float v7; // edx
  int v8; // eax
  int v9; // edx
  char v10; // al
  int v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // esi
  double v17; // st7
  double v18; // st7
  int v19; // edi
  int v20; // esi
  _DWORD v21[1027]; // [esp+8h] [ebp-1018h] BYREF
  float v22; // [esp+1014h] [ebp-Ch] BYREF
  float v23; // [esp+1018h] [ebp-8h]
  float v24; // [esp+101Ch] [ebp-4h]
  float v25; // [esp+1028h] [ebp+8h]

  if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B3CDC + 76))(
         dword_106B3CDC,
         *(_DWORD *)(a3 + 64)) )
  {
    return 1;
  }
  if ( !*(_DWORD *)(a3 + 64) )
    return 1;
  v4 = a1[106];
  if ( !v4 )
    return 1;
  v5 = *(float *)(a3 + 4);
  v23 = *(float *)(a3 + 8);
  v6 = *(_DWORD *)(a3 + 16);
  v22 = v5;
  v7 = *(float *)(a3 + 12);
  v21[1024] = v6;
  v8 = *(_DWORD *)(a3 + 24);
  v24 = v7;
  v9 = *(_DWORD *)(a3 + 20);
  v21[1026] = v8;
  v21[1025] = v9;
  v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 76))(v4, a2);
  if ( (v10 & 4) != 0 )
  {
    v11 = *(_DWORD *)(dword_106B31C8 + 20);
    if ( v11 == 1 )
    {
      v12 = sub_10261B20();
LABEL_14:
      if ( v12 )
      {
        v17 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)v12 + 1480))(v12, a1[106]);
        if ( 0.0 != v17 )
        {
          v25 = v17;
          v18 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)a1[106] + 116))(a1[106]) / v25;
          v22 = v22 * v18;
          v23 = v23 * v18;
          v24 = v18 * v24;
        }
      }
      goto LABEL_11;
    }
    v13 = 1;
    if ( v11 >= 1 )
    {
      while ( 1 )
      {
        v14 = sub_1025FB50(v13);
        v15 = v14;
        if ( v14 )
        {
          if ( (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 1484))(v14) == a1 )
            break;
        }
        if ( ++v13 > *(_DWORD *)(dword_106B31C8 + 20) )
          goto LABEL_11;
      }
      v12 = v15;
      goto LABEL_14;
    }
LABEL_11:
    (*(void (__thiscall **)(_DWORD, float *))(*(_DWORD *)a1[106] + 240))(a1[106], &v22);
    return 1;
  }
  if ( (v10 & 8) == 0 )
    goto LABEL_11;
  if ( (v10 & 2) == 0 )
    goto LABEL_11;
  v19 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int))(*a1 + 624))(a1, v21, 1024);
  v20 = 0;
  if ( v19 <= 0 )
    goto LABEL_11;
  while ( ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)v21[v20] + 76))(v21[v20]) & 2) != 0 )
  {
    if ( ++v20 >= v19 )
      goto LABEL_11;
  }
  (*(void (__thiscall **)(_DWORD, float *))(*(_DWORD *)v21[v20] + 240))(v21[v20], &v22);
  return 1;
}
