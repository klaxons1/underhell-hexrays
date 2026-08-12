int __thiscall sub_10103C50(float *this)
{
  float *v2; // esi
  int v3; // [esp+Ch] [ebp-8h]
  float v4; // [esp+10h] [ebp-4h]

  if ( this[491] < 0.0 )
    return (*(int (__stdcall **)(_DWORD))(*((_DWORD *)this - 3) + 408))(-1.0);
  if ( *((float *)off_103DC81C + 3) >= (double)this[491] )
    return (*(int (__thiscall **)(float *))(*((_DWORD *)this - 1) + 4))(this - 1);
  v2 = this - 3;
  v4 = this[491] - *((float *)off_103DC81C + 3);
  sub_10035090((_BYTE *)this - 12, 2, 0);
  LOWORD(v3) = *((_DWORD *)v2 + 22);
  BYTE2(v3) = BYTE2(*((_DWORD *)v2 + 22));
  HIBYTE(v3) = (int)(v4 * 256.0);
  if ( *((_DWORD *)v2 + 22) != v3 )
    *((_DWORD *)v2 + 22) = v3;
  return (*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)v2 + 408))(v2, -1293.0);
}
