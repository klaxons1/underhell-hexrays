int __thiscall sub_10039720(int this, float *a2, float *a3, float *a4, int *a5)
{
  unsigned int v6; // eax
  double v7; // st7
  float *v8; // eax
  double v9; // st7

  *a5 = 1;
  if ( (*(_BYTE *)(this + 112) & 1) != 0
    && !*(_BYTE *)(this + 316)
    && (v6 = *(_DWORD *)(this + 324), v6 != -1)
    && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 324) & 0xFFF) + 2) == v6 >> 12
    && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 324) & 0xFFF) + 1)
    || !byte_103D89C8 )
  {
    if ( *(_BYTE *)(this + 84) != 23 )
    {
      sub_10034A30((float *)this, (float *)(this + 708));
      sub_10034B10((float *)this, (float *)(this + 720));
    }
    return 0;
  }
  else
  {
    if ( (*(_BYTE *)(this + 323) || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 428))(this))
      && sub_100422D0()
      && *((float *)off_103DC81C + 3) == *a2 )
    {
      v7 = sub_100423F0();
      *a2 = v7;
      v8 = (float *)off_103DC81C;
      v9 = v7 - *((float *)off_103DC81C + 7);
      *a2 = v9;
      *a2 = v9 + *((float *)off_103DC81C + 8) * v8[7];
    }
    *a3 = *(float *)(this + 548);
    a3[1] = *(float *)(this + 552);
    a3[2] = *(float *)(this + 556);
    *a4 = *(float *)(this + 604);
    a4[1] = *(float *)(this + 608);
    a4[2] = *(float *)(this + 612);
    *a5 = sub_10037140((float *)(this + 20), *a2);
    if ( *(_DWORD *)(dword_10404C5C + 48) || (*(_BYTE *)(this + 86) & 4) != 0 )
      *a5 = 0;
    return 1;
  }
}
