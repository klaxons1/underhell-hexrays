bool __thiscall sub_1008EAD0(int this, int *a2)
{
  int v3; // ecx
  int v4; // edi
  int *v5; // edx
  int v6; // edx
  int v8; // eax
  int v9; // [esp-8h] [ebp-1Ch]
  int v10; // [esp-4h] [ebp-18h]
  float v11; // [esp+0h] [ebp-14h]
  int v12; // [esp+10h] [ebp-4h]

  v3 = *(_DWORD *)(this + 4);
  v4 = 0;
  if ( *(_BYTE *)(v3 + 16) )
  {
LABEL_11:
    v5 = a2;
    goto LABEL_12;
  }
  v5 = a2;
  if ( a2[21] > 0 )
  {
    v6 = a2[18];
    v12 = a2[21];
    do
    {
      if ( (*(_BYTE *)(*(_DWORD *)v6 + 14) & 3) != 0
        || (*(_BYTE *)(*(_DWORD *)v6 + *(_DWORD *)(*(_DWORD *)(v3 + 4) + 1676) + 4) & *(_BYTE *)(this + 32)) == 0 )
      {
        ++v4;
      }
      v6 += 4;
      --v12;
    }
    while ( v12 );
    if ( v4 && v4 == a2[21] )
      return 0;
    goto LABEL_11;
  }
LABEL_12:
  v11 = *(float *)(this + 28);
  v10 = *v5;
  v9 = *(_DWORD *)(this + 8) >= 2 ? 64 : 96;
  if ( *(_BYTE *)(this + 24) )
    v8 = sub_1008E5E0((_DWORD *)v3, (float *)(this + 12), v9, v10, v11);
  else
    v8 = sub_1008E6B0((_DWORD *)v3, (float *)(this + 12), v9, v10, v11);
  ++*(_DWORD *)(this + 8);
  *(_DWORD *)(this + 36) = v8;
  return *(_DWORD *)(this + 36) != 0;
}
