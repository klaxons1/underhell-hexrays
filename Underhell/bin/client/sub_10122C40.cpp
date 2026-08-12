int __stdcall sub_10122C40(int a1, int a2, int a3)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edi
  double v6; // st7
  double v7; // st7
  int result; // eax
  float v9; // [esp+0h] [ebp-10h]
  float v10; // [esp+0h] [ebp-10h]
  unsigned int v11; // [esp+1Ch] [ebp+Ch]

  v3 = sub_1022FDF0(108);
  v4 = 0;
  if ( v3 )
  {
    *(float *)v3 = 0.0;
    *(_BYTE *)(v3 + 12) = 0;
    *(float *)(v3 + 4) = 0.0;
    v5 = v3;
    *(float *)(v3 + 8) = 0.0;
    *(_BYTE *)(v3 + 28) = 0;
    *(float *)(v3 + 16) = 0.0;
    *(float *)(v3 + 20) = 0.0;
    *(float *)(v3 + 24) = 0.0;
    *(_DWORD *)(v3 + 52) = -1;
    *(_DWORD *)(v3 + 76) = &CCopyRecipientFilter::`vftable';
    *(_DWORD *)(v3 + 80) = 0;
    *(_DWORD *)(v3 + 84) = 0;
    *(_DWORD *)(v3 + 88) = 0;
    *(_DWORD *)(v3 + 92) = 0;
    *(_DWORD *)(v3 + 96) = 0;
    *(_DWORD *)(v3 + 100) = 0;
    ++dword_10437918;
    *(_DWORD *)(v3 + 44) = 0;
    *(_DWORD *)(v3 + 48) = 0;
    *(float *)(v3 + 104) = *(float *)(dword_1043793C + 44);
  }
  else
  {
    v5 = 0;
  }
  if ( a2 == -1 )
  {
    v11 = 0;
  }
  else if ( *((_DWORD *)off_103DCD74 + 4 * a2 + 1) )
  {
    v11 = a2 | (*((_DWORD *)off_103DCD74 + 4 * a2 + 2) << 12);
  }
  else
  {
    v11 = -1;
  }
  if ( v11 != -1 && *((_DWORD *)off_103DCD74 + 4 * (v11 & 0xFFF) + 2) == v11 >> 12 )
    v4 = *((_DWORD *)off_103DCD74 + 4 * (v11 & 0xFFF) + 1);
  sub_10122270((float *)v5, a1, v4, *(_DWORD *)a3, *(char **)(a3 + 4), *(_DWORD *)(a3 + 12));
  v6 = *(float *)(a3 + 8);
  *(_DWORD *)(v5 + 60) |= 1u;
  if ( v6 > 1.0 )
    v6 = 1.0;
  v9 = v6;
  sub_10121910((float *)(v5 + 16), v9, 0.0);
  v7 = (double)*(int *)(a3 + 20);
  *(_DWORD *)(v5 + 60) |= 2u;
  v10 = v7;
  sub_10121910((float *)v5, v10, 0.0);
  result = v5;
  if ( *(char *)(a3 + 16) < 0 )
    *(_DWORD *)(v5 + 64) = 128;
  return result;
}
