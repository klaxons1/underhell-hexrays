int __usercall sub_102113C0@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  __int16 v3; // ax
  int v4; // eax
  int v5; // ecx
  bool v6; // sf
  double v7; // st7
  char *v8; // eax
  __int64 v10; // [esp+4h] [ebp-10h]
  __int64 v11; // [esp+4h] [ebp-10h]
  float v12; // [esp+8h] [ebp-Ch]

  v3 = *(_WORD *)(a1 + 1548);
  if ( v3 != -1 )
  {
    sub_1020D700(a1, v3);
    *(_WORD *)(a1 + 1548) = -1;
  }
  if ( *(_BYTE *)(a1 + 1532) && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(a1 + 1536) )
  {
    v4 = sub_100BDCE0(a1, 1);
    sub_100C3330(a1, v4);
    sub_100C1A10(a1);
    HIDWORD(v10) = a1;
    LODWORD(v10) = 0;
    sub_1010DD80((_DWORD *)(a1 + 1448), v10, 0.0);
    *(float *)(a1 + 1536) = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                              *(float *)(a1 + 1540),
                              *(float *)(a1 + 1544))
                          + *(float *)(dword_106B31C8 + 12);
  }
  v5 = *(_DWORD *)(a1 + 1528);
  v6 = v5 < 0;
  if ( v5 > 0 )
  {
    if ( *(float *)(a1 + 904) >= 0.99900001 )
      goto LABEL_11;
    v6 = v5 < 0;
  }
  if ( !v6 || *(float *)(a1 + 904) > 0.0 )
    goto LABEL_20;
LABEL_11:
  if ( *(_BYTE *)(a1 + 897) )
  {
LABEL_20:
    v7 = *(float *)(dword_106B31C8 + 12) + 0.1;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(a1 + 908) != *(_DWORD *)(a1 + 1524) )
  {
    sub_1020D850(a1, *(_DWORD *)(a1 + 1524));
    goto LABEL_22;
  }
  HIDWORD(v11) = a1;
  LODWORD(v11) = 0;
  sub_1010DD80((_DWORD *)(a1 + 1472), v11, 0.0);
  if ( *(_BYTE *)(a1 + 1532) )
  {
    v7 = *(float *)(a1 + 1536) + *(float *)(dword_106B31C8 + 12) + 0.1;
LABEL_21:
    v12 = v7;
    sub_100EC4A0((int *)a1, v12, 0);
    goto LABEL_22;
  }
  if ( *(_DWORD *)(a1 + 1520) )
  {
    v8 = *(char **)(a1 + 1520);
    if ( !v8 )
      v8 = (char *)String;
    sub_1020FBB0((_DWORD *)a1, v8);
  }
LABEL_22:
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 728))(a1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 784))(a1, a1);
  return sub_101BD0E0((int *)(a1 + 1552), a2, *(float *)&a1, a1);
}
