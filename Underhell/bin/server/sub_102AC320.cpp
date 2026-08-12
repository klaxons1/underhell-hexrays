int __thiscall sub_102AC320(int this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // ecx
  float v8; // [esp+4h] [ebp-Ch]

  v2 = *(_DWORD *)(this + 1024);
  v3 = *(_DWORD *)(this + 1028);
  if ( v2 < v3 )
  {
    v4 = *(_DWORD *)(this + 1032);
    v5 = v4 + v2;
    if ( v5 <= v3 )
      v6 = v5 < 0 ? 0 : v5;
    else
      v6 = *(_DWORD *)(this + 1028);
    *(_DWORD *)(this + 1024) = v6;
    if ( *(_DWORD *)(dword_106DBB3C + 48) == 2 )
      Msg("REGENERATED: Pool: %d (max %d) (Regenerating %d every %f)\n", v6, v3, v4, *(float *)(this + 1036));
  }
  v8 = *(float *)(this + 1036) + *(float *)(dword_106B31C8 + 12);
  return sub_100EC3F0((_DWORD *)this, (int)sub_102AC320, v8, off_1065FD70);
}
