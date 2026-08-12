int __userpurge sub_102B0A00@<eax>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  int *v4; // ecx
  int *v5; // ecx
  int result; // eax
  int v7; // edi
  float v8; // [esp+24h] [ebp-4h]

  *(_BYTE *)(a1 + 1396) = 1;
  *(float *)(a1 + 1392) = *(float *)(sub_100D0CC0((__int16 *)a1) + 88) + *(float *)(dword_106B31C8 + 12);
  if ( *(_DWORD *)(a1 + 1132) != *(_DWORD *)(a1 + 1392) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(a1 + 24);
      if ( v4 )
        sub_100194B0(v4, 1132);
    }
    *(float *)(a1 + 1132) = *(float *)(a1 + 1392);
  }
  v8 = *(float *)(sub_100D0CC0((__int16 *)a1) + 92) + *(float *)(dword_106B31C8 + 12);
  if ( *(_DWORD *)(a1 + 1132) != LODWORD(v8) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(a1 + 24);
      if ( v5 )
        sub_100194B0(v5, 1132);
    }
    *(float *)(a1 + 1132) = v8;
  }
  result = sub_100D1940((_DWORD *)a1);
  v7 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      if ( a3 )
        ++*(_DWORD *)(a1 + 1376);
      else
        ++*(_DWORD *)(a1 + 1372);
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v7 + 1300))(v7, 11, a2);
      (*(void (__thiscall **)(int, int, bool))(*(_DWORD *)off_10627F88 + 116))(off_10627F88, v7, a3 == 0);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 944))(a1, 195);
      return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 1132))(a1, 1, 0.0);
    }
  }
  return result;
}
