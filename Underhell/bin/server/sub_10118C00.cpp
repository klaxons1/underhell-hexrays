unsigned int __thiscall sub_10118C00(int this)
{
  unsigned int result; // eax
  int *v3; // ecx
  int v4; // ebx
  int *v5; // ecx
  int *v6; // ecx
  const char *v7; // eax
  int v8; // ebx
  int *v9; // ecx
  unsigned int v10; // eax
  float *v11; // eax
  int v12; // ecx
  __int64 v13; // [esp-8h] [ebp-1Ch]
  _DWORD *v14; // [esp+10h] [ebp-4h]

  if ( *(int *)(dword_106B31C8 + 20) > 1 )
    result = sub_1025FB50(1);
  else
    result = sub_10261B20();
  v14 = (_DWORD *)result;
  if ( result )
  {
    if ( *(_BYTE *)(this + 1268) != 1 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v3 = *(int **)(this + 24);
        if ( v3 )
          sub_100194B0(v3, 1268);
      }
      *(_BYTE *)(this + 1268) = 1;
    }
    v4 = dword_106B31C8;
    if ( *(_DWORD *)(this + 124) != *(_DWORD *)(dword_106B31C8 + 12) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v5 = *(int **)(this + 24);
        if ( v5 )
          sub_100194B0(v5, 124);
      }
      *(float *)(this + 124) = *(float *)(v4 + 12);
    }
    *(float *)(this + 120) = *(float *)(dword_106B31C8 + 12);
    if ( *(_DWORD *)(this + 848) != 1 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(this + 24);
        if ( v6 )
          sub_100194B0(v6, 848);
      }
      *(_DWORD *)(this + 848) = 1;
    }
    HIDWORD(v13) = this;
    LODWORD(v13) = this;
    sub_1010DD80((_DWORD *)(this + 1220), v13, 0.0);
    if ( *(_DWORD *)(this + 1120) )
    {
      byte_1069C01C = 1;
      v7 = *(const char **)(this + 1120);
      if ( !v7 )
        v7 = String;
      (*(void (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(dword_106B31D0, v14[6], v7);
      (*(void (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
        dword_106B31D0,
        v14[6],
        "commentary_cvarsnotchanging\n");
    }
    v8 = dword_106B31C8;
    if ( *(_DWORD *)(this + 1272) != *(_DWORD *)(dword_106B31C8 + 12) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v9 = *(int **)(this + 24);
        if ( v9 )
          sub_100194B0(v9, 1272);
      }
      *(float *)(this + 1272) = *(float *)(v8 + 12);
    }
    v10 = *(_DWORD *)(this + 1140);
    if ( v10 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 1140) & 0xFFF) + 2] == v10 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 1140) & 0xFFF) + 1]
      || (result = *(_DWORD *)(this + 1152), result != -1)
      && (result >>= 12, off_1061BE18[4 * (*(_DWORD *)(this + 1152) & 0xFFF) + 2] == result)
      && off_1061BE18[4 * (*(_DWORD *)(this + 1152) & 0xFFF) + 1] )
    {
      v11 = (float *)(*(int (__thiscall **)(_DWORD *))(*v14 + 508))(v14);
      v12 = off_10615804;
      *(float *)(this + 1180) = *v11;
      *(float *)(this + 1184) = v11[1];
      *(float *)(this + 1188) = v11[2];
      return sub_100EC3F0((_DWORD *)this, (int)sub_10117C50, *(float *)(dword_106B31C8 + 12), v12);
    }
  }
  return result;
}
