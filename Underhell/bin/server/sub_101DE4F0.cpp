int __thiscall sub_101DE4F0(int this, int a2)
{
  int v3; // esi
  _DWORD *v4; // edx
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int v7; // eax
  int *v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v12; // [esp-8h] [ebp-1Ch]
  int v13; // [esp+10h] [ebp-4h]

  v3 = 0;
  v13 = *(_DWORD *)(this + 80);
  if ( v13 > 0 )
  {
    v4 = *(_DWORD **)(this + 68);
    while ( 1 )
    {
      v5 = v4[1];
      if ( v5 != -1
        && off_1061BE18[4 * (v4[1] & 0xFFF) + 2] == v5 >> 12
        && off_1061BE18[4 * (v4[1] & 0xFFF) + 1]
        && *v4 == a2 )
      {
        break;
      }
      ++v3;
      v4 += 2;
      if ( v3 >= v13 )
        goto LABEL_18;
    }
    v6 = *(_DWORD *)(this + 68);
    v7 = *(_DWORD *)(v6 + 8 * v3 + 4);
    if ( v7 == -1 || (v8 = &off_1061BE18[4 * (*(_DWORD *)(v6 + 8 * v3 + 4) & 0xFFF) + 1], v8[1] != v7 >> 12) )
      v9 = 0;
    else
      v9 = *v8;
    v10 = *(_DWORD *)(v9 + 424);
    if ( v10 )
      *(float *)(this + 96) = *(float *)(this + 96)
                            - ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v10 + 116))(v10);
    if ( *(_DWORD *)(this + 80) - v3 - 1 > 0 )
      memcpy(
        (void *)(8 * v3 + *(_DWORD *)(this + 68)),
        (const void *)(8 * v3 + *(_DWORD *)(this + 68) + 8),
        8 * (*(_DWORD *)(this + 80) - v3 - 1));
    --*(_DWORD *)(this + 80);
  }
LABEL_18:
  HIDWORD(v12) = this - 1120;
  LODWORD(v12) = this - 1120;
  sub_1010DD80((_DWORD *)(this + 28), v12, 0.0);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 88))(dword_106BAFF4, a2);
}
