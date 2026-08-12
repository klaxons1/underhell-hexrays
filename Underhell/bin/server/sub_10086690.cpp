int __usercall sub_10086690@<eax>(int a1@<ecx>, const char *a2@<esi>)
{
  int v3; // ebx
  int v4; // eax
  int i; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax

  v3 = sub_10073900(a2);
  *(_DWORD *)(*(_DWORD *)(v3 + 2588) + 32) = dword_106935D8;
  *(_DWORD *)(v3 + 1676) = dword_10693634;
  sub_10027A90(v3, 0);
  v4 = *(_DWORD *)(a1 + 20);
  for ( i = 0; i < *(_DWORD *)(v4 + 4); ++i )
  {
    if ( i < 0 || i >= *(_DWORD *)(v4 + 4) )
    {
      ++dword_10691DE0;
      v6 = 0;
    }
    else
    {
      v6 = *(_DWORD *)(*(_DWORD *)(v4 + 8) + 4 * i);
    }
    if ( ((32 * (1 << dword_10693634)) & *(_DWORD *)(v6 + 64)) != 0 || sub_10080610(*(_DWORD **)(v3 + 2588), i, 147467) )
    {
      v9 = *(_DWORD *)(a1 + 20);
      if ( i < 0 || i >= *(_DWORD *)(v9 + 4) )
      {
        ++dword_10691DE0;
        v10 = 0;
      }
      else
      {
        v10 = *(_DWORD *)(*(_DWORD *)(v9 + 8) + 4 * i);
      }
      *(_DWORD *)(v10 + 64) &= ~0x40000000u;
    }
    else
    {
      v7 = *(_DWORD *)(a1 + 20);
      if ( i < 0 || i >= *(_DWORD *)(v7 + 4) )
      {
        ++dword_10691DE0;
        MEMORY[0x40] |= 0x40000000u;
      }
      else
      {
        v8 = *(_DWORD *)(*(_DWORD *)(v7 + 8) + 4 * i);
        *(_DWORD *)(v8 + 64) |= 0x40000000u;
      }
    }
    v4 = *(_DWORD *)(a1 + 20);
  }
  return sub_100739B0();
}
