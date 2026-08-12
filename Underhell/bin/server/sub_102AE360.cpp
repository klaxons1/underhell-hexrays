void __thiscall sub_102AE360(float *this, int a2)
{
  int v3; // eax
  int v4; // edi
  int *v5; // ecx

  sub_10185A80(a2);
  if ( 0.0 != this[243] )
  {
    v3 = *(_DWORD *)(a2 + 248);
    v4 = v3 | 0x40000;
    if ( v3 != (v3 | 0x40000) )
    {
      if ( *(_BYTE *)(a2 + 84) )
      {
        *(_BYTE *)(a2 + 88) |= 1u;
      }
      else
      {
        v5 = *(int **)(a2 + 24);
        if ( v5 )
          sub_100194B0(v5, 248);
      }
      *(_DWORD *)(a2 + 248) = v4;
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 100))(a2);
  }
}
