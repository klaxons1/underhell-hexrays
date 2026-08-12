void __thiscall sub_100A9710(int this)
{
  int v2; // ecx

  v2 = *(_DWORD *)(this + 4);
  if ( v2 && !*(_DWORD *)(v2 + 3440) && !*(_BYTE *)(this + 904) && (*(_BYTE *)(v2 + 732) & 2) != 0 )
  {
    if ( sub_100F7AF0(v2) )
    {
      *(float *)(*(_DWORD *)(this + 8) + 44) = *(float *)(*(_DWORD *)(this + 8) + 44) * 0.5;
      *(float *)(*(_DWORD *)(this + 8) + 48) = *(float *)(*(_DWORD *)(this + 8) + 48) * 0.5;
      *(float *)(*(_DWORD *)(this + 8) + 52) = 0.5 * *(float *)(*(_DWORD *)(this + 8) + 52);
      *(_BYTE *)(this + 904) = 1;
    }
  }
}
