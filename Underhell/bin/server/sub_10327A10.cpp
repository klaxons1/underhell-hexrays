void __thiscall sub_10327A10(_DWORD *this, int a2)
{
  if ( *(_DWORD *)a2 == 2050 )
  {
    sub_1023C380(this, (int)"NPC_Barney.FootstepLeft", *(float *)(a2 + 12), 0);
  }
  else if ( *(_DWORD *)a2 == 2051 )
  {
    sub_1023C380(this, (int)"NPC_Barney.FootstepRight", *(float *)(a2 + 12), 0);
  }
  else
  {
    sub_10399420(a2);
  }
}
