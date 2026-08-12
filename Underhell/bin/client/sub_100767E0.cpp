void __cdecl sub_100767E0(int a1, int a2, int a3)
{
  int v3; // ecx
  __int16 v4; // bx

  v3 = *(_DWORD *)(a1 + 76);
  if ( v3 )
  {
    v4 = *(_WORD *)(a1 + 66);
    if ( (v4 & 4) == 0 && 1.0 != *(float *)(a1 + 44) && (v4 & 0x80u) == 0 )
      (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v3 + 456))(v3, a1, a2, a3);
  }
}
