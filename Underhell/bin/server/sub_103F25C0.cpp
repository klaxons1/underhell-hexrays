int __thiscall sub_103F25C0(_DWORD *this)
{
  int v1; // ebx
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  int *v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // ebx
  int *v9; // ecx
  int v10; // ecx
  float *v11; // esi
  int *v12; // ecx
  int *v13; // ecx
  unsigned int v14; // eax
  int v15; // eax
  int v16; // ecx
  float v18; // [esp+0h] [ebp-24h]
  int v19; // [esp+18h] [ebp-Ch]
  _DWORD *v21; // [esp+20h] [ebp-4h]

  v1 = (int)this;
  v2 = this + 520;
  v19 = 0;
  v21 = this + 520;
  do
  {
    if ( *v2 == -1 || off_1061BE18[4 * (*v2 & 0xFFF) + 2] != *v2 >> 12 || !off_1061BE18[4 * (*v2 & 0xFFF) + 1] )
    {
      v3 = sub_10243040(off_1068346C, (float *)(v1 + 716), 0);
      *v2 = v3 ? *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v3 + 8))(v3) : -1;
      if ( *v2 != -1 )
      {
        v4 = &off_1061BE18[4 * (*v2 & 0xFFF) + 1];
        v5 = *v2 >> 12;
        if ( off_1061BE18[4 * (*v2 & 0xFFF) + 2] == v5 )
        {
          if ( *v4 )
          {
            if ( off_1061BE18[4 * (*v2 & 0xFFF) + 2] == v5 )
              v6 = *v4;
            else
              v6 = 0;
            sub_10128950(v6, 9, 255, 220, 40, 255, 14);
            if ( *v2 == -1 || off_1061BE18[4 * (*v2 & 0xFFF) + 2] != *v2 >> 12 )
              v7 = 0;
            else
              v7 = off_1061BE18[4 * (*v2 & 0xFFF) + 1];
            v8 = sub_100BEF30(v1, (&off_1068419C)[v19]);
            if ( this )
            {
              sub_100C0E40((unsigned int *)(v7 + 800), (int)this);
              if ( *(_DWORD *)(v7 + 804) != v8 )
              {
                if ( *(_BYTE *)(v7 + 84) )
                {
                  *(_BYTE *)(v7 + 88) |= 1u;
                }
                else
                {
                  v9 = *(int **)(v7 + 24);
                  if ( v9 )
                    sub_100194B0(v9, 804);
                }
                *(_DWORD *)(v7 + 804) = v8;
              }
              sub_100EACE0((unsigned __int16 *)v7, (int)this, 1);
              v2 = v21;
            }
            if ( *v2 == -1 || off_1061BE18[4 * (*v2 & 0xFFF) + 2] != *v2 >> 12 )
              v10 = 0;
            else
              v10 = off_1061BE18[4 * (*v2 & 0xFFF) + 1];
            v11 = (float *)(v10 + 840);
            if ( *(_DWORD *)(v10 + 840) != COERCE_INT(2.0) )
            {
              if ( *(_BYTE *)(v10 + 84) )
              {
                *(_BYTE *)(v10 + 88) |= 1u;
              }
              else
              {
                v12 = *(int **)(v10 + 24);
                if ( v12 )
                  sub_100194B0(v12, 840);
              }
              *v11 = 2.0;
            }
            if ( *v21 == -1 || off_1061BE18[4 * (*v21 & 0xFFF) + 2] != *v21 >> 12 )
              v13 = 0;
            else
              v13 = (int *)off_1061BE18[4 * (*v21 & 0xFFF) + 1];
            sub_10242060(v13);
            v14 = *v21;
            if ( v19 < 2 )
            {
              if ( v14 == -1 || off_1061BE18[4 * (*v21 & 0xFFF) + 2] != v14 >> 12 )
                v15 = 0;
              else
                v15 = off_1061BE18[4 * (*v21 & 0xFFF) + 1];
              sub_1005C620((_BYTE *)(v15 + 116), 255, 0, 0, HIBYTE(*(_DWORD *)(v15 + 116)));
              v14 = *v21;
            }
            if ( v14 == -1 || off_1061BE18[4 * (v14 & 0xFFF) + 2] != v14 >> 12 )
              v16 = 0;
            else
              v16 = off_1061BE18[4 * (v14 & 0xFFF) + 1];
            sub_102428B0(v16, 1.0, 0.0);
            v1 = (int)this;
            v2 = v21;
          }
        }
      }
    }
    ++v2;
    ++v19;
    v21 = v2;
  }
  while ( v19 < 4 );
  *(_BYTE *)(v1 + 1951) = 0;
  v18 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC3F0((_DWORD *)v1, (int)sub_103F0470, v18, (int)"HazardBlink");
}
