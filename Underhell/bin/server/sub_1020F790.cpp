char __thiscall sub_1020F790(int this, float a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // edx
  int *v6; // ecx
  int *v7; // ecx
  int *v8; // ecx
  float v10; // [esp+8h] [ebp-24h]
  float v11[3]; // [esp+1Ch] [ebp-10h] BYREF
  int v12; // [esp+28h] [ebp-4h]

  if ( a2 >= 90.0 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v3 = sub_10417880(
           *(_DWORD *)(this + 580),
           *(_DWORD *)(this + 584),
           *(_DWORD *)(this + 588),
           *(_DWORD *)(this + 704),
           *(_DWORD *)(this + 708),
           *(_DWORD *)(this + 712),
           this,
           LODWORD(a2),
           0,
           0);
  }
  else
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v3 = sub_104179C0(
           *(_DWORD *)(this + 580),
           *(_DWORD *)(this + 584),
           *(_DWORD *)(this + 588),
           *(_DWORD *)(this + 704),
           *(_DWORD *)(this + 708),
           *(_DWORD *)(this + 712),
           this,
           a2,
           0,
           0);
  }
  v4 = v3;
  if ( v3 )
  {
    v12 = sub_100BEF30(this, "fuse");
    sub_100BD6D0((void *)this, v12, (int)v11, 0, 0, 0);
    sub_100E0970(v4, v5, 0, 0);
    sub_10112C00(v4 + 320, 0);
    if ( *(_BYTE *)(v4 + 113) != 4 )
    {
      if ( *(_BYTE *)(v4 + 84) )
      {
        *(_BYTE *)(v4 + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(v4 + 24);
        if ( v6 )
          sub_100194B0(v6, 113);
      }
      *(_BYTE *)(v4 + 113) = 4;
    }
    if ( *(_BYTE *)(v4 + 119) != 1 )
    {
      if ( *(_BYTE *)(v4 + 84) )
      {
        *(_BYTE *)(v4 + 88) |= 1u;
      }
      else
      {
        v7 = *(int **)(v4 + 24);
        if ( v7 )
          sub_100194B0(v7, 116);
      }
      *(_BYTE *)(v4 + 119) = 1;
    }
    sub_100E10C0(v4, v11);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 140))(v4, this, v12);
    *(_DWORD *)(this + 1272) &= ~0x800u;
    *(_DWORD *)(this + 1432) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
    sub_100EC3F0((_DWORD *)this, (int)sub_100E1560, 0.0, 0);
    v10 = *(float *)(dword_106B31C8 + 12) + a2 + 5.0;
    sub_100EC4A0((int *)this, v10, 0);
    if ( *(_DWORD *)(this + 848) != 1 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v8 = *(int **)(this + 24);
        if ( v8 )
          sub_100194B0(v8, 848);
      }
      *(_DWORD *)(this + 848) = 1;
    }
    sub_102EB400(v4, 307.20001);
    LOBYTE(v3) = sub_100EAB80((_DWORD *)this, 16);
  }
  return v3;
}
