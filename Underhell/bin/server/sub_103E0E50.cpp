int __thiscall sub_103E0E50(_DWORD *this, int a2)
{
  float v3; // ecx
  float v4; // edx
  unsigned int v5; // eax
  unsigned int v6; // eax
  _DWORD v8[20]; // [esp+8h] [ebp-ACh] BYREF
  _DWORD v9[13]; // [esp+58h] [ebp-5Ch] BYREF
  float v10; // [esp+8Ch] [ebp-28h]
  char v11; // [esp+98h] [ebp-1Ch]
  float v12; // [esp+A8h] [ebp-Ch]
  float v13; // [esp+ACh] [ebp-8h]
  float v14; // [esp+B0h] [ebp-4h]

  sub_1001E4E0(v9, a2);
  v10 = v10 * 5.0;
  if ( (v11 & 0x40) != 0 )
  {
    v3 = *(float *)(a2 + 8);
    v4 = *(float *)(a2 + 12);
    v12 = *(float *)(a2 + 4);
    v13 = v3;
    v14 = v4;
    *(float *)&v9[1] = v12 * 10.0;
    *(float *)&v9[2] = v3 * 10.0;
    *(float *)&v9[3] = 10.0 * v4;
  }
  (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 600))(this, v9);
  v5 = this[410];
  if ( v5 != -1
    && off_1061BE18[4 * (this[410] & 0xFFF) + 2] == v5 >> 12
    && off_1061BE18[4 * (this[410] & 0xFFF) + 1]
    && (*(_DWORD *)(a2 + 64) & 0x40001) == 0 )
  {
    sub_1001E4E0(v8, a2);
    v8[16] = *(_DWORD *)(a2 + 64) | 0x10;
    v6 = this[410];
    if ( v6 != -1 && off_1061BE18[4 * (this[410] & 0xFFF) + 2] == v6 >> 12 )
    {
      sub_100D9E70((int *)off_1061BE18[4 * (this[410] & 0xFFF) + 1], (int)this, v8);
      return 0;
    }
    sub_100D9E70(0, (int)this, v8);
  }
  return 0;
}
