void __thiscall sub_103D7DD0(int this, int a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // ecx

  *(_BYTE *)(this + 1120) = 0;
  sub_1023C380((_DWORD *)this, (int)"coast.thumper_shutdown", 0.0, 0);
  v3 = *(_DWORD *)(this + 1132);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 1132) & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 1132) & 0xFFF) + 2] == v5 )
    {
      if ( *v4 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 1132) & 0xFFF) + 2] == v5 )
          v6 = *v4;
        else
          v6 = 0;
        (*(void (__thiscall **)(int, const char *, int, int, _DWORD))(*(_DWORD *)v6 + 148))(
          v6,
          "Disable",
          this,
          this,
          0);
      }
    }
  }
}
