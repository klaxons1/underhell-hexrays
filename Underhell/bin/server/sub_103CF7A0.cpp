void __thiscall sub_103CF7A0(_DWORD *this, float a2, float a3, float a4)
{
  unsigned int v5; // ecx
  int *v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // esi
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // ecx
  void (__thiscall *v21)(int, float *); // edx
  int v22[3]; // [esp+4h] [ebp-24h] BYREF
  int v23[3]; // [esp+10h] [ebp-18h] BYREF
  float v24[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v5 = this[965];
  if ( v5 != -1 )
  {
    v6 = &off_1061BE18[4 * (v5 & 0xFFF) + 1];
    v7 = v5 >> 12;
    if ( v6[1] == v7 )
    {
      if ( *v6 )
      {
        if ( v6[1] == v7 )
          v8 = *v6;
        else
          v8 = 0;
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v8 + 140))(v8, 0, -1);
        v9 = this[965];
        if ( v9 == -1 || off_1061BE18[4 * (this[965] & 0xFFF) + 2] != v9 >> 12 )
          v10 = 0;
        else
          v10 = off_1061BE18[4 * (this[965] & 0xFFF) + 1];
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 76))(v10, 0);
        sub_100BEFA0(this, "grenade_attachment", (int)v22, (int)v23);
        v11 = this[965];
        if ( v11 == -1 || off_1061BE18[4 * (this[965] & 0xFFF) + 2] != this[965] >> 12 )
          v12 = 0;
        else
          v12 = off_1061BE18[4 * (this[965] & 0xFFF) + 1];
        v13 = *(_DWORD *)(v12 + 424);
        if ( v13 )
        {
          (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v13 + 96))(*(_DWORD *)(v12 + 424));
          (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)v13 + 180))(v13, v22, v23, 1);
          v21 = *(void (__thiscall **)(int, float *))(*(_DWORD *)v13 + 236);
          v24[0] = a2 * 0.2;
          v24[1] = a3 * 0.2;
          v24[2] = 0.2 * a4;
          v21(v13, v24);
          (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 104))(v13);
          this[965] = -1;
        }
        else
        {
          if ( v11 == -1 || off_1061BE18[4 * (this[965] & 0xFFF) + 2] != v11 >> 12 )
            v14 = 0;
          else
            v14 = off_1061BE18[4 * (this[965] & 0xFFF) + 1];
          sub_100E0970(v14, (int)off_1061BE18, 6, 0);
          v15 = this[965];
          if ( v15 == -1 || off_1061BE18[4 * (this[965] & 0xFFF) + 2] != v15 >> 12 )
            v16 = 0;
          else
            v16 = off_1061BE18[4 * (this[965] & 0xFFF) + 1];
          sub_10112C00(v16 + 320, 6);
          v17 = this[965];
          if ( v17 == -1 || off_1061BE18[4 * (this[965] & 0xFFF) + 2] != v17 >> 12 )
            v18 = 0;
          else
            v18 = off_1061BE18[4 * (this[965] & 0xFFF) + 1];
          sub_100EBE30(v18, 11);
          v19 = this[965];
          if ( v19 == -1 || off_1061BE18[4 * (this[965] & 0xFFF) + 2] != v19 >> 12 )
          {
            (*(void (**)(void))(MEMORY[0] + 584))();
            this[965] = -1;
          }
          else
          {
            v20 = off_1061BE18[4 * (this[965] & 0xFFF) + 1];
            (*(void (__thiscall **)(int))(*(_DWORD *)v20 + 584))(v20);
            this[965] = -1;
          }
        }
      }
    }
  }
}
