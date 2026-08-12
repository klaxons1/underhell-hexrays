char __thiscall sub_100B3F30(_DWORD *this, float *a2, float *a3, int a4, float a5, float a6, float *a7)
{
  int v8; // eax
  int v9; // eax
  int v11; // ecx
  int v12; // esi
  int v13; // eax
  float v14[3]; // [esp+Ch] [ebp-Ch] BYREF

  v8 = this[1];
  if ( v8 )
    *(_DWORD *)(v8 + 2716) |= 8u;
  v9 = sub_100B3390(this, (int)this, a2, a3, a4, a5, a6);
  if ( v9 == -1 )
    return 0;
  v11 = *(_DWORD *)(this[1] + 1676);
  v12 = this[2];
  if ( v9 < 0 || v9 >= *(_DWORD *)(v12 + 4) )
  {
    ++dword_10691DE0;
    v13 = 0;
  }
  else
  {
    v13 = *(_DWORD *)(*(_DWORD *)(v12 + 8) + 4 * v9);
  }
  sub_1008D160(v13, v14, v11);
  *a7 = v14[0];
  a7[1] = v14[1];
  a7[2] = v14[2];
  return 1;
}
