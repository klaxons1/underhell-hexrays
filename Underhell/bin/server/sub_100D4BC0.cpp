int __thiscall sub_100D4BC0(void *this, int a2)
{
  int v3; // edi
  int *v4; // ecx
  int v5; // eax
  int *v6; // ecx
  int *v7; // ecx
  unsigned int v8; // ebx
  int *v9; // ecx
  unsigned int v10; // ebx
  int *v11; // ecx
  int v12; // ecx
  void (__thiscall *v13)(int, int, float *); // eax
  unsigned int v14; // eax
  int v15; // edi
  int result; // eax
  float v17; // [esp+0h] [ebp-24h]
  float v18[4]; // [esp+14h] [ebp-10h] BYREF

  *((_BYTE *)this + 1172) = 1;
  sub_10163390(this);
  v3 = *((_DWORD *)this + 62) | 0x40000000;
  if ( *((_DWORD *)this + 62) != v3 )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v4 = (int *)*((_DWORD *)this + 6);
      if ( v4 )
        sub_100194B0(v4, 248);
    }
    *((_DWORD *)this + 62) = v3;
  }
  v5 = *((_DWORD *)this + 216);
  v18[3] = 0.0;
  if ( v5 != COERCE_INT(0.0) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v6 = (int *)*((_DWORD *)this + 6);
      if ( v6 )
        sub_100194B0(v6, 864);
    }
    *((float *)this + 216) = 0.0;
  }
  sub_100E1BB0(this);
  sub_100E0970(5, 0);
  *((float *)this + 138) = 1.0;
  if ( *((_DWORD *)this + 296) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v7 = (int *)*((_DWORD *)this + 6);
      if ( v7 )
        sub_100194B0(v7, 1184);
    }
    *((_DWORD *)this + 296) = 0;
  }
  v8 = *((_DWORD *)this + 48) & 0xFFFFFFDF;
  if ( *((_DWORD *)this + 48) != v8 )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v9 = (int *)*((_DWORD *)this + 6);
      if ( v9 )
        sub_100194B0(v9, 192);
    }
    *((_DWORD *)this + 48) = v8;
  }
  if ( *((_DWORD *)this + 6) )
    **((_DWORD **)this + 6) |= 0x80u;
  sub_100D8500(this);
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 1336))(this);
  sub_101C73D0(0);
  sub_100EC3F0((int)sub_100D1270, 0.0, 0);
  *((_DWORD *)this + 49) = 0;
  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    v10 = *((_DWORD *)this + 62) & 0xFFFFFFFD;
    if ( *((_DWORD *)this + 62) != v10 )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v11 = (int *)*((_DWORD *)this + 6);
        if ( v11 )
          sub_100194B0(v11, 248);
      }
      *((_DWORD *)this + 62) = v10;
    }
  }
  v12 = *((_DWORD *)this + 106);
  if ( v12 )
  {
    v13 = *(void (__thiscall **)(int, int, float *))(*(_DWORD *)v12 + 208);
    v18[0] = 200.0;
    v18[1] = 200.0;
    v18[2] = 200.0;
    v13(v12, a2, v18);
  }
  else
  {
    sub_100DD660(a2);
  }
  v14 = *((_DWORD *)this + 103);
  if ( v14 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 103) & 0xFFF) + 2] != v14 >> 12 )
    v15 = 0;
  else
    v15 = off_1061BE18[4 * (*((_DWORD *)this + 103) & 0xFFF) + 1];
  v17 = *(float *)(dword_106B31C8 + 12) + 1.0;
  sub_100EC4A0(v17, 0);
  (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 76))(this, 0);
  result = sub_100D3450(this, 0);
  if ( v15 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 284))(v15);
    if ( (_BYTE)result )
    {
      result = (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_106B3CDC + 164))(dword_106B3CDC, this);
      if ( !(_BYTE)result )
        return sub_1025FAC0(this);
    }
  }
  return result;
}
