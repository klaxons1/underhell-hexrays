void __thiscall sub_1015A680(int this)
{
  int v2; // ecx

  v2 = *(_DWORD *)(this + 4);
  if ( v2
    && (*(_DWORD *)(v2 + 2180) == -1
     || off_1061BE18[4 * (*(_DWORD *)(v2 + 2180) & 0xFFF) + 2] != *(_DWORD *)(v2 + 2180) >> 12
     || !off_1061BE18[4 * (*(_DWORD *)(v2 + 2180) & 0xFFF) + 1])
    && !*(_BYTE *)(this + 904)
    && (*(_BYTE *)(v2 + 256) & 2) != 0 )
  {
    if ( sub_101C5260(v2) )
    {
      *(float *)(*(_DWORD *)(this + 8) + 44) = *(float *)(*(_DWORD *)(this + 8) + 44) * 0.5;
      *(float *)(*(_DWORD *)(this + 8) + 48) = *(float *)(*(_DWORD *)(this + 8) + 48) * 0.5;
      *(float *)(*(_DWORD *)(this + 8) + 52) = 0.5 * *(float *)(*(_DWORD *)(this + 8) + 52);
      *(_BYTE *)(this + 904) = 1;
    }
  }
}
