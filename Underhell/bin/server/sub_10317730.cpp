int __thiscall sub_10317730(int this, float *a2, float *a3)
{
  int v4; // esi
  int v5; // eax
  unsigned int v6; // eax
  _DWORD *v7; // edi

  v4 = sub_101811E0("grenade_helicopter", -1);
  sub_100E0D20(v4, a2);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 76))(v4, this);
  sub_100F4E50((unsigned int *)v4, this);
  sub_100DD660(v4, a3);
  sub_10260750((char *)v4);
  *(_BYTE *)(v4 + 2145) = *(_BYTE *)(this + 4180);
  v5 = sub_101BCB30((int *)(this + 3940), 0);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 4);
    if ( v6 == -1 || off_1061BE18[4 * (v6 & 0xFFF) + 2] != v6 >> 12 )
      v7 = 0;
    else
      v7 = (_DWORD *)off_1061BE18[4 * (v6 & 0xFFF) + 1];
    sub_101DAAC0(v7, (_DWORD *)v4);
    if ( v7 )
    {
      *(_DWORD *)(v4 + 2164) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v7 + 8))(v7);
      return v4;
    }
    *(_DWORD *)(v4 + 2164) = -1;
  }
  return v4;
}
