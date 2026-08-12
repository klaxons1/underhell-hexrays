bool __thiscall sub_1029EF10(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  bool result; // al
  unsigned int v6; // eax
  int v7; // ecx
  float v8; // [esp+4h] [ebp-Ch] BYREF
  float v9; // [esp+8h] [ebp-8h]
  float v10; // [esp+Ch] [ebp-4h]

  v2 = this[17];
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[17] & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  result = 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 868))(v4) )
  {
    v6 = this[17];
    if ( v6 == -1 || off_1061BE18[4 * (this[17] & 0xFFF) + 2] != v6 >> 12 )
      v7 = 0;
    else
      v7 = off_1061BE18[4 * (this[17] & 0xFFF) + 1];
    (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v7 + 540))(v7, &v8, 0);
    if ( v9 * v9 + v8 * v8 + v10 * v10 <= 64.0 )
      return 1;
  }
  return result;
}
