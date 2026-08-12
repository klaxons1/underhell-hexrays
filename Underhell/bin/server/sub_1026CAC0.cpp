char __thiscall sub_1026CAC0(_DWORD **this, int a2, int a3, float a4, float *a5, float *a6)
{
  int v6; // edi
  int v8; // ebx
  int *v9; // ecx
  int *v10; // ecx
  float v11[3]; // [esp+4h] [ebp-1Ch] BYREF
  float v12[3]; // [esp+10h] [ebp-10h] BYREF
  float v13; // [esp+1Ch] [ebp-4h]

  v6 = (*(int (__thiscall **)(_DWORD *))(*this[11] + 208))(this[11]);
  if ( !v6 )
    return 0;
  v13 = *(float *)(v6 + 904);
  v8 = *(_DWORD *)(v6 + 908);
  sub_100C1170(v6, a2);
  if ( *(_DWORD *)(v6 + 904) != LODWORD(a4) )
  {
    if ( *(_BYTE *)(v6 + 84) )
    {
      *(_BYTE *)(v6 + 88) |= 1u;
    }
    else
    {
      v9 = *(int **)(v6 + 24);
      if ( v9 )
        sub_100194B0(v9, 904);
    }
    *(float *)(v6 + 904) = a4;
  }
  sub_100BCCF0((_DWORD *)v6);
  sub_100BF1E0((_DWORD *)v6, a3, (int)v12, (int)v11);
  if ( a5 )
  {
    *a5 = v12[0];
    a5[1] = v12[1];
    a5[2] = v12[2];
  }
  if ( a6 )
  {
    *a6 = v11[0];
    a6[1] = v11[1];
    a6[2] = v11[2];
  }
  sub_100C1170(v6, v8);
  if ( *(_DWORD *)(v6 + 904) != LODWORD(v13) )
  {
    if ( *(_BYTE *)(v6 + 84) )
    {
      *(_BYTE *)(v6 + 88) |= 1u;
    }
    else
    {
      v10 = *(int **)(v6 + 24);
      if ( v10 )
        sub_100194B0(v10, 904);
    }
    *(float *)(v6 + 904) = v13;
  }
  sub_100BCCF0((_DWORD *)v6);
  return 1;
}
