int __thiscall sub_103ECF10(_DWORD *this, float *a2, float *a3, float a4)
{
  int v5; // esi
  int v6; // eax
  int v7; // ebx
  int *v8; // ecx
  int *v9; // ecx
  char v10; // al
  int v11; // esi
  int v12; // eax
  int v13; // edi
  int *v14; // ecx
  char v15; // bl
  int *v16; // ecx
  char v17; // al
  int *v18; // ecx
  float v20; // [esp+18h] [ebp-1Ch]
  float v21; // [esp+18h] [ebp-1Ch]
  int v22; // [esp+2Ch] [ebp-8h]
  int v23; // [esp+3Ch] [ebp+8h]

  sub_102651C0(a2, a3, 0, -1, 6500.0, 0, (int)"GaussTracer", 0);
  v5 = sub_100FB5C0("sprites/laserbeam.vmt", 0.5);
  sub_100E10C0(v5, a2);
  sub_100FAD20(v5, a3, this);
  v6 = sub_100BEF30((int)this, "Muzzle");
  v7 = *(_DWORD *)(v5 + 816);
  v22 = v6;
  if ( *(_DWORD *)(v5 + 872 + 4 * v7 - 4) != v6 )
  {
    if ( *(_BYTE *)(v5 + 84) )
    {
      *(_BYTE *)(v5 + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(v5 + 24);
      if ( v8 )
      {
        sub_100194B0(v8, 4 * v7 - 4 + 872);
        v6 = v22;
      }
    }
    *(_DWORD *)(v5 + 872 + 4 * v7 - 4) = v6;
  }
  sub_1005C3A0(v5, a4);
  sub_1005C410(v5, 0.050000001);
  if ( *(_BYTE *)(v5 + 119) != 0xFF )
  {
    if ( *(_BYTE *)(v5 + 84) )
    {
      *(_BYTE *)(v5 + 88) |= 1u;
    }
    else
    {
      v9 = *(int **)(v5 + 24);
      if ( v9 )
        sub_100194B0(v9, 116);
    }
    *(_BYTE *)(v5 + 119) = -1;
  }
  v10 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -16, 16);
  sub_1005C620((_BYTE *)(v5 + 116), 255, v10 - 71, 40, HIBYTE(*(_DWORD *)(v5 + 116)));
  sub_100F9B80(v5);
  sub_100EC3F0((_DWORD *)v5, (int)sub_10246D70, 0.0, 0);
  v20 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)v5, v20, 0);
  v11 = sub_100FB5C0("sprites/laserbeam.vmt", 3.0);
  sub_100E10C0(v11, a2);
  sub_100FAD20(v11, a3, this);
  v12 = sub_100BEF30((int)this, "Muzzle");
  v13 = *(_DWORD *)(v11 + 816);
  v23 = v12;
  if ( *(_DWORD *)(v11 + 872 + 4 * v13 - 4) != v12 )
  {
    if ( *(_BYTE *)(v11 + 84) )
    {
      *(_BYTE *)(v11 + 88) |= 1u;
    }
    else
    {
      v14 = *(int **)(v11 + 24);
      if ( v14 )
      {
        sub_100194B0(v14, 4 * v13 - 4 + 872);
        v12 = v23;
      }
    }
    *(_DWORD *)(v11 + 872 + 4 * v13 - 4) = v12;
  }
  v15 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 64, 255);
  if ( *(_BYTE *)(v11 + 119) != v15 )
  {
    if ( *(_BYTE *)(v11 + 84) )
    {
      *(_BYTE *)(v11 + 88) |= 1u;
    }
    else
    {
      v16 = *(int **)(v11 + 24);
      if ( v16 )
        sub_100194B0(v16, 116);
    }
    *(_BYTE *)(v11 + 119) = v15;
  }
  v17 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 64);
  sub_1005C620((_BYTE *)(v11 + 116), 255, 255, v17 - 106, HIBYTE(*(_DWORD *)(v11 + 116)));
  sub_100F9B80(v11);
  sub_100EC3F0((_DWORD *)v11, (int)sub_10246D70, 0.0, 0);
  v21 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)v11, v21, 0);
  if ( *(_DWORD *)(v11 + 928) != COERCE_INT(1.6) )
  {
    if ( *(_BYTE *)(v11 + 84) )
    {
      *(_BYTE *)(v11 + 88) |= 1u;
    }
    else
    {
      v18 = *(int **)(v11 + 24);
      if ( v18 )
        sub_100194B0(v18, 928);
    }
    *(float *)(v11 + 928) = 1.6;
  }
  return sub_1005C410(v11, 0.1);
}
