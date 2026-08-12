int __thiscall sub_101396C0(_DWORD *this, int a2)
{
  int v3; // eax
  int v5; // eax
  float *v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // ecx

  if ( 0.0 != *(float *)(a2 + 64) )
  {
    v3 = *(_DWORD *)(a2 + 4);
    if ( v3 )
    {
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)(v3 + 4) + 36))(v3 + 4) )
        return 0;
    }
    v5 = *(_DWORD *)(a2 + 12);
    if ( v5 )
    {
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)(v5 + 4) + 36))(v5 + 4) )
        return 0;
    }
  }
  if ( *(_DWORD *)(a2 + 48) && *(_DWORD *)(a2 + 44) == -1 )
    *(_DWORD *)(a2 + 44) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 8))(
                             dword_10413178,
                             *(_DWORD *)(a2 + 48));
  if ( *(_DWORD *)(a2 + 56) && *(_DWORD *)(a2 + 52) == -1 )
    *(_DWORD *)(a2 + 52) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 8))(
                             dword_10413178,
                             *(_DWORD *)(a2 + 56));
  v6 = (float *)sub_10139490(this, *(_BYTE *)(a2 + 112));
  v7 = (int)v6;
  if ( !v6 )
    return 0;
  v6[50] = *((float *)off_103DC81C + 3);
  if ( *(int *)(a2 + 44) < 0 )
    return 0;
  sub_10137490((int)v6, a2);
  *(_DWORD *)(v7 + 48) = 0;
  *(_DWORD *)(v7 + 52) = 0;
  if ( *(_DWORD *)(a2 + 4) )
  {
    *(_DWORD *)(v7 + 52) = 1;
    v8 = *(_DWORD *)(a2 + 4);
    if ( v8 )
      *(_DWORD *)(v7 + 256) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
    else
      *(_DWORD *)(v7 + 256) = -1;
    *(_DWORD *)(v7 + 296) = *(_DWORD *)(a2 + 8);
    *(float *)(a2 + 20) = flt_10459240;
    *(_QWORD *)(a2 + 24) = qword_10459244;
  }
  if ( *(_DWORD *)(a2 + 12) )
  {
    *(_DWORD *)(v7 + 52) |= 2u;
    v9 = *(_DWORD *)(a2 + 12);
    if ( v9 )
      *(_DWORD *)(v7 + 260) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
    else
      *(_DWORD *)(v7 + 260) = -1;
    *(_DWORD *)(v7 + 300) = *(_DWORD *)(a2 + 16);
    *(float *)(a2 + 32) = flt_10459240;
    *(_QWORD *)(a2 + 36) = qword_10459244;
  }
  *(float *)(v7 + 248) = (float)*(int *)(a2 + 92);
  *(float *)(v7 + 244) = *(float *)(a2 + 96);
  *(_DWORD *)(v7 + 52) |= *(_DWORD *)(a2 + 120);
  *(float *)(v7 + 224) = *(float *)(a2 + 100);
  *(float *)(v7 + 228) = *(float *)(a2 + 104);
  *(float *)(v7 + 232) = *(float *)(a2 + 108);
  if ( 0.0 == *(float *)(a2 + 64) )
    *(_DWORD *)(v7 + 52) |= 0x4000u;
  sub_10138E80(v7, 0.0);
  return v7;
}
