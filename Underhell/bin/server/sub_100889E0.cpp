void __thiscall sub_100889E0(void *this, int *a2, int a3)
{
  int v3; // eax
  int savedregs; // [esp+20h] [ebp+0h] BYREF

  v3 = *(_DWORD *)(a3 + 60);
  if ( v3 != 3 )
  {
    if ( v3 == 4 )
    {
      sub_10088700((int)this, (int)&savedregs, a2, (float *)a3);
    }
    else if ( v3 == 2 )
    {
      sub_10086E40((int)&savedregs, (int)a2, a3);
      if ( *(float *)(a3 + 20) < -100.0 )
      {
        DevWarning(
          "ERROR: Node %.0f %.0f %.0f, WC ID# %i, is either too low (fell through floor) or too high (>100 units above floor)\n",
          *(float *)(a3 + 4),
          *(float *)(a3 + 8),
          *(float *)(a3 + 12),
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_10693628 + 804) + 12) + 4 * *(_DWORD *)a3));
        *(_DWORD *)(a3 + 64) |= 0x80000000;
      }
    }
    else if ( v3 != 1 )
    {
      DevMsg("Bad node type!\n");
    }
  }
}
