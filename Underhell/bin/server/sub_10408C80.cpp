void __thiscall sub_10408C80(_DWORD *this)
{
  _DWORD *v2; // edi
  _DWORD *v3; // edi
  unsigned int v4; // eax
  int *v5; // ecx
  unsigned int v6; // eax
  int v7; // eax
  unsigned int v8; // ecx
  int *v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // ebx
  unsigned int v13; // eax
  unsigned __int16 *v14; // ecx
  unsigned int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  int v22; // eax
  unsigned int v23; // eax
  int v24; // ecx
  unsigned int v25; // eax
  int v26; // ecx
  unsigned int v27; // eax
  int v28; // ecx
  unsigned int v29; // eax
  int v30; // ecx
  unsigned int v31; // esi
  int v32; // ecx
  int v33; // esi
  int *v34; // ecx
  int v35; // [esp+Ch] [ebp-4h]

  v2 = (_DWORD *)sub_100D1940(this);
  if ( v2 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v2 + 320))(v2) )
  {
    v3 = (_DWORD *)sub_101E7EA0(v2, 0);
    v4 = this[355];
    if ( v4 != -1
      && (v5 = &off_1061BE18[4 * (this[355] & 0xFFF) + 1], v6 = v4 >> 12,
                                                           off_1061BE18[4 * (this[355] & 0xFFF) + 2] == v6)
      && *v5 )
    {
      if ( off_1061BE18[4 * (this[355] & 0xFFF) + 2] == v6 )
        v32 = *v5;
      else
        v32 = 0;
      v33 = v32 + 116;
      if ( *(_BYTE *)(v32 + 119) != 0x80 )
      {
        if ( *(_BYTE *)(v32 + 84) )
        {
          *(_BYTE *)(v32 + 88) |= 1u;
          *(_BYTE *)(v32 + 119) = 0x80;
        }
        else
        {
          v34 = *(int **)(v32 + 24);
          if ( v34 )
            sub_100194B0(v34, 116);
          *(_BYTE *)(v33 + 3) = 0x80;
        }
      }
    }
    else
    {
      v7 = sub_100FB5C0("effects/laser1_noz.vmt", 1.0);
      if ( v7 )
        this[355] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
      else
        this[355] = -1;
      v8 = this[355];
      if ( v8 != -1 )
      {
        v9 = &off_1061BE18[4 * (this[355] & 0xFFF) + 1];
        v10 = v8 >> 12;
        if ( off_1061BE18[4 * (this[355] & 0xFFF) + 2] == v10 )
        {
          if ( *v9 )
          {
            if ( off_1061BE18[4 * (this[355] & 0xFFF) + 2] == v10 )
              v11 = *v9;
            else
              v11 = 0;
            sub_100FAE40(v11, v3, v3);
            v12 = sub_100BEF30((int)this, "laser");
            v35 = sub_100BEF30((int)this, "laser_end");
            v13 = this[355];
            if ( v13 == -1 || off_1061BE18[4 * (this[355] & 0xFFF) + 2] != v13 >> 12 )
              v14 = 0;
            else
              v14 = (unsigned __int16 *)off_1061BE18[4 * (this[355] & 0xFFF) + 1];
            sub_100EACE0(v14, (int)v3, 1);
            v15 = this[355];
            if ( v15 == -1 || off_1061BE18[4 * (this[355] & 0xFFF) + 2] != v15 >> 12 )
              v16 = 0;
            else
              v16 = off_1061BE18[4 * (this[355] & 0xFFF) + 1];
            sub_1024A060(v16, v12);
            v17 = this[355];
            if ( v17 == -1 || off_1061BE18[4 * (this[355] & 0xFFF) + 2] != v17 >> 12 )
              v18 = 0;
            else
              v18 = off_1061BE18[4 * (this[355] & 0xFFF) + 1];
            sub_1005BC90(v18, v35);
            v19 = this[355];
            if ( v19 == -1 || off_1061BE18[4 * (this[355] & 0xFFF) + 2] != v19 >> 12 )
              v20 = 0;
            else
              v20 = off_1061BE18[4 * (this[355] & 0xFFF) + 1];
            sub_100FA790(v20, 0.0);
            v21 = this[355];
            if ( v21 == -1 || off_1061BE18[4 * (this[355] & 0xFFF) + 2] != v21 >> 12 )
              v22 = 0;
            else
              v22 = off_1061BE18[4 * (this[355] & 0xFFF) + 1];
            sub_1005C620((_BYTE *)(v22 + 116), 255, 0, 0, HIBYTE(*(_DWORD *)(v22 + 116)));
            v23 = this[355];
            if ( v23 == -1 || off_1061BE18[4 * (this[355] & 0xFFF) + 2] != v23 >> 12 )
              v24 = 0;
            else
              v24 = off_1061BE18[4 * (this[355] & 0xFFF) + 1];
            sub_100FA830(v24, 0);
            v25 = this[355];
            if ( v25 == -1 || off_1061BE18[4 * (this[355] & 0xFFF) + 2] != v25 >> 12 )
              v26 = 0;
            else
              v26 = off_1061BE18[4 * (this[355] & 0xFFF) + 1];
            sub_1005C3A0(v26, 0.5);
            v27 = this[355];
            if ( v27 == -1 || off_1061BE18[4 * (this[355] & 0xFFF) + 2] != v27 >> 12 )
              v28 = 0;
            else
              v28 = off_1061BE18[4 * (this[355] & 0xFFF) + 1];
            sub_1005C410(v28, 0.5);
            v29 = this[355];
            if ( v29 == -1 || off_1061BE18[4 * (this[355] & 0xFFF) + 2] != v29 >> 12 )
              v30 = 0;
            else
              v30 = off_1061BE18[4 * (this[355] & 0xFFF) + 1];
            sub_100FB020(v30, 128);
            v31 = this[355];
            if ( v31 == -1 || off_1061BE18[4 * (v31 & 0xFFF) + 2] != v31 >> 12 )
              sub_100FAAC0(0, 128);
            else
              sub_100FAAC0(off_1061BE18[4 * (v31 & 0xFFF) + 1], 128);
          }
        }
      }
    }
  }
}
