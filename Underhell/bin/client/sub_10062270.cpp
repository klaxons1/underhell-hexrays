bool __thiscall sub_10062270(int this, bool *a2)
{
  int v3; // eax
  bool result; // al
  int v5; // eax
  double v6; // st7
  int v7; // [esp-Ch] [ebp-14h]
  int v8; // [esp-8h] [ebp-10h]

  *a2 = 0;
  v3 = *(_DWORD *)(this + 1936);
  if ( *(_DWORD *)(this + 1204) != v3 )
  {
    *(_DWORD *)(this + 1208) = 10;
    *(_DWORD *)(this + 1204) = v3;
    return 0;
  }
  if ( (*(_BYTE *)(this + 2073) & 4) != 0 || sub_100621B0((_DWORD *)this, 0) || sub_100621B0((_DWORD *)this, 1) )
    return 0;
  if ( (*(_BYTE *)(this + 1248) & 0x20) == 0 )
  {
    v8 = *(_DWORD *)(this + 1264) + 36 * *(_DWORD *)(this + 1268) - 36;
    v7 = *(_DWORD *)(this + 1264);
    v5 = sub_101356D0();
    v6 = sub_101F0310(v5, v7, v8, 0);
    if ( *(_DWORD *)(this + 1196) < *(int *)(this + 1268) >> 1 )
      *a2 = v6 < *(float *)(dword_1040E894 + 44);
  }
  if ( !sub_1000E340((float *)(this + 1976), (float *)(this + 1964)) )
    return !sub_10060B60((_DWORD *)this) && !*a2 && !*(_DWORD *)(dword_1040E534 + 48);
  *(float *)(this + 1976) = *(float *)(this + 1964);
  result = 0;
  *(float *)(this + 1980) = *(float *)(this + 1968);
  *(float *)(this + 1984) = *(float *)(this + 1972);
  return result;
}
