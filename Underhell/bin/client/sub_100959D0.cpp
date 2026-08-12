char __thiscall sub_100959D0(int this, int a2, int a3)
{
  int v4; // esi
  float *v5; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st7
  int v11; // [esp+Ch] [ebp-8h] BYREF
  int v12; // [esp+10h] [ebp-4h] BYREF
  int i; // [esp+1Ch] [ebp+8h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "CDetailObjectSystem::EnumerateLeaf", 0, "Detail_Prop_Rendering", 0, 4);
  (*(void (__thiscall **)(void *, int, _DWORD, int *, int *))(*(_DWORD *)off_103DCDDC + 40))(
    off_103DCDDC,
    a2,
    *(_DWORD *)(a3 + 12),
    &v11,
    &v12);
  for ( i = 0; i < v12; ++i )
  {
    v4 = *(_DWORD *)(this + 24) + 44 * (v11 + i);
    v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(v4 + 4) + 4))(v4 + 4);
    v6 = *v5 - *(float *)a3;
    v7 = v5[1] - *(float *)(a3 + 4);
    v8 = v5[2] - *(float *)(a3 + 8);
    *(_BYTE *)(v4 + 37) = -1;
    v9 = v8 * v8 + v7 * v7 + v6 * v6;
    if ( v9 >= *(float *)(this + 152) )
    {
      *(_BYTE *)(v4 + 37) = 0;
    }
    else
    {
      if ( v9 <= *(float *)(this + 156) )
        *(_BYTE *)(v4 + 37) = -1;
      else
        *(_BYTE *)(v4 + 37) = (int)((*(float *)(this + 152) - v9) * *(float *)(this + 160));
      sub_10094F20(v4);
    }
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
  return 1;
}
