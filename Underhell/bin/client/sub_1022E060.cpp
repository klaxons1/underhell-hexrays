bool __thiscall sub_1022E060(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // eax
  void *v7; // eax
  SIZE_T v8; // edi
  int v10; // eax
  SIZE_T v11; // [esp-Ch] [ebp-3Ch]
  _SYSTEM_INFO SystemInfo; // [esp+Ch] [ebp-24h] BYREF

  this[4] = a2;
  this[5] = (a5 + 3) & 0xFFFFFFFC;
  if ( a3 )
    this[6] = a3;
  GetSystemInfo(&SystemInfo);
  v6 = this[6];
  if ( v6 )
    this[6] = ~(SystemInfo.dwPageSize - 1) & (v6 + SystemInfo.dwPageSize - 1);
  else
    this[6] = SystemInfo.dwPageSize;
  v11 = ~(this[6] - 1) & (this[6] + this[4] - 1);
  this[4] = v11;
  v7 = VirtualAlloc(0, v11, 0x2000u, 1u);
  this[3] = v7;
  *this = v7;
  this[1] = v7;
  if ( a4 )
  {
    v8 = ~(this[6] - 1) & (this[6] + a4 - 1);
    if ( !VirtualAlloc(v7, v8, 0x1000u, 4u) )
      return 0;
    this[1] += v8;
    this[7] = v8;
  }
  v10 = this[3];
  this[2] = v10 + this[4];
  return v10 != 0;
}
