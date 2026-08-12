char __thiscall sub_104282B0(int this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // ecx
  void *v6; // eax

  LOBYTE(v2) = *(_BYTE *)(this + 846);
  if ( (v2 & 1) == 0 )
  {
    *(_BYTE *)(this + 846) = v2 | 1;
    sub_10433610(this + 56, "Other textures", 1);
    v2 = *(_DWORD *)(this + 700);
    if ( v2 > 0 )
    {
      v3 = 0;
      v4 = *(_DWORD *)(this + 700);
      do
      {
        v5 = *(_DWORD *)(this + 688);
        if ( *(_BYTE *)(v3 + v5 + 32) )
        {
          v6 = (void *)sub_10430F10(v3 + v5 + 16);
          v2 = sub_104281D0(*((int **)off_10689BA4 + 35), v6);
        }
        else
        {
          v2 = sub_104276E0(*((_DWORD **)off_10689BA4 + 35), v3 + v5);
        }
        if ( v2 )
          LOBYTE(v2) = sub_104282B0(v2);
        v3 += 40;
        --v4;
      }
      while ( v4 );
    }
  }
  return v2;
}
