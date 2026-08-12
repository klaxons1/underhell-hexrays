char __thiscall sub_10417FE0(void *this, int a2, int a3)
{
  int v3; // eax
  int v4; // esi
  unsigned int v6; // eax
  int *v7; // ecx
  int v8; // eax

  v3 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, a3);
  if ( !v3 )
    v3 = sub_10261B20();
  v4 = v3;
  if ( !v3 )
    return 0;
  sub_101EE710(v3, a2);
  v6 = *(_DWORD *)(v4 + 3512);
  if ( v6 == -1
    || (v7 = &off_1061BE18[4 * (*(_DWORD *)(v4 + 3512) & 0xFFF) + 1],
        off_1061BE18[4 * (*(_DWORD *)(v4 + 3512) & 0xFFF) + 2] != v6 >> 12)
    || (v8 = *v7) == 0 )
  {
    v8 = v4;
  }
  return sub_100F8040(v4, v8, a2, 0.0, 0);
}
