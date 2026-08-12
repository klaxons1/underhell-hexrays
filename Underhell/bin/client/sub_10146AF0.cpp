int __thiscall sub_10146AF0(_DWORD *this)
{
  int v2; // ebx
  int v3; // edi
  int v4; // eax
  float v6; // [esp+58h] [ebp-2Ch]
  float v7; // [esp+58h] [ebp-2Ch]
  float v8; // [esp+5Ch] [ebp-28h]
  float v9; // [esp+5Ch] [ebp-28h]
  int v10; // [esp+60h] [ebp-24h]
  int v11; // [esp+64h] [ebp-20h]
  int v12; // [esp+64h] [ebp-20h]
  float v13; // [esp+70h] [ebp-14h]

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
  v11 = this[5];
  v10 = this[4];
  v8 = (float)(v11 - 1);
  v6 = (float)(v10 - 1);
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, int, int, _DWORD, int, int))(*(_DWORD *)v2 + 412))(
    v2,
    this[39],
    this[2],
    this[3],
    v10,
    v11,
    0.0,
    0.0,
    LODWORD(v6),
    LODWORD(v8),
    v10,
    v11,
    0,
    1,
    1);
  if ( *((float *)off_103DC81C + 3) <= (double)flt_1043BD10
    && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 316))(dword_1041315C) )
  {
    v3 = this[40];
    v4 = (int)((flt_1043BD10 - *((float *)off_103DC81C + 3)) * 340.0);
    if ( v4 >= 255 )
      v4 = 255;
    v13 = (double)(v4 < 0 ? 0 : v4) * 0.0039215689;
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 108))(v3, LODWORD(v13));
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v3 + 112))(v3, 1.0, 1.0, 1.0);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v3 + 116))(v3, 0x8000, 1);
    v12 = this[5];
    v9 = (float)(v12 - 1);
    v7 = (float)(this[4] - 1);
    (*(void (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, int, int))(*(_DWORD *)v2 + 412))(
      v2,
      v3,
      this[2],
      this[3],
      this[4],
      v12,
      0.0,
      0.0,
      LODWORD(v7),
      LODWORD(v9),
      this[4],
      v12,
      0,
      1,
      1);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
}
