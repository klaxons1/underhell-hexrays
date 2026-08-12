int __thiscall sub_10168560(int this)
{
  char *v2; // eax
  unsigned int v3; // eax
  int v4; // ecx
  int result; // eax
  _BYTE *v6; // esi
  float v7; // [esp+4h] [ebp-8h]

  sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
  v2 = sub_100D8070((_DWORD *)this);
  if ( v2 )
    *(_DWORD *)(this + 920) = *(_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)v2 + 8))(v2);
  else
    *(_DWORD *)(this + 920) = -1;
  v3 = *(_DWORD *)(this + 920);
  if ( v3 != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 920) & 0xFFF) + 2] == v3 >> 12
    && (v4 = off_1061BE18[4 * (*(_DWORD *)(this + 920) & 0xFFF) + 1]) != 0 )
  {
    v7 = *(float *)(this + 108);
    *(_DWORD *)(this + 4) = sub_10168420;
    return sub_10246AC0(v4 + 716, v7);
  }
  else
  {
    sub_100DD660(this, &flt_106F1CA8);
    result = sub_100D8290((float *)this, -1.0);
    v6 = (_BYTE *)(this + 225);
    if ( *v6 )
    {
      result = (*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)(v6 - 225) + 480))(v6 - 225, v6);
      *v6 = 0;
    }
  }
  return result;
}
