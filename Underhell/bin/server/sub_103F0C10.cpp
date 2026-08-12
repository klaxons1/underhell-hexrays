unsigned int __thiscall sub_103F0C10(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int result; // eax
  int *v8; // ecx
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // esi

  v2 = this[519];
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[519] & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v4 + 140))(v4, 0, -1);
  v5 = this[519];
  if ( v5 == -1 || off_1061BE18[4 * (this[519] & 0xFFF) + 2] != v5 >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (this[519] & 0xFFF) + 1];
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 584))(v6);
  result = this[518];
  if ( result != -1 )
  {
    v8 = &off_1061BE18[4 * (this[518] & 0xFFF) + 1];
    result >>= 12;
    if ( off_1061BE18[4 * (this[518] & 0xFFF) + 2] == result )
    {
      if ( *v8 )
      {
        if ( off_1061BE18[4 * (this[518] & 0xFFF) + 2] == result )
          v9 = *v8;
        else
          v9 = 0;
        *(_DWORD *)(v9 + 196) = sub_103F0950;
        v10 = this[519];
        if ( v10 == -1 || off_1061BE18[4 * (this[519] & 0xFFF) + 2] != v10 >> 12 )
          v11 = 0;
        else
          v11 = off_1061BE18[4 * (this[519] & 0xFFF) + 1];
        result = this[518];
        if ( result == -1 || (result >>= 12, off_1061BE18[4 * (this[518] & 0xFFF) + 2] != result) )
          v12 = 0;
        else
          v12 = off_1061BE18[4 * (this[518] & 0xFFF) + 1];
        if ( v11 )
        {
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11);
          *(_DWORD *)(v12 + 804) = *(_DWORD *)result;
        }
        else
        {
          *(_DWORD *)(v12 + 804) = -1;
        }
        *(float *)(v12 + 800) = *(float *)(dword_106B31C8 + 12) + 0.5;
      }
    }
  }
  return result;
}
