int __thiscall sub_10312970(int this, int a2, float a3)
{
  unsigned int v4; // eax
  int v5; // eax
  float v7; // [esp+4h] [ebp-8h] BYREF
  float v8; // [esp+8h] [ebp-4h] BYREF

  if ( (*(_BYTE *)(this + 250) & 1) != 0 )
    return 0;
  v4 = *(_DWORD *)(this + 3756);
  if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3756) & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (*(_DWORD *)(this + 3756) & 0xFFF) + 1];
  if ( *(_BYTE *)(v5 + 224) )
    return 0;
  if ( sub_10312580((_DWORD *)this) )
    return 0;
  if ( *(_BYTE *)(this + 3764) )
    return 0;
  if ( !sub_10023D10((_DWORD *)this, 10) )
    return 0;
  if ( *(float *)(dword_106B31C8 + 12) + 0.1 < ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 3628)
                                                                                         + 224))(*(_DWORD *)(this + 3628)) )
    return 0;
  (*(void (__thiscall **)(_DWORD, float *, float *))(**(_DWORD **)(this + 3628) + 216))(
    *(_DWORD *)(this + 3628),
    &v8,
    &v7);
  if ( a3 < (double)v8 || a3 > (double)v7 )
    return 0;
  else
    return 22;
}
