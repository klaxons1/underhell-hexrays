int __thiscall sub_10139A40(_DWORD *this, int a2)
{
  float *v2; // eax
  int v3; // edi
  int v4; // ecx
  char v6; // [esp+0h] [ebp-10h]

  *(float *)(a2 + 20) = flt_10459240;
  *(_QWORD *)(a2 + 24) = qword_10459244;
  *(float *)(a2 + 32) = flt_10459240;
  *(_QWORD *)(a2 + 36) = qword_10459244;
  v6 = *(_BYTE *)(a2 + 112);
  *(float *)(a2 + 88) = 1.0;
  v2 = (float *)sub_10139490(this, v6);
  v3 = (int)v2;
  if ( !v2 )
    return 0;
  v2[50] = *((float *)off_103DC81C + 3);
  if ( *(int *)(a2 + 44) < 0 )
    return 0;
  sub_10137490((int)v2, a2);
  *(_DWORD *)(v3 + 48) = 4;
  *(_DWORD *)(v3 + 52) = 1;
  v4 = *(_DWORD *)(a2 + 4);
  if ( v4 )
    *(_DWORD *)(v3 + 256) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
  else
    *(_DWORD *)(v3 + 256) = -1;
  *(_DWORD *)(v3 + 296) = *(_DWORD *)(a2 + 8);
  *(float *)(a2 + 96) = 1.0;
  *(_DWORD *)(a2 + 92) = 0;
  *(float *)(v3 + 248) = 0.0;
  *(float *)(v3 + 244) = *(float *)(a2 + 96);
  *(_DWORD *)(v3 + 52) |= *(_DWORD *)(a2 + 120);
  *(float *)(v3 + 224) = *(float *)(a2 + 100);
  *(float *)(v3 + 228) = *(float *)(a2 + 104);
  *(float *)(v3 + 232) = *(float *)(a2 + 108);
  sub_10138E80(v3, 0.0);
  return v3;
}
