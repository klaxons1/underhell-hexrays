int __thiscall sub_10213CC0(int this)
{
  int *v2; // ecx
  const char *v3; // eax
  double v4; // st7
  double v5; // st7
  unsigned int v6; // eax
  int v7; // ecx
  int v8; // eax
  int result; // eax
  __int64 v10; // [esp-4h] [ebp-14h]
  float v11; // [esp+4h] [ebp-Ch]

  if ( *(_BYTE *)(this + 1640) )
  {
    *(float *)(this + 108) = *(float *)(this + 1628);
    if ( *(_DWORD *)(this + 248) != *(_DWORD *)(this + 1636) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v2 = *(int **)(this + 24);
        if ( v2 )
          sub_100194B0(v2, 248);
      }
      *(_DWORD *)(this + 248) = *(_DWORD *)(this + 1636);
    }
    *(_BYTE *)(this + 1640) = 0;
  }
  *(_DWORD *)(this + 1724) = -1;
  *(_BYTE *)(this + 1728) = 0;
  if ( (*(_DWORD *)(this + 248) & 0x1000) == 0 )
  {
    v3 = *(const char **)(this + 1736);
    if ( !v3 )
      v3 = String;
    sub_1023C380((int)v3, 0.0, 0);
  }
  v4 = *(float *)(this + 1644);
  *(_DWORD *)(this + 1672) = 2;
  if ( -1.0 != v4 )
  {
    v11 = *(float *)(this + 1644) + 0.1;
    sub_100D8290((float *)this, v11);
    v5 = *(float *)(this + 1644);
    *(_DWORD *)(this + 4) = sub_10211920;
    if ( -1.0 == v5 )
      sub_100EC4A0((int *)this, -1.0, 0);
  }
  v6 = *(_DWORD *)(this + 1716);
  if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1716) & 0xFFF) + 2] != v6 >> 12 )
    v7 = 0;
  else
    v7 = off_1061BE18[4 * (*(_DWORD *)(this + 1716) & 0xFFF) + 1];
  v8 = __RTDynamicCast(
         v7,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CAI_BaseNPC `RTTI Type Descriptor',
         0);
  if ( v8 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 1788))(v8, this);
  HIDWORD(v10) = this;
  LODWORD(v10) = this;
  sub_1010DD80((_DWORD *)(this + 1872), v10, 0.0);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 884))(this);
  *(_DWORD *)(this + 1716) = -1;
  return result;
}
