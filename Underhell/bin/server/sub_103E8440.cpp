void __thiscall sub_103E8440(_BYTE *this, int a2, int a3, int a4, int a5)
{
  int v6; // ecx

  if ( !this[461] && !this[462] )
  {
    v6 = *(_DWORD *)(a3 + 36);
    if ( (v6 & 0x600) == 0 )
    {
      if ( *(float *)(a3 + 28) >= 0.0 )
      {
        if ( *(float *)(a3 + 28) > 0.0 )
          LOWORD(v6) = v6 | 0x400;
      }
      else
      {
        LOWORD(v6) = v6 | 0x200;
      }
    }
    sub_103E6B90((unsigned int)(this - 1120), v6, *(_DWORD *)(a2 + 3296), 0.0);
  }
  sub_103E7AF0((int)(this - 1120), *(float *)(dword_106B31C8 + 16));
}
