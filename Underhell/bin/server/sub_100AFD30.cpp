int __thiscall sub_100AFD30(_DWORD *this)
{
  _DWORD *v2; // ebx
  unsigned int v3; // eax
  int v4; // edi
  int v5; // eax
  float *v6; // ebx
  unsigned int v7; // eax
  int v8; // edi
  unsigned int v9; // eax
  int v10; // ecx
  _DWORD *v12; // [esp+Ch] [ebp-4h]

  v2 = this + 2;
  *this = &CAI_Expresser::`vftable';
  v12 = this + 2;
  sub_100AF7F0(this + 2);
  v3 = this[16];
  if ( v3 == -1 || off_1061BE18[4 * (this[16] & 0xFFF) + 2] != v3 >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (this[16] & 0xFFF) + 1];
  if ( sub_100D7680(v4) )
  {
    v5 = sub_100D7680(v4);
    v6 = &flt_1060B428;
    if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 1528))(v5, 0) )
      v6 = &flt_1060B430;
    v7 = *((_DWORD *)v6 + 1);
    if ( v7 == -1 || off_1061BE18[4 * ((_DWORD)v6[1] & 0xFFF) + 2] != v7 >> 12 )
      v8 = 0;
    else
      v8 = off_1061BE18[4 * ((_DWORD)v6[1] & 0xFFF) + 1];
    v9 = this[16];
    if ( v9 == -1 || off_1061BE18[4 * (this[16] & 0xFFF) + 2] != v9 >> 12 )
      v10 = 0;
    else
      v10 = off_1061BE18[4 * (this[16] & 0xFFF) + 1];
    if ( v8 == v10 )
    {
      *v6 = 0.0;
      v6[1] = NAN;
    }
    v2 = v12;
  }
  sub_100AF7F0(v2);
  return sub_100AF480(v2);
}
