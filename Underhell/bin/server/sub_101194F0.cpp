void __thiscall sub_101194F0(int this, int a2)
{
  int v3; // eax
  int v4; // edi
  const char *v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  int v8; // edi
  unsigned int v9; // eax
  int v10; // edi
  int v11; // ecx
  double v12; // [esp+10h] [ebp-8h] BYREF

  if ( *(int *)(dword_106B31C8 + 20) > 1 )
    v3 = sub_1025FB50(1);
  else
    v3 = sub_10261B20();
  v4 = v3;
  if ( v3 )
  {
    if ( *(_DWORD *)(this + 1124) )
    {
      byte_1069C01C = 1;
      v5 = *(const char **)(this + 1124);
      if ( !v5 )
        v5 = String;
      (*(void (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
        dword_106B31D0,
        *(_DWORD *)(v4 + 24),
        v5);
      (*(void (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
        dword_106B31D0,
        *(_DWORD *)(v4 + 24),
        "commentary_cvarsnotchanging\n");
    }
    *(float *)(this + 1164) = *(float *)(dword_106B31C8 + 12);
    if ( (_BYTE)a2
      && (v6 = *(_DWORD *)(this + 1156), v6 != -1)
      && off_1061BE18[4 * (*(_DWORD *)(this + 1156) & 0xFFF) + 2] == v6 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 1156) & 0xFFF) + 1] )
    {
      HIBYTE(a2) = 0;
      sub_10118830((_BYTE *)(this + 1268), (_BYTE *)&a2 + 3);
      v12 = 1.0;
      sub_10045730((float *)(this + 864), &v12);
      v7 = *(_DWORD *)(this + 1156);
      if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1156) & 0xFFF) + 2] != v7 >> 12 )
        v8 = 0;
      else
        v8 = off_1061BE18[4 * (*(_DWORD *)(this + 1156) & 0xFFF) + 1];
      if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
        sub_100DAE60(v8);
      *(float *)(this + 1168) = *(float *)(v8 + 580);
      *(float *)(this + 1172) = *(float *)(v8 + 584);
      *(float *)(this + 1176) = *(float *)(v8 + 588);
      v9 = *(_DWORD *)(this + 1156);
      if ( v9 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1156) & 0xFFF) + 2] != v9 >> 12 )
        v10 = 0;
      else
        v10 = off_1061BE18[4 * (*(_DWORD *)(this + 1156) & 0xFFF) + 1];
      if ( (*(_DWORD *)(v10 + 252) & 0x800) != 0 )
        sub_100DAE60(v10);
      v11 = off_10615804;
      *(float *)(this + 1192) = *(float *)(v10 + 704);
      *(float *)(this + 1196) = *(float *)(v10 + 708);
      *(float *)(this + 1200) = *(float *)(v10 + 712);
      *(_BYTE *)(this + 1204) = 1;
      sub_100EC3F0((_DWORD *)this, (int)sub_10119290, *(float *)(dword_106B31C8 + 12), v11);
    }
    else
    {
      sub_10118E20(this);
    }
  }
}
