void __thiscall sub_10315CE0(_BYTE *this, _DWORD *a2, int a3, int a4)
{
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx

  if ( (a2[16] & 0x2000000) != 0
    || ((v5 = a2[10], v5 == -1) || off_1061BE18[4 * (a2[10] & 0xFFF) + 2] != v5 >> 12
      ? (v6 = 0)
      : (v6 = off_1061BE18[4 * (a2[10] & 0xFFF) + 1]),
        (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 220))(v6) == 21
     || ((v7 = a2[11], v7 == -1) || off_1061BE18[4 * (a2[11] & 0xFFF) + 2] != v7 >> 12
       ? (v8 = 0)
       : (v8 = off_1061BE18[4 * (a2[11] & 0xFFF) + 1]),
         (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 220))(v8) == 21)) )
  {
    sub_100360A0(this, (int)a2, a3, a4);
  }
}
