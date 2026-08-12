void __thiscall sub_100F9D30(float *this, int a2)
{
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  float v7; // [esp+0h] [ebp-74h]
  int v8[20]; // [esp+18h] [ebp-5Ch] BYREF
  int v9[3]; // [esp+68h] [ebp-Ch] BYREF
  _DWORD *v10; // [esp+7Ch] [ebp+8h]

  sub_100F9B80((int)this);
  if ( 1.0 != *(float *)(a2 + 44) )
  {
    v10 = *(_DWORD **)(a2 + 76);
    if ( v10 )
    {
      sub_10247FD0();
      if ( ((_DWORD)this[63] & 0x800) != 0 )
        sub_100DAE60((int)this);
      *(float *)v9 = *(float *)(a2 + 12) - this[145];
      *(float *)&v9[1] = *(float *)(a2 + 16) - this[146];
      *(float *)&v9[2] = *(float *)(a2 + 20) - this[147];
      off_10689714();
      v4 = *((_DWORD *)this + 241);
      v5 = 1024;
      if ( v4 )
      {
        if ( v4 > 0 )
          v5 = 67109120;
      }
      else
      {
        v5 = 0x4000000;
      }
      v7 = (*(float *)(dword_106B31C8 + 12) - this[202]) * this[203];
      sub_10248110((int)this, (int)this, v7, v5, 0);
      sub_10248690((int)v8, (int)v9, a2 + 12, 1.0);
      sub_100E8760(v10, (int)v8, (int)v9, a2);
      sub_10248230();
      if ( ((_DWORD)this[62] & 0x40) != 0 && sub_100E8AC0(v10) )
      {
        v6 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 720))(this);
        sub_10264E40(a2, v6);
      }
    }
  }
  this[202] = *(float *)(dword_106B31C8 + 12);
}
