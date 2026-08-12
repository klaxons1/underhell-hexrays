char __thiscall sub_103C7890(int this, int a2)
{
  int v3; // eax

  if ( *(_BYTE *)(this + 2840) )
    return 0;
  v3 = *(_DWORD *)(this + 2372);
  if ( v3 == 17 || v3 == dword_106EBEAC || sub_100C4E90((_DWORD *)this, 137) || *(_DWORD *)(this + 5732) )
    return 0;
  else
    return sub_10396DF0((_DWORD *)this, a2);
}
