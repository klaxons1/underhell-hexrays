void __thiscall sub_102EADA0(int this, int a2, int a3, int a4, int a5)
{
  char v6; // dl
  int v7; // eax

  sub_101F8D60(a2, a3, a4, a5);
  *(float *)(a2 + 4188) = *(float *)(a3 + 24);
  v6 = *(_BYTE *)(a2 + 5216);
  *(float *)(a2 + 4192) = *(float *)(a3 + 28);
  *(_BYTE *)(a5 + 164) = v6;
  if ( 0.0 != *(float *)(dword_106B31C8 + 16) )
  {
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1092))(a2);
    if ( v7 )
    {
      (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v7 + 16))(v7, a2, a3, a4, a5);
      if ( !*(_BYTE *)(this + 16) )
      {
        *(_BYTE *)(this + 16) = 1;
        *(float *)(this + 4) = 0.0;
        *(float *)(this + 8) = 0.0;
        *(float *)(this + 12) = 0.0;
      }
    }
    else
    {
      if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
        sub_100DAE60(a2);
      *(float *)(this + 4) = *(float *)(a2 + 580);
      *(float *)(this + 8) = *(float *)(a2 + 584);
      *(float *)(this + 12) = *(float *)(a2 + 588);
      if ( *(_BYTE *)(this + 16) )
        *(_BYTE *)(this + 16) = 0;
    }
  }
}
