unsigned int __thiscall sub_1006B490(int this, int a2)
{
  unsigned int v3; // eax
  int v4; // edi
  unsigned int result; // eax
  int v6; // ecx
  int v7; // ecx

  if ( *(_DWORD *)(this + 148) != *(_DWORD *)(a2 + 100)
    || ((v3 = *(_DWORD *)(this + 156), v3 == -1)
     || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 156) & 0xFFF) + 2) != v3 >> 12
      ? (v4 = 0)
      : (v4 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 156) & 0xFFF) + 1)),
        (result = *(_DWORD *)(a2 + 108), result == -1)
     || (result >>= 12, *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a2 + 108) & 0xFFF) + 2) != result)
      ? (v6 = 0)
      : (v6 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a2 + 108) & 0xFFF) + 1)),
        v4 != v6) )
  {
    sub_10069330((float *)(this + 52), (float *)(a2 + 4));
    *(_DWORD *)(this + 148) = *(_DWORD *)(a2 + 100);
    *(_DWORD *)(this + 152) = *(_DWORD *)(a2 + 104);
    if ( *(_DWORD *)(this + 156) != *(_DWORD *)(a2 + 108) )
    {
      (**(void (__thiscall ***)(int, int))(this + 48))(this + 48, this + 156);
      *(_DWORD *)(this + 156) = *(_DWORD *)(a2 + 108);
    }
    *(_DWORD *)(this + 208) = -1;
    result = *(_DWORD *)(a2 + 108);
    if ( result != -1 )
    {
      if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a2 + 108) & 0xFFF) + 2) == *(_DWORD *)(a2 + 108) >> 12
        && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a2 + 108) & 0xFFF) + 1)
        && (v7 = *(_DWORD *)(a2 + 100), v7 >= 0)
        && v7 < *(_DWORD *)(this + 40) )
      {
        sub_10069700((_DWORD *)this, *(_DWORD *)(a2 + 100));
        return (unsigned int)sub_1006B2C0(this, *(_DWORD *)(*(_DWORD *)(this + 28) + 4 * *(_DWORD *)(a2 + 100)));
      }
      else
      {
        result >>= 12;
        if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a2 + 108) & 0xFFF) + 2) == result
          && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a2 + 108) & 0xFFF) + 1)
          && *(_DWORD *)(a2 + 100) != -1 )
        {
          return DevMsg(1, "Error: Bad soundscape!\n");
        }
      }
    }
  }
  return result;
}
