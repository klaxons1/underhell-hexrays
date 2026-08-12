void __thiscall sub_10118E20(int this)
{
  _DWORD *v2; // esi
  int *v3; // edi
  unsigned int v4; // eax
  int v5; // eax
  unsigned int v6; // eax
  int *v7; // ecx
  unsigned int v8; // esi
  unsigned int v9; // eax
  int v10; // edx
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  int *v15; // ecx
  unsigned int v16; // esi
  unsigned int v17; // eax
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // eax
  int v21; // eax
  int *v22; // ecx
  int *v23; // ecx
  __int64 v24; // [esp-4h] [ebp-18h]
  int v25; // [esp+4h] [ebp-10h]
  _DWORD *v26; // [esp+10h] [ebp-4h]

  if ( *(int *)(dword_106B31C8 + 20) > 1 )
  {
    v26 = (_DWORD *)sub_1025FB50(1);
    v2 = v26;
  }
  else
  {
    v2 = (_DWORD *)sub_10261B20();
    v26 = v2;
  }
  if ( v2 )
  {
    v3 = off_1061BE18;
    if ( *(_DWORD *)(this + 1156) != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 1156) & 0xFFF) + 2] == *(_DWORD *)(this + 1156) >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 1156) & 0xFFF) + 1]
      || (v4 = *(_DWORD *)(this + 1144), v4 != -1)
      && off_1061BE18[4 * (*(_DWORD *)(this + 1144) & 0xFFF) + 2] == v4 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 1144) & 0xFFF) + 1] )
    {
      if ( sub_100CF460(v2) )
      {
        v5 = sub_100CF460(v2);
        (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 992))(v5);
      }
      v3 = off_1061BE18;
    }
    v6 = *(_DWORD *)(this + 1144);
    if ( v6 != -1 )
    {
      v7 = &v3[4 * (*(_DWORD *)(this + 1144) & 0xFFF) + 1];
      v8 = v6 >> 12;
      if ( v3[4 * (*(_DWORD *)(this + 1144) & 0xFFF) + 2] == *(_DWORD *)(this + 1144) >> 12 )
      {
        if ( *v7 )
        {
          v9 = v26[1066];
          if ( v9 == -1 || v3[4 * (v26[1066] & 0xFFF) + 2] != v9 >> 12 )
            v10 = 0;
          else
            v10 = v3[4 * (v26[1066] & 0xFFF) + 1];
          v11 = v3[4 * (*(_DWORD *)(this + 1144) & 0xFFF) + 2] == v8 ? *v7 : 0;
          if ( v10 == v11 )
          {
            sub_101E7640(0);
            v3 = off_1061BE18;
          }
        }
      }
    }
    v12 = *(_DWORD *)(this + 1144);
    if ( v12 == -1 || v3[4 * (*(_DWORD *)(this + 1144) & 0xFFF) + 2] != v12 >> 12 )
      v13 = 0;
    else
      v13 = v3[4 * (*(_DWORD *)(this + 1144) & 0xFFF) + 1];
    sub_1025FAC0(v13);
    v14 = *(_DWORD *)(this + 1156);
    if ( v14 != -1 )
    {
      v15 = &off_1061BE18[4 * (*(_DWORD *)(this + 1156) & 0xFFF) + 1];
      v16 = v14 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 1156) & 0xFFF) + 2] == *(_DWORD *)(this + 1156) >> 12 )
      {
        if ( *v15 )
        {
          v17 = v26[1066];
          if ( v17 == -1 || off_1061BE18[4 * (v26[1066] & 0xFFF) + 2] != v17 >> 12 )
            v18 = 0;
          else
            v18 = off_1061BE18[4 * (v26[1066] & 0xFFF) + 1];
          v19 = off_1061BE18[4 * (*(_DWORD *)(this + 1156) & 0xFFF) + 2] == v16 ? *v15 : 0;
          if ( v18 == v19 )
            sub_101E7640(0);
        }
      }
    }
    v20 = *(_DWORD *)(this + 1156);
    if ( v20 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1156) & 0xFFF) + 2] != v20 >> 12 )
      v21 = 0;
    else
      v21 = off_1061BE18[4 * (*(_DWORD *)(this + 1156) & 0xFFF) + 1];
    sub_1025FAC0(v21);
    if ( *(_BYTE *)(this + 1268) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v22 = *(int **)(this + 24);
        if ( v22 )
          sub_100194B0(v22, 1268);
      }
      *(_BYTE *)(this + 1268) = 0;
    }
    if ( *(_DWORD *)(this + 864) != COERCE_INT(1.0) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v23 = *(int **)(this + 24);
        if ( v23 )
          sub_100194B0(v23, 864);
      }
      *(float *)(this + 864) = 1.0;
    }
    v25 = off_10615804;
    *(float *)(this + 1164) = 0.0;
    *(_BYTE *)(this + 1162) = 0;
    sub_100EC3F0((_DWORD *)this, 0, 0.0, v25);
    sub_1010CD10(dword_10614CA8, (_DWORD *)this);
    HIDWORD(v24) = this;
    LODWORD(v24) = this;
    sub_1010DD80((_DWORD *)(this + 1244), v24, 0.0);
    dword_1069C05C = -1;
  }
}
