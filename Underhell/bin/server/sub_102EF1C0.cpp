void __thiscall sub_102EF1C0(int this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // edi
  bool v5; // zf
  int v6; // ebx
  int *v7; // eax
  int v8; // eax
  float v9; // eax
  float v10; // ecx
  char v11; // bl
  char v12; // al
  _BYTE v13[160]; // [esp+10h] [ebp-D0h] BYREF
  _BYTE v14[32]; // [esp+B0h] [ebp-30h] BYREF
  float v15[3]; // [esp+D0h] [ebp-10h] BYREF
  int v16; // [esp+DCh] [ebp-4h]

  if ( dword_10668F04 == -1 || off_1061BE18[4 * (dword_10668F04 & 0xFFF) + 2] != (unsigned int)dword_10668F04 >> 12 )
    v3 = 0;
  else
    v3 = off_1061BE18[4 * (dword_10668F04 & 0xFFF) + 1];
  if ( v3 != this )
  {
    v4 = *(_DWORD *)(dword_106E242C + 48);
    if ( v4 )
      Msg("Spawning item_dynamic_resupply:\n");
    sub_102EEA50((void *)this, 2, off_10668E28, v4, (int)v14);
    sub_102EEA50((void *)this, 10, off_10668E48, v4, (int)v13);
    v5 = (*(_BYTE *)(this + 248) & 1) == 0;
    v6 = this;
    v16 = this;
    if ( !v5 && dword_10668F04 != -1 )
    {
      v7 = &off_1061BE18[4 * (dword_10668F04 & 0xFFF) + 1];
      if ( off_1061BE18[4 * (dword_10668F04 & 0xFFF) + 2] == (unsigned int)dword_10668F04 >> 12 )
      {
        if ( *v7 )
        {
          if ( off_1061BE18[4 * (dword_10668F04 & 0xFFF) + 2] == (unsigned int)dword_10668F04 >> 12 )
            v8 = *v7;
          else
            v8 = 0;
          v16 = v8;
          v6 = v8;
        }
      }
    }
    sub_102EEBC0(v6, (int)a2, v4, (int)v14);
    sub_102EE5E0(v6, a2, v4, (int)v13);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v9 = *(float *)(this + 584);
    v10 = *(float *)(this + 588);
    v15[0] = *(float *)(this + 580);
    v15[1] = v9;
    v15[2] = v10;
    v11 = sub_102EED10(this, 2, (int)off_10668E28, v4, (int)v14, v15);
    v12 = sub_102EED10(this, 10, (int)off_10668E48, v4, (int)v13, v15);
    if ( !v11 && !v12 )
      sub_102EE730(this, v16, a2, v4);
    sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
    sub_1025FAC0(this);
  }
}
