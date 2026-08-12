char __stdcall sub_101C15F0(int a1, int a2)
{
  int v2; // ecx

  if ( *(_BYTE *)(a1 + 306) == 6
    && (v2 = *(_DWORD *)(a1 + 424)) != 0
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 40))(v2) )
  {
    return 0;
  }
  else
  {
    return sub_10265590(a1, a2);
  }
}
