void __thiscall sub_10372B80(_DWORD *this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // [esp-4h] [ebp-8h]

  v2 = this[1158];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        v9 = v5;
        v6 = (*(int (__thiscall **)(_DWORD *))(*this + 1868))(this);
        sub_100780E0(v6, v9);
        v7 = this[1158];
        if ( v7 == -1 || off_1061BE18[4 * (this[1158] & 0xFFF) + 2] != v7 >> 12 )
          v8 = 0;
        else
          v8 = off_1061BE18[4 * (this[1158] & 0xFFF) + 1];
        sub_1025FAC0(v8);
        this[1158] = -1;
      }
    }
  }
}
