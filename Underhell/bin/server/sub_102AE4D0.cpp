void __thiscall sub_102AE4D0(float *this, int a2)
{
  int v2; // eax
  int v3; // edi
  int *v4; // ecx

  if ( this[243] > 0.0
    && ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         0.0,
         1.0) < this[243] )
  {
    v2 = *(_DWORD *)(a2 + 248);
    v3 = v2 | 0x40000;
    if ( v2 != (v2 | 0x40000) )
    {
      if ( *(_BYTE *)(a2 + 84) )
      {
        *(_BYTE *)(a2 + 88) |= 1u;
        *(_DWORD *)(a2 + 248) = v3;
      }
      else
      {
        v4 = *(int **)(a2 + 24);
        if ( v4 )
          sub_100194B0(v4, 248);
        *(_DWORD *)(a2 + 248) = v3;
      }
    }
  }
}
