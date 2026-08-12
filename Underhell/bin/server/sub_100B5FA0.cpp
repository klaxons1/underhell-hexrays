int *__thiscall sub_100B5FA0(_DWORD *this, int a2, int a3)
{
  bool v3; // zf
  _DWORD *v4; // ebx
  unsigned int v5; // eax
  int v6; // esi
  unsigned int v7; // eax
  int v8; // esi
  unsigned int v9; // eax
  int *v10; // ecx
  unsigned int v11; // eax
  int v12; // esi
  int *result; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  int v16; // eax
  int v17; // esi
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // ebx
  unsigned int v22; // eax
  int v23; // edi
  int v24; // [esp+10h] [ebp-1Ch] BYREF
  float v25; // [esp+14h] [ebp-18h]
  float v26; // [esp+18h] [ebp-14h]
  int v27; // [esp+1Ch] [ebp-10h] BYREF
  float v28; // [esp+20h] [ebp-Ch]
  float v29; // [esp+24h] [ebp-8h]
  _DWORD *v30; // [esp+28h] [ebp-4h]

  v3 = *(_DWORD *)(dword_106953A4 + 48) == 2;
  v4 = this;
  v30 = this;
  if ( v3 )
  {
    sub_1011BC50((int)(this + 927), a3, 0, 0, 255, 1, 0.1);
    *(float *)&v27 = 16.0;
    v28 = 16.0;
    v29 = 16.0;
    *(float *)&v24 = -16.0;
    v25 = -16.0;
    v26 = -16.0;
    sub_1011C000(a2, (int)&v24, (int)&v27, 255, 0, 0, 1, 0.1);
    v5 = v4[911];
    *(float *)&v24 = 16.0;
    v25 = 16.0;
    v26 = 16.0;
    *(float *)&v27 = -16.0;
    v28 = -16.0;
    v29 = -16.0;
    if ( v5 == -1 || off_1061BE18[4 * (v5 & 0xFFF) + 2] != v5 >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (v5 & 0xFFF) + 1];
    if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
      sub_100DAE60(v6);
    sub_1011C000(v6 + 580, (int)&v27, (int)&v24, 0, 255, 0, 1, 0.1);
    *(float *)&v24 = 16.0;
    v25 = 16.0;
    v26 = 16.0;
    *(float *)&v27 = -16.0;
    v28 = -16.0;
    v29 = -16.0;
    sub_1011C000((int)(v4 + 905), (int)&v27, (int)&v24, 0, 0, 255, 1, 0.1);
    v7 = v4[912];
    *(float *)&v24 = 16.0;
    v25 = 16.0;
    v26 = 16.0;
    *(float *)&v27 = -16.0;
    v28 = -16.0;
    v29 = -16.0;
    if ( v7 == -1 || off_1061BE18[4 * (v7 & 0xFFF) + 2] != v7 >> 12 )
      v8 = 0;
    else
      v8 = off_1061BE18[4 * (v7 & 0xFFF) + 1];
    if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
      sub_100DAE60(v8);
    sub_1011C000(v8 + 580, (int)&v27, (int)&v24, 255, 255, 255, 1, 0.1);
    v9 = v4[914];
    if ( v9 != -1 )
    {
      v10 = &off_1061BE18[4 * (v4[914] & 0xFFF) + 1];
      v11 = v9 >> 12;
      if ( off_1061BE18[4 * (v4[914] & 0xFFF) + 2] == v11 )
      {
        if ( *v10 )
        {
          *(float *)&v24 = 24.0;
          v25 = 24.0;
          v26 = 24.0;
          *(float *)&v27 = -24.0;
          v28 = -24.0;
          v29 = -24.0;
          if ( v10[1] == v11 )
            v12 = *v10;
          else
            v12 = 0;
          if ( (*(_DWORD *)(v12 + 252) & 0x800) != 0 )
            sub_100DAE60(v12);
          sub_1011C000(v12 + 580, (int)&v27, (int)&v24, 255, 0, 255, 1, 0.1);
        }
      }
    }
  }
  result = (int *)dword_106953A4;
  if ( *(_DWORD *)(dword_106953A4 + 48) == 3 )
  {
    v14 = v4[911];
    if ( v14 != -1 )
    {
      result = &off_1061BE18[4 * (v4[911] & 0xFFF) + 1];
      v15 = v14 >> 12;
      if ( off_1061BE18[4 * (v4[911] & 0xFFF) + 2] == v15 )
      {
        if ( *result )
        {
          v16 = off_1061BE18[4 * (v4[911] & 0xFFF) + 2] == v15 ? *result : 0;
          v17 = v16;
          for ( result = (int *)sub_101ACC70(v16, 1); result; result = (int *)sub_101ACC70(v17, 1) )
          {
            v18 = *(_DWORD *)(v17 + 252) >> 11;
            *(float *)&v24 = 2.0;
            v25 = 2.0;
            v26 = 2.0;
            *(float *)&v27 = -2.0;
            v28 = -2.0;
            v29 = -2.0;
            if ( (v18 & 1) != 0 )
              sub_100DAE60(v17);
            sub_1011BB20(v17 + 580, (int)&v27, (int)&v24, 0, 255, 0, 8, 0.1);
            v19 = sub_101ACC90(v17);
            if ( sub_101ACC70(v19, 1) )
            {
              v20 = sub_101ACC90(v17);
              v21 = v20;
              if ( (*(_DWORD *)(v20 + 252) & 0x800) != 0 )
                sub_100DAE60(v20);
              if ( (*(_DWORD *)(v17 + 252) & 0x800) != 0 )
                sub_100DAE60(v17);
              sub_1011BC50(v17 + 580, v21 + 580, 0, 255, 0, 1, 0.1);
              v4 = v30;
            }
            v22 = v4[911];
            if ( v22 == -1 || off_1061BE18[4 * (v4[911] & 0xFFF) + 2] != v22 >> 12 )
              v23 = 0;
            else
              v23 = off_1061BE18[4 * (v4[911] & 0xFFF) + 1];
            result = (int *)sub_101ACC90(v17);
            if ( result == (int *)v23 )
              break;
            v17 = sub_101ACC90(v17);
          }
        }
      }
    }
  }
  return result;
}
