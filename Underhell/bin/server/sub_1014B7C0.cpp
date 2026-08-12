void __thiscall sub_1014B7C0(int this, int a2, int a3, float a4)
{
  int v4; // esi
  char v5; // bl
  int v6; // edi
  int *v7; // ecx
  int v8; // eax
  int *v9; // ecx

  *(float *)(this + 4 * (a3 + 16 * a2) + 1028) = a4;
  v4 = a2 + a3 * *(_DWORD *)(this + 976);
  v5 = a4 >= 0.0;
  if ( v5 != *(_BYTE *)(v4 + this + 2108) )
  {
    v6 = this + 2108;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        sub_100194B0(v7, v4 + 2108);
    }
    *(_BYTE *)(v6 + v4) = v5;
    v8 = v6 - 2108;
    if ( *(_BYTE *)(v6 - 2024) )
    {
      *(_BYTE *)(v8 + 88) |= 1u;
    }
    else
    {
      v9 = *(int **)(v8 + 24);
      if ( v9 )
        sub_100194B0(v9, v4 + 2108);
    }
  }
}
