char __thiscall sub_1013DC50(_DWORD *this, int a2, int a3)
{
  int v3; // edi
  _DWORD *v4; // ebx
  int *v5; // eax
  int v6; // ecx
  _BYTE *v7; // esi
  char v8; // al
  char v9; // cl
  int *v11; // eax
  int v12; // ecx
  _BYTE *v13; // esi
  char v14; // al
  char v15; // cl

  v3 = 0;
  v4 = this + 219;
  if ( this[213] )
  {
    while ( 1 )
    {
      if ( *v4 != -1 )
      {
        v11 = &off_1061BE18[4 * (*v4 & 0xFFF) + 1];
        v12 = *v4 >> 12;
        if ( off_1061BE18[4 * (*v4 & 0xFFF) + 2] == v12 )
        {
          if ( *v11 )
          {
            v13 = off_1061BE18[4 * (*v4 & 0xFFF) + 2] == v12 ? (_BYTE *)*v11 : 0;
            v14 = (*(int (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)v13 + 720))(v13, a2, a3);
            v15 = v13[800] ? v14 == 0 : v14;
            if ( v15 )
              break;
          }
        }
      }
      ++v3;
      ++v4;
      if ( v3 >= 5 )
        return 0;
    }
    return 1;
  }
  else
  {
    while ( 1 )
    {
      if ( *v4 != -1 )
      {
        v5 = &off_1061BE18[4 * (*v4 & 0xFFF) + 1];
        v6 = *v4 >> 12;
        if ( off_1061BE18[4 * (*v4 & 0xFFF) + 2] == v6 )
        {
          if ( *v5 )
          {
            v7 = off_1061BE18[4 * (*v4 & 0xFFF) + 2] == v6 ? (_BYTE *)*v5 : 0;
            v8 = (*(int (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)v7 + 720))(v7, a2, a3);
            v9 = v7[800] ? v8 == 0 : v8;
            if ( !v9 )
              break;
          }
        }
      }
      ++v3;
      ++v4;
      if ( v3 >= 5 )
        return 1;
    }
    return 0;
  }
}
