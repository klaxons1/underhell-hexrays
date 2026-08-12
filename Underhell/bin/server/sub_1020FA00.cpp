char __thiscall sub_1020FA00(_DWORD *this, float a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // edx
  int *v6; // ecx
  int *v7; // ecx
  float v9; // [esp+8h] [ebp-24h]
  float v10[3]; // [esp+1Ch] [ebp-10h] BYREF
  int v11; // [esp+28h] [ebp-4h]

  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v3 = sub_10417880(this[145], this[146], this[147], this[176], this[177], this[178], this, LODWORD(a2), 1, this[212]);
  v4 = v3;
  if ( v3 )
  {
    v11 = sub_100BEF30((int)this, "fuse");
    sub_100BD6D0(this, v11, (int)v10, 0, 0, 0);
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
    sub_100E10C0(v4, v10);
    (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v4 + 140))(v4, this, v11);
    this[318] &= ~0x4000u;
    this[358] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
    sub_100EC3F0(this, (int)sub_100E1560, 0.0, 0);
    v9 = *(float *)(dword_106B31C8 + 12) + a2 + 5.0;
    sub_100EC4A0(this, v9, 0);
    sub_102EB400(v4, 307.20001);
    LOBYTE(v3) = sub_100EAB80(this, 16);
  }
  return v3;
}
