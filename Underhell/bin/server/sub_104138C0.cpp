void __thiscall sub_104138C0(_DWORD *this, int a2)
{
  int v3; // ebx
  unsigned int v4; // eax
  int *v5; // esi
  int *v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // eax
  int v9; // esi
  int v10; // eax
  float *v11; // eax
  unsigned int v12; // eax
  int v13; // edx
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v16; // eax
  int v17; // esi
  unsigned int v18; // eax
  int v19; // ecx
  _BYTE v20[12]; // [esp+Ch] [ebp-Ch] BYREF
  int *v21; // [esp+20h] [ebp+8h]

  v3 = 0;
  if ( a2 )
    this[444] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    this[444] = -1;
  sub_10412F60((int)this);
  v4 = this[444];
  v5 = off_1061BE18;
  if ( v4 != -1 )
  {
    v6 = &off_1061BE18[4 * (this[444] & 0xFFF) + 1];
    v7 = v4 >> 12;
    if ( off_1061BE18[4 * (this[444] & 0xFFF) + 2] == v7 )
    {
      if ( *v6 )
      {
        if ( off_1061BE18[4 * (this[444] & 0xFFF) + 2] == v7 )
          v21 = (int *)*v6;
        else
          v21 = 0;
        v8 = this[443];
        if ( v8 != -1 && off_1061BE18[4 * (this[443] & 0xFFF) + 2] == v8 >> 12 )
          v3 = off_1061BE18[4 * (this[443] & 0xFFF) + 1];
        v9 = *v21;
        v10 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 576))(this, 0);
        v11 = (float *)(*(int (__thiscall **)(int *, _BYTE *, int))(v9 + 520))(v21, v20, v10);
        sub_100E0D20(v3, v11);
        v5 = off_1061BE18;
      }
    }
  }
  v12 = this[444];
  if ( v12 == -1 || v5[4 * (this[444] & 0xFFF) + 2] != v12 >> 12 )
    v13 = 0;
  else
    v13 = v5[4 * (this[444] & 0xFFF) + 1];
  v14 = this[443];
  if ( v14 == -1 || v5[4 * (this[443] & 0xFFF) + 2] != v14 >> 12 )
    v15 = 0;
  else
    v15 = v5[4 * (this[443] & 0xFFF) + 1];
  sub_104044B0(v15, v13);
  v16 = this[444];
  if ( v16 == -1 || off_1061BE18[4 * (this[444] & 0xFFF) + 2] != v16 >> 12 )
    v17 = 0;
  else
    v17 = off_1061BE18[4 * (this[444] & 0xFFF) + 1];
  v18 = this[443];
  if ( v18 == -1 || off_1061BE18[4 * (this[443] & 0xFFF) + 2] != v18 >> 12 )
    v19 = 0;
  else
    v19 = off_1061BE18[4 * (this[443] & 0xFFF) + 1];
  sub_104044E0(v19, v17 != 0);
}
