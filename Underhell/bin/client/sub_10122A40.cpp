float *__stdcall sub_10122A40(int a1, int a2, int a3, char *a4, float a5)
{
  int v5; // eax
  double v6; // st7
  float *v7; // edi
  int v8; // esi
  unsigned int v10; // [esp+14h] [ebp+Ch]

  v5 = sub_1022FDF0(108);
  v6 = 0.0;
  if ( v5 )
  {
    *(float *)v5 = 0.0;
    *(_BYTE *)(v5 + 12) = 0;
    *(float *)(v5 + 4) = 0.0;
    v7 = (float *)v5;
    *(float *)(v5 + 8) = 0.0;
    *(_BYTE *)(v5 + 28) = 0;
    *(float *)(v5 + 16) = 0.0;
    *(float *)(v5 + 20) = 0.0;
    *(float *)(v5 + 24) = 0.0;
    *(_DWORD *)(v5 + 52) = -1;
    *(_DWORD *)(v5 + 76) = &CCopyRecipientFilter::`vftable';
    *(_DWORD *)(v5 + 80) = 0;
    *(_DWORD *)(v5 + 84) = 0;
    *(_DWORD *)(v5 + 88) = 0;
    *(_DWORD *)(v5 + 92) = 0;
    *(_DWORD *)(v5 + 96) = 0;
    *(_DWORD *)(v5 + 100) = 0;
    ++dword_10437918;
    *(_DWORD *)(v5 + 44) = 0;
    *(_DWORD *)(v5 + 48) = 0;
    *(float *)(v5 + 104) = *(float *)(dword_1043793C + 44);
  }
  else
  {
    v7 = 0;
  }
  if ( a2 == -1 )
  {
    v10 = 0;
  }
  else if ( *((_DWORD *)off_103DCD74 + 4 * a2 + 1) )
  {
    v10 = a2 | (*((_DWORD *)off_103DCD74 + 4 * a2 + 2) << 12);
  }
  else
  {
    v10 = -1;
  }
  if ( 0.0 != a5 )
    v6 = 20.0 / a5 + 50.0;
  if ( v10 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v10 & 0xFFF) + 2) != v10 >> 12 )
    v8 = 0;
  else
    v8 = *((_DWORD *)off_103DCD74 + 4 * (v10 & 0xFFF) + 1);
  sub_10122270(v7, a1, v8, a3, a4, (int)v6);
  return v7;
}
