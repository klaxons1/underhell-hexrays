int __userpurge sub_100C35D0@<eax>(int a1@<edi>, int *a2, wchar_t *Source)
{
  int result; // eax
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax

  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, *((_DWORD *)Source + 2054));
  **((_WORD **)Source + 2048) = 0;
  result = wcslen(Source);
  if ( result )
  {
    v4 = sub_100DDA40(36);
    if ( v4 )
    {
      *(_DWORD *)(v4 + 8) = 0;
      *(float *)(v4 + 16) = 0.0;
      *(_DWORD *)(v4 + 12) = 0;
      *(_WORD *)(v4 + 20) = 0;
      *(_DWORD *)(v4 + 24) = 0;
      *(_DWORD *)(v4 + 28) = 0;
      *(_DWORD *)(v4 + 32) = -1;
      v5 = v4;
    }
    else
    {
      v5 = 0;
    }
    sub_100BF7E0((int *)v5, Source);
    *(_DWORD *)(v5 + 32) = *(_DWORD *)(Source + 4105);
    *(_BYTE *)(v5 + 20) = *((_BYTE *)Source + 8208);
    *(_BYTE *)(v5 + 21) = *((_BYTE *)Source + 8209);
    *(_DWORD *)(v5 + 8) = *((_DWORD *)Source + 2051);
    v6 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_1047CA6C + 268))(
           dword_1047CA6C,
           *((_DWORD *)Source + 2054),
           a1);
    *(_DWORD *)(v5 + 12) = v6;
    v7 = *((_DWORD *)Source + 2049);
    *(_DWORD *)(v5 + 4) = *((_DWORD *)Source + 2050);
    *(_DWORD *)v5 = v7;
    v8 = *((_DWORD *)Source + 2054);
    *(float *)(v5 + 16) = 0.0;
    *(_DWORD *)(v5 + 28) = v8;
    v9 = a2[2054];
    if ( v9 <= v6 + *((_DWORD *)Source + 2050) )
      v9 = v6 + *((_DWORD *)Source + 2050);
    v10 = a2[2053];
    if ( v10 <= *((_DWORD *)Source + 2051) + *((_DWORD *)Source + 2049) )
      v10 = *((_DWORD *)Source + 2051) + *((_DWORD *)Source + 2049);
    a2[2054] = v9;
    a2[2053] = v10;
    sub_100C30D0(a2, v5);
    v11 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(
            dword_1047CA6C,
            *((_DWORD *)Source + 2054));
    return sub_100BFD20(Source, v11);
  }
  return result;
}
