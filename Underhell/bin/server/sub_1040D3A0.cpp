int __thiscall sub_1040D3A0(int this, int a2)
{
  _DWORD *v3; // eax
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // ecx
  float *v14; // edi
  int *v15; // ecx
  const char *v16; // esi

  if ( (*(_DWORD *)(this + 248) & 0x800000) == 0 )
    sub_10163300((_DWORD *)this);
  *(_BYTE *)(this + 1689) = 1;
  sub_10372420(this);
  v3 = sub_10243040("sprites/blueglow1.vmt", (float *)(this + 716), 0);
  if ( v3 )
    *(_DWORD *)(this + 1720) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v3 + 8))(v3);
  else
    *(_DWORD *)(this + 1720) = -1;
  v4 = *(_DWORD *)(this + 1720);
  if ( v4 != -1 )
  {
    v5 = &off_1061BE18[4 * (*(_DWORD *)(this + 1720) & 0xFFF) + 1];
    v6 = v4 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 1720) & 0xFFF) + 2] == v6 )
    {
      if ( *v5 )
      {
        v7 = off_1061BE18[4 * (*(_DWORD *)(this + 1720) & 0xFFF) + 2] == v6 ? (unsigned __int16 *)*v5 : 0;
        sub_100EACE0(v7, this, 1);
        v8 = *(_DWORD *)(this + 1720);
        if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1720) & 0xFFF) + 2] != v8 >> 12 )
          v9 = 0;
        else
          v9 = off_1061BE18[4 * (*(_DWORD *)(this + 1720) & 0xFFF) + 1];
        sub_10128950(v9, 3, 255, 255, 255, 140, 14);
        v10 = *(_DWORD *)(this + 1720);
        if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1720) & 0xFFF) + 2] != v10 >> 12 )
          v11 = 0;
        else
          v11 = off_1061BE18[4 * (*(_DWORD *)(this + 1720) & 0xFFF) + 1];
        sub_102428B0(v11, 2.0, 0.0);
        v12 = *(_DWORD *)(this + 1720);
        if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1720) & 0xFFF) + 2] != v12 >> 12 )
          v13 = 0;
        else
          v13 = off_1061BE18[4 * (*(_DWORD *)(this + 1720) & 0xFFF) + 1];
        v14 = (float *)(v13 + 840);
        if ( *(_DWORD *)(v13 + 840) != COERCE_INT(8.0) )
        {
          if ( *(_BYTE *)(v13 + 84) )
          {
            *(_BYTE *)(v13 + 88) |= 1u;
          }
          else
          {
            v15 = *(int **)(v13 + 24);
            if ( v15 )
              sub_100194B0(v15, 840);
          }
          *v14 = 8.0;
        }
      }
    }
  }
  if ( *(_BYTE *)(this + 1690) )
    sub_101AAE70("striderbuster_shotdown_trail", 1, this, -1, 0);
  else
    sub_101AAE70("striderbuster_trail", 1, this, -1, 0);
  *(_DWORD *)(this + 196) = sub_1040AC70;
  sub_100EC3F0((_DWORD *)this, (int)sub_1040B340, 0.0, 0);
  sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  v16 = *(const char **)(this + 92);
  if ( !v16 )
    v16 = String;
  return (*(int (__thiscall **)(int, int, int, const char *))(*(_DWORD *)off_10627F88 + 116))(off_10627F88, a2, 1, v16);
}
