int __thiscall sub_10139520(_DWORD *this, int a2)
{
  float *v4; // eax
  int v5; // edi
  int v6; // eax
  BOOL v7; // edx
  int v8; // ecx
  int v9; // ecx

  if ( 0.0 != *(float *)(a2 + 64)
    && (!*(_DWORD *)(a2 + 4)
     || !(*(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)(a2 + 4) + 4) + 36))(*(_DWORD *)(a2 + 4) + 4)
     || !*(_DWORD *)(a2 + 12)
     || !(*(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)(a2 + 12) + 4) + 36))(*(_DWORD *)(a2 + 12) + 4)) )
  {
    return 0;
  }
  *(float *)(a2 + 20) = flt_10459240;
  *(_QWORD *)(a2 + 24) = qword_10459244;
  *(float *)(a2 + 32) = flt_10459240;
  *(_QWORD *)(a2 + 36) = qword_10459244;
  v4 = (float *)sub_10139490(this, *(_BYTE *)(a2 + 112));
  v5 = (int)v4;
  if ( !v4 )
    return 0;
  v4[50] = *((float *)off_103DC81C + 3);
  if ( *(int *)(a2 + 44) < 0 )
    return 0;
  sub_10137490((int)v4, a2);
  v6 = *(_DWORD *)a2;
  v7 = *(int *)a2 < 0;
  *(_DWORD *)(v5 + 52) = 3;
  *(_DWORD *)(v5 + 48) = v7 ? 0 : v6;
  v8 = *(_DWORD *)(a2 + 4);
  if ( v8 )
    *(_DWORD *)(v5 + 256) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
  else
    *(_DWORD *)(v5 + 256) = -1;
  *(_DWORD *)(v5 + 296) = *(_DWORD *)(a2 + 8);
  v9 = *(_DWORD *)(a2 + 12);
  if ( v9 )
    *(_DWORD *)(v5 + 260) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
  else
    *(_DWORD *)(v5 + 260) = -1;
  *(_DWORD *)(v5 + 300) = *(_DWORD *)(a2 + 16);
  *(float *)(v5 + 248) = (float)*(int *)(a2 + 92);
  *(float *)(v5 + 244) = *(float *)(a2 + 96);
  *(_DWORD *)(v5 + 52) |= *(_DWORD *)(a2 + 120);
  *(float *)(v5 + 224) = *(float *)(a2 + 100);
  *(float *)(v5 + 228) = *(float *)(a2 + 104);
  *(float *)(v5 + 232) = *(float *)(a2 + 108);
  if ( 0.0 == *(float *)(a2 + 64) )
    *(_DWORD *)(v5 + 52) |= 0x4000u;
  sub_10138E80(v5, 0.0);
  return v5;
}
