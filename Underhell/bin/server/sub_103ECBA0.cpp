void __thiscall sub_103ECBA0(unsigned int *this, int a2)
{
  unsigned int v3; // eax
  int v4; // ecx

  if ( a2 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
  {
    sub_103EC430((int)(this - 371));
    sub_10267C40(this, a2);
    v3 = this[39];
    if ( v3 == -1 || off_1061BE18[4 * (this[39] & 0xFFF) + 2] != v3 >> 12 )
      v4 = 0;
    else
      v4 = off_1061BE18[4 * (this[39] & 0xFFF) + 1];
    if ( v4 )
      this[113] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
    else
      this[113] = -1;
    sub_100EC3F0(this - 371, 0, 0.0, off_10682B0C);
  }
}
