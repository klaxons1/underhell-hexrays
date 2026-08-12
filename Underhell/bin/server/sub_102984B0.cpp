void __thiscall sub_102984B0(int this)
{
  int v1; // esi
  unsigned int *v2; // ebx
  _DWORD *v3; // edi
  int *v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // edx
  int v9; // esi
  unsigned int *v10; // edi
  int *v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // eax
  __int16 *v15; // ecx
  int v16; // eax
  __int64 v17; // [esp-8h] [ebp-20h]
  int v19; // [esp+14h] [ebp-4h] BYREF

  v1 = 0;
  v2 = (unsigned int *)(this + 1008);
  v19 = 0;
  v3 = (_DWORD *)(this + 1008);
  do
  {
    if ( *v3 != -1
      && (v4 = &off_1061BE18[4 * (*v3 & 0xFFF) + 1], v5 = *v3 >> 12, off_1061BE18[4 * (*v3 & 0xFFF) + 2] == v5)
      && *v4
      && (off_1061BE18[4 * (*v3 & 0xFFF) + 2] != v5 ? (v6 = 0) : (v6 = *v4),
          !*(_DWORD *)(v6 + 828)
       && (off_1061BE18[4 * (*v3 & 0xFFF) + 2] != v5 ? (v7 = 0) : (v7 = *v4), sub_10070BB0(v7)))
      || *(_BYTE *)(v1 + this + 1088) )
    {
      v19 = v1 + 1;
    }
    ++v1;
    ++v3;
  }
  while ( v1 < 20 );
  v8 = v19;
  if ( v19 != *(_DWORD *)(this + 1004) )
  {
    v9 = 0;
    v10 = v2;
    while ( 1 )
    {
      if ( *v10 != -1 )
      {
        v11 = &off_1061BE18[4 * (*v10 & 0xFFF) + 1];
        v12 = *v10 >> 12;
        if ( off_1061BE18[4 * (*v10 & 0xFFF) + 2] == v12 )
        {
          if ( *v11 )
          {
            if ( v9 <= v8 )
            {
              if ( off_1061BE18[4 * (*v10 & 0xFFF) + 2] == v12 )
                v13 = *v11;
              else
                v13 = 0;
              *(_DWORD *)(v13 + 828) = 0;
              v14 = *v10;
              if ( v9 == v8 )
              {
                if ( v14 == -1 || off_1061BE18[4 * (*v10 & 0xFFF) + 2] != v14 >> 12 )
                  sub_10073650(0, (_DWORD *)0xC, 0);
                else
                  sub_10073650((__int16 *)off_1061BE18[4 * (*v10 & 0xFFF) + 1], (_DWORD *)0xC, 0);
              }
              else
              {
                if ( v14 == -1 || off_1061BE18[4 * (*v10 & 0xFFF) + 2] != v14 >> 12 )
                  v15 = 0;
                else
                  v15 = (__int16 *)off_1061BE18[4 * (*v10 & 0xFFF) + 1];
                sub_10073650(v15, 0, 0);
              }
            }
            else if ( off_1061BE18[4 * (*v10 & 0xFFF) + 2] == v12 )
            {
              *(_DWORD *)(*v11 + 828) = 1;
            }
            else
            {
              MEMORY[0x33C] = 1;
            }
          }
        }
      }
      ++v9;
      ++v10;
      if ( v9 >= 20 )
        break;
      v8 = v19;
    }
    v16 = v19;
    *(_DWORD *)(this + 1004) = v19;
    v19 = v16;
    sub_1010C270((float *)(this + 1204), 5, (__int16 *)&v19);
    HIDWORD(v17) = this;
    LODWORD(v17) = this;
    sub_1010DA50(
      (_DWORD *)(this + 1204),
      *(_DWORD *)(this + 1204),
      *(_DWORD *)(this + 1208),
      *(_DWORD *)(this + 1212),
      *(_DWORD *)(this + 1216),
      *(_DWORD *)(this + 1220),
      v17,
      0.0);
  }
}
