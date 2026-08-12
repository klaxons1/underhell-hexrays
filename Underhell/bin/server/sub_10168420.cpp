int __thiscall sub_10168420(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  _DWORD *v4; // edi
  int result; // eax
  _BYTE *v6; // esi
  double v7; // st7
  float v8; // [esp+24h] [ebp-20h]

  v2 = *(_DWORD *)(this + 920);
  if ( v2 != -1
    && (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 920) & 0xFFF) + 1], v3[1] == v2 >> 12)
    && (v4 = (_DWORD *)*v3) != 0 )
  {
    (*(void (__thiscall **)(_DWORD *, const char *, int, int, _DWORD))(*v4 + 148))(v4, "InPass", this, this, 0);
    v7 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v4 + 292))(v4);
    *(float *)(this + 808) = v7;
    *(_DWORD *)(this + 212) = v4[53];
    *(_DWORD *)(this + 4) = sub_10168560;
    if ( 0.0 == v7 )
    {
      return sub_10168560(this);
    }
    else
    {
      v8 = v7;
      return sub_100D8290((float *)this, v8);
    }
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
