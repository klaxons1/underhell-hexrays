float *__stdcall sub_10122950(int a1, int a2, char *a3)
{
  int v3; // eax
  float *v4; // edi
  int v5; // eax
  unsigned int v7; // [esp+14h] [ebp+Ch]

  v3 = sub_1022FDF0(108);
  if ( v3 )
  {
    *(_BYTE *)(v3 + 12) = 0;
    *(float *)v3 = 0.0;
    v4 = (float *)v3;
    *(float *)(v3 + 4) = 0.0;
    *(float *)(v3 + 8) = 0.0;
    *(float *)(v3 + 16) = 0.0;
    *(_BYTE *)(v3 + 28) = 0;
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
    v4 = 0;
  }
  if ( a2 == -1 )
  {
    v7 = 0;
  }
  else if ( *((_DWORD *)off_103DCD74 + 4 * a2 + 1) )
  {
    v7 = a2 | (*((_DWORD *)off_103DCD74 + 4 * a2 + 2) << 12);
  }
  else
  {
    v7 = -1;
  }
  if ( v7 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v7 & 0xFFF) + 2) != v7 >> 12 )
    v5 = 0;
  else
    v5 = *((_DWORD *)off_103DCD74 + 4 * (v7 & 0xFFF) + 1);
  sub_10122270(v4, a1, v5, 0, a3, 75);
  return v4;
}
