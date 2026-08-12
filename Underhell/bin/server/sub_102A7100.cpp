void __thiscall sub_102A7100(int *this, int a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  _DWORD *v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  int v10; // eax

  v3 = this[17];
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (v3 & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( v4[1] == v5 )
    {
      if ( *v4 )
      {
        if ( v4[1] == v5 )
          v6 = (_DWORD *)*v4;
        else
          v6 = 0;
        sub_102675B0(v6, this[1]);
        v7 = this[17];
        if ( v7 == -1 || off_1061BE18[4 * (this[17] & 0xFFF) + 2] != v7 >> 12 )
          v8 = 0;
        else
          v8 = off_1061BE18[4 * (this[17] & 0xFFF) + 1];
        (*(void (__thiscall **)(int, int))(*(_DWORD *)(v8 + 1488) + 12))(v8 + 1488, this[1]);
        v9 = this[17];
        if ( v9 == -1 || off_1061BE18[4 * (this[17] & 0xFFF) + 2] != v9 >> 12 )
          v10 = 0;
        else
          v10 = off_1061BE18[4 * (this[17] & 0xFFF) + 1];
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v10 + 1488) + 20))(v10 + 1488, this[1], 0);
      }
    }
  }
}
