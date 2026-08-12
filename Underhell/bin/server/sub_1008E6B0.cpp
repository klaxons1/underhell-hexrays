int __thiscall sub_1008E6B0(_DWORD *this, float *a2, int a3, int a4, float a5)
{
  int v7; // eax
  int v9; // esi
  double v10; // st6
  double v11; // st5
  void *v12; // eax
  float v13; // [esp+38h] [ebp-Ch] BYREF
  float v14; // [esp+3Ch] [ebp-8h]
  float v15; // [esp+40h] [ebp-4h]
  int v16; // [esp+4Ch] [ebp+8h]
  int v17; // [esp+50h] [ebp+Ch]

  v17 = sub_1008E550(a2, this[1]) | 0x100 | a3;
  v7 = this[5];
  if ( a4 < 0 || a4 >= *(_DWORD *)(v7 + 4) )
  {
    ++dword_10691DE0;
    v16 = 0;
  }
  else
  {
    v16 = *(_DWORD *)(*(_DWORD *)(v7 + 8) + 4 * a4);
  }
  sub_1008D160(v16, &v13, *(_DWORD *)(this[1] + 1676));
  if ( *a2 == v13 && a2[1] == v14 && a2[2] == v15 )
    return sub_1008D6A0(this, *(_DWORD *)(this[1] + 1676), a4, 8);
  v9 = (*(int (__thiscall **)(_DWORD *, float *, float *, _DWORD, int, int, int, _DWORD))(*this + 20))(
         this,
         &v13,
         a2,
         0,
         8,
         -1,
         v17,
         LODWORD(a5));
  if ( !v9 && *(_DWORD *)(v16 + 60) == 4 )
  {
    v10 = a2[1] - v14;
    v11 = *a2 - v13;
    if ( v11 * v11 + v10 * v10 < 1024.0 && sub_1007A470(*(_DWORD *)(this[1] + 2600), &v13, 147467) )
    {
      v12 = (void *)sub_1042FCC0(48);
      if ( v12 )
        return sub_100B9A20(v12, (int)a2, 0.0, 0, 8, a4);
      return 0;
    }
  }
  return v9;
}
