int __thiscall sub_104072B0(int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  _BYTE *v6; // esi
  int *v7; // ecx

  v2 = *(_DWORD *)(this + 2108);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        v5 = v3[1] == v4 ? *v3 : 0;
        v6 = (_BYTE *)(v5 + 868);
        if ( *(_BYTE *)(v5 + 868) != 1 )
        {
          if ( *(_BYTE *)(v5 + 84) )
          {
            *(_BYTE *)(v5 + 88) |= 1u;
          }
          else
          {
            v7 = *(int **)(v5 + 24);
            if ( v7 )
              sub_100194B0(v7, 868);
          }
          *v6 = 1;
        }
      }
    }
  }
  *(float *)(this + 2112) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                              dword_106B31E4,
                              1.0,
                              2.0)
                          + *(float *)(dword_106B31C8 + 12);
  sub_100EC3F0((_DWORD *)this, (int)sub_10406F50, 0.0, 0);
  return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
}
