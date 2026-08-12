float *__usercall sub_10211990@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int v3; // ebx
  float *v4; // edi
  float *result; // eax
  int *v6; // ecx
  int v7; // ebx
  int v8; // edi
  char *v9; // eax
  char *v10; // [esp-4h] [ebp-18h]
  float v11; // [esp+0h] [ebp-14h]
  int v12; // [esp+0h] [ebp-14h]
  float v13; // [esp+10h] [ebp-4h] BYREF

  sub_10211600(a1, a2);
  if ( !*(_DWORD *)(a1 + 1692) )
  {
    v3 = *(_DWORD *)(a1 + 424);
    if ( !v3 )
      return (float *)sub_1025FAC0(a1);
    v4 = (float *)sub_10022D70();
    *v4 = *(float *)(a1 + 340) - *(float *)(a1 + 328);
    v4[1] = *(float *)(a1 + 344) - *(float *)(a1 + 332);
    v4[2] = *(float *)(a1 + 348) - *(float *)(a1 + 336);
    v11 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v3 + 116))(v3);
    v13 = COERCE_FLOAT(sub_102159E0(*v4, v4[1], v4[2], v11));
    sub_1020AC90((_DWORD *)(a1 + 1692), &v13);
  }
  if ( (*(_DWORD *)(a1 + 248) & 0x2000) != 0 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(a1 + 1120) + 96))(a1 + 1120, 2);
  if ( *(_DWORD *)(a1 + 1692) != 3 )
    goto LABEL_9;
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 12))(dword_106B31D0) )
    return (float *)sub_1025FAC0(a1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(a1 + 1120) + 96))(a1 + 1120, 2);
LABEL_9:
  if ( !*(_DWORD *)(a1 + 420) )
    sub_100EBE30(a1, 17);
  if ( (*(_DWORD *)(a1 + 248) & 4) != 0 )
    sub_100EBE30(a1, 1);
  v13 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(a1 + 424) + 116))(*(_DWORD *)(a1 + 424));
  if ( *(_DWORD *)(a1 + 1696) != LODWORD(v13) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(a1 + 24);
      if ( v6 )
        sub_100194B0(v6, 1696);
    }
    *(float *)(a1 + 1696) = v13;
  }
  *(_BYTE *)(a1 + 1700) = 0;
  result = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 320) + 44))(a1 + 320);
  if ( result == (float *)6 && *(_BYTE *)(a1 + 306) == 6 )
  {
    v7 = *(_DWORD *)(a1 + 424);
    if ( v7 )
    {
      result = (float *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v7 + 292))(*(_DWORD *)(a1 + 424));
      if ( result )
      {
        v8 = *(_DWORD *)dword_106BAFF0;
        v12 = (*(int (__thiscall **)(int, float *, float *))(*(_DWORD *)v7 + 292))(v7, &flt_106F1CA8, &flt_106F1CB4);
        v10 = sub_1020EA80((char *)(a1 + 1716));
        v9 = sub_1020EA50((char *)(a1 + 1704));
        (*(void (__thiscall **)(int, char *, char *, int))(v8 + 92))(dword_106BAFF0, v9, v10, v12);
        result = sub_10112B00((_BYTE *)(a1 + 320), 4, 0, 0);
        *(_BYTE *)(a1 + 1700) = 1;
      }
    }
  }
  return result;
}
