char __thiscall sub_102FE5C0(_DWORD *this, float *a2, float a3, int a4, char a5)
{
  _DWORD *v6; // edi
  unsigned int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // ecx
  char v13; // bl
  int v14; // edi
  _DWORD *v15; // edi
  unsigned int v16; // eax
  int v17; // eax
  int v18[19]; // [esp+10h] [ebp-E0h] BYREF
  int v19[19]; // [esp+5Ch] [ebp-94h] BYREF
  float v20[3]; // [esp+A8h] [ebp-48h] BYREF
  _DWORD v21[12]; // [esp+B4h] [ebp-3Ch] BYREF
  float v22[3]; // [esp+E4h] [ebp-Ch] BYREF

  if ( a4 )
  {
    this[921] = 1;
    sub_10072560(v18);
    sub_10070FE0(v18, 400);
    sub_1042C170(2);
    if ( (*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
    {
      v14 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
      if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
        sub_100DAE60(v14);
      sub_10072770(v18, (float *)(v14 + 580), a3);
    }
    v15 = (_DWORD *)sub_10072EE0((int)this, v18);
    this[921] = -1;
    if ( v15 )
    {
      v16 = this[722];
      if ( v16 != -1
        && off_1061BE18[4 * (this[722] & 0xFFF) + 2] == v16 >> 12
        && off_1061BE18[4 * (this[722] & 0xFFF) + 1] )
      {
        v17 = sub_1002A5B0(this);
        sub_10070510(v17, 0.0);
      }
      sub_100448D0(this, (int)v15);
      sub_10070B10(v15, (int)this);
      sub_10070340((int)v15, (int)this, v20);
      sub_1025F370(this, v20, 0);
      sub_100725D0(v18);
      return 1;
    }
    else
    {
      sub_100725D0(v18);
      return 0;
    }
  }
  else
  {
    sub_10072560(v19);
    sub_10070FE0(v19, 400);
    sub_1042C170(2);
    sub_10072770(v19, a2, a3);
    if ( a5 )
      sub_10072790(v19, a2, 128.0);
    v6 = (_DWORD *)sub_10072EE0((int)this, v19);
    if ( v6 )
    {
      v8 = this[722];
      if ( v8 != -1
        && off_1061BE18[4 * (this[722] & 0xFFF) + 2] == v8 >> 12
        && off_1061BE18[4 * (this[722] & 0xFFF) + 1] )
      {
        v9 = sub_1002A5B0(this);
        sub_10070510(v9, 0.0);
      }
      sub_100448D0(this, (int)v6);
      sub_10070B10(v6, (int)this);
      v10 = this[722];
      if ( v10 == -1 || off_1061BE18[4 * (this[722] & 0xFFF) + 2] != v10 >> 12 )
        v11 = 0;
      else
        v11 = off_1061BE18[4 * (this[722] & 0xFFF) + 1];
      sub_10070340(v11, (int)this, v22);
      *(float *)&v21[8] = -1.0;
      *(float *)&v21[9] = -1.0;
      *(float *)&v21[1] = v22[0];
      v21[11] = dword_1066A988;
      v12 = this[647];
      *(float *)&v21[2] = v22[1];
      *(float *)&v21[3] = v22[2];
      v21[0] = 4;
      v21[4] = -1;
      v21[5] = 11;
      v21[6] = -1;
      v21[7] = -1;
      v21[10] = 0;
      v13 = (*(int (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v12 + 20))(v12, v21, 0);
      sub_100725D0(v19);
      return v13;
    }
    else
    {
      sub_100725D0(v19);
      return 0;
    }
  }
}
