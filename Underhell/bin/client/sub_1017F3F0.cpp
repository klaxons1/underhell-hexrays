char __thiscall sub_1017F3F0(_DWORD *this, char *String2)
{
  int v2; // esi
  char v4; // bl
  char *v5; // esi
  int v6; // eax
  unsigned int v7; // ecx
  _DWORD *v8; // eax
  unsigned int v9; // ecx
  _DWORD *v10; // eax
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // esi
  unsigned int v14; // eax
  float *v15; // ecx
  int v17; // [esp+10h] [ebp-4h]

  v2 = dword_1047CA8C;
  v4 = 0;
  v17 = dword_1047CA8C;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
  if ( this[70] )
  {
    v5 = String2;
    v6 = sub_1017F3A0(this, String2);
    if ( v6 != -1 )
      v5 = *(char **)(*(_DWORD *)(*(_DWORD *)(this[70] + 64) + 4 * v6) + 4);
    v7 = this[71];
    if ( v7 != -1 )
    {
      v8 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[71] & 0xFFF) + 4);
      v9 = v7 >> 12;
      if ( *((_DWORD *)off_103DCD74 + 4 * (this[71] & 0xFFF) + 2) == v9 )
      {
        if ( *v8 )
        {
          v10 = *((_DWORD *)off_103DCD74 + 4 * (this[71] & 0xFFF) + 2) == v9 ? (_DWORD *)*v8 : 0;
          v11 = sub_10029D40(v10, v5);
          if ( v11 != -1 )
          {
            v12 = this[71];
            if ( v12 == -1 || *((_DWORD *)off_103DCD74 + 4 * (this[71] & 0xFFF) + 2) != v12 >> 12 )
              v13 = 0;
            else
              v13 = *((_DWORD *)off_103DCD74 + 4 * (this[71] & 0xFFF) + 1);
            sub_10029860(v13, v11);
            sub_10029AE0(v13);
            v14 = this[71];
            if ( v14 == -1 || *((_DWORD *)off_103DCD74 + 4 * (this[71] & 0xFFF) + 2) != v14 >> 12 )
              v15 = 0;
            else
              v15 = (float *)*((_DWORD *)off_103DCD74 + 4 * (this[71] & 0xFFF) + 1);
            sub_10025680(v15, 0.0);
            v4 = 1;
          }
        }
      }
    }
    v2 = v17;
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  return v4;
}
