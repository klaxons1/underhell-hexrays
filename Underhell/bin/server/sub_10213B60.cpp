int __thiscall sub_10213B60(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  const char *v4; // eax
  double v5; // st7
  double v6; // st7
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // eax
  int result; // eax
  __int64 v11; // [esp-4h] [ebp-10h]
  float v12; // [esp+4h] [ebp-8h]

  *(_DWORD *)(this + 1724) = -1;
  v2 = *(_DWORD *)(this + 1724);
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 1724) & 0xFFF) + 1], v3[1] != v2 >> 12) || !*v3 )
    *(_BYTE *)(this + 1728) = 0;
  if ( (*(_DWORD *)(this + 248) & 0x1000) == 0 )
  {
    v4 = *(const char **)(this + 1736);
    if ( !v4 )
      v4 = String;
    sub_1023C380((int)v4, 0.0, 0);
  }
  v5 = *(float *)(this + 1644);
  *(_DWORD *)(this + 1672) = 2;
  if ( -1.0 != v5 )
  {
    v12 = *(float *)(this + 1644) + 0.1;
    sub_100D8290((float *)this, v12);
    v6 = *(float *)(this + 1644);
    *(_DWORD *)(this + 4) = sub_10211920;
    if ( -1.0 == v6 )
      sub_100EC4A0((int *)this, -1.0, 0);
  }
  v7 = *(_DWORD *)(this + 1716);
  if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1716) & 0xFFF) + 2] != v7 >> 12 )
    v8 = 0;
  else
    v8 = off_1061BE18[4 * (*(_DWORD *)(this + 1716) & 0xFFF) + 1];
  v9 = __RTDynamicCast(
         v8,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CAI_BaseNPC `RTTI Type Descriptor',
         0);
  if ( v9 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 1788))(v9, this);
  HIDWORD(v11) = this;
  LODWORD(v11) = this;
  sub_1010DD80((_DWORD *)(this + 1872), v11, 0.0);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 884))(this);
  *(_DWORD *)(this + 1716) = -1;
  return result;
}
