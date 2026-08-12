void __thiscall sub_100314B0(float *this, int a2, int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  int v9; // eax

  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 2160))(this);
  v4 = sub_1007DB30(32);
  if ( v4 == -1 || (v5 = v4 - 1000000000, v5 == -1) || ((1 << (v5 & 0x1F)) & LODWORD(this[(v5 >> 5) + 548])) == 0 )
  {
    if ( *(float *)(dword_106B31C8 + 12) - this[529] > 5.0 )
    {
      (*(void (__thiscall **)(float *))(*(_DWORD *)this + 2160))(this);
      v6 = sub_1007DB30(72);
      if ( v6 != -1 && v6 != 999999999 )
        LODWORD(this[((v6 - 1000000000) >> 5) + 548]) |= 1 << (v6 & 0x1F);
      this[529] = *(float *)(dword_106B31C8 + 12);
      if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
        sub_100DAE60(a2);
      sub_1023D4B0(4, a2 + 580, 512, 1.0, a2, 2, 0);
    }
  }
  if ( *((_DWORD *)this + 629) == 1 )
  {
    v7 = *((_DWORD *)this + 672);
    if ( v7 != -1
      && off_1061BE18[4 * ((_DWORD)this[672] & 0xFFF) + 2] == v7 >> 12
      && off_1061BE18[4 * ((_DWORD)this[672] & 0xFFF) + 1]
      && (*(_BYTE *)(164 * *((_DWORD *)this + 630) + *((_DWORD *)this + 631) + 12) & 4) != 0
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 508))(dword_106B3CDC) )
    {
      v8 = *((_DWORD *)this + 672);
      if ( v8 == -1 || off_1061BE18[4 * ((_DWORD)this[672] & 0xFFF) + 2] != v8 >> 12 )
        v9 = 0;
      else
        v9 = off_1061BE18[4 * ((_DWORD)this[672] & 0xFFF) + 1];
      if ( *(_BYTE *)(v9 + 877) )
      {
        if ( !*(_BYTE *)(v9 + 832) )
        {
          sub_1026A890(this + 672);
          sub_1022FD80(1);
        }
      }
    }
  }
}
