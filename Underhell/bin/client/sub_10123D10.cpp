float *__thiscall sub_10123D10(_DWORD *this)
{
  float *v2; // eax
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // eax
  _BYTE v9[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( (dword_10437B10 & 1) == 0 )
    dword_10437B10 |= 1u;
  v2 = (float *)(*(int (__thiscall **)(_DWORD *))(*(this - 1) + 36))(this - 1);
  flt_10437B04 = *v2;
  flt_10437B08 = v2[1];
  flt_10437B0C = v2[2];
  v3 = this[301];
  if ( v3 != -1 )
  {
    v4 = (int *)((char *)off_103DCD74 + 16 * (this[301] & 0xFFF) + 4);
    v5 = v3 >> 12;
    if ( *((_DWORD *)off_103DCD74 + 4 * (this[301] & 0xFFF) + 2) == v5 )
    {
      if ( *v4 )
      {
        if ( *((_DWORD *)off_103DCD74 + 4 * (this[301] & 0xFFF) + 2) == v5 )
          v6 = *v4;
        else
          v6 = 0;
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 28))(v6);
        if ( v7 )
          (*(void (__thiscall **)(int, _DWORD, float *, _BYTE *))(*(_DWORD *)(v7 + 4) + 148))(
            v7 + 4,
            this[302],
            &flt_10437B04,
            v9);
      }
    }
  }
  return &flt_10437B04;
}
