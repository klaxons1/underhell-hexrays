unsigned int __thiscall sub_10108B20(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // eax
  unsigned int result; // eax
  int v6; // ecx

  *(_DWORD *)(a2 + 164) = *(_DWORD *)(a4 + 4);
  *(float *)(a2 + 232) = *(float *)(a4 + 64);
  *(float *)(a2 + 236) = *(float *)(a4 + 68);
  *(float *)(a2 + 240) = *(float *)(a4 + 72);
  *(float *)(a2 + 708) = *(float *)(a4 + 152);
  *(float *)(a2 + 712) = *(float *)(a4 + 156);
  *(float *)(a2 + 716) = *(float *)(a4 + 160);
  *(_DWORD *)(a2 + 3552) = *(_DWORD *)(a4 + 36);
  *(float *)(a2 + 4144) = *(float *)(a4 + 60);
  v4 = sub_100F7AF0((_DWORD *)a2);
  if ( v4 )
    this[1] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
  else
    this[1] = -1;
  sub_10034A30((float *)a2, (float *)(a4 + 152));
  result = *(_DWORD *)(a2 + 4128);
  if ( result != -1 )
  {
    result >>= 12;
    if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a2 + 4128) & 0xFFF) + 2) == result )
    {
      v6 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a2 + 4128) & 0xFFF) + 1);
      if ( v6 )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 332))(v6);
        if ( result )
          return (*(int (__thiscall **)(unsigned int, int, int, int))(*(_DWORD *)result + 24))(result, a2, a3, a4);
      }
    }
  }
  return result;
}
