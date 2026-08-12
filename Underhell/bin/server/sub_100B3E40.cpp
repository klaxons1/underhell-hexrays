char __thiscall sub_100B3E40(
        _DWORD *this,
        float *a2,
        int a3,
        float a4,
        float a5,
        float a6,
        int a7,
        float *a8,
        float a9,
        float *a10)
{
  int v11; // eax
  int v12; // eax
  int v14; // ecx
  int v15; // esi
  int v16; // eax
  float v17[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v11 = this[1];
  if ( v11 )
    *(_DWORD *)(v11 + 2716) |= 8u;
  v12 = sub_100B3900(this, a2, a3, a4, a5, a6, a7, a8, a9);
  if ( v12 == -1 )
    return 0;
  v14 = *(_DWORD *)(this[1] + 1676);
  v15 = this[2];
  if ( v12 < 0 || v12 >= *(_DWORD *)(v15 + 4) )
  {
    ++dword_10691DE0;
    v16 = 0;
  }
  else
  {
    v16 = *(_DWORD *)(*(_DWORD *)(v15 + 8) + 4 * v12);
  }
  sub_1008D160(v16, v17, v14);
  *a10 = v17[0];
  a10[1] = v17[1];
  a10[2] = v17[2];
  return 1;
}
