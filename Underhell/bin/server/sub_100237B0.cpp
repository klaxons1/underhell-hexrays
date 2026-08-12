char __thiscall sub_100237B0(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  int v6; // edi
  _BYTE v8[44]; // [esp+Ch] [ebp-54h] BYREF
  float v9; // [esp+38h] [ebp-28h]

  v3 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  if ( v3 != -1 && (v4 = &dword_1069E3E4[4 * (v3 & 0xFFF)], v4[1] == v3 >> 12) && (v5 = *v4) != 0 )
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5);
  else
    v6 = 0;
  if ( !*(_BYTE *)(v6 + 361) || (*(_BYTE *)(v6 + 356) & 4) != 0 )
  {
    (*(void (__thiscall **)(int, _DWORD, _DWORD, int, _BYTE *))(*(_DWORD *)dword_106B31F4 + 8))(
      dword_106B31F4,
      this[5],
      this[4],
      a2,
      v8);
    if ( v9 < 1.0 )
    {
      sub_100E8760(this + 6, this + 1, v8);
      sub_10248230();
    }
  }
  return 1;
}
