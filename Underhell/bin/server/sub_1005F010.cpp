int __thiscall sub_1005F010(int this)
{
  int v2; // ecx
  unsigned int v4; // eax
  int v5; // ecx

  if ( *(_BYTE *)(this + 104)
    && (v2 = *(_DWORD *)(this + 4), *(_BYTE *)(this + 104) = 0, (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 368))(v2)) )
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1644))(*(_DWORD *)(this + 4), 1003);
    return 27;
  }
  else if ( (unsigned __int8)sub_100B8D10(*(_DWORD *)(this + 4) + 2760) )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(this + 4) + 2888);
    if ( v4 != -1
      && off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 4) + 2888) & 0xFFF) + 2] == v4 >> 12
      && (v5 = off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 4) + 2888) & 0xFFF) + 1]) != 0
      && *(_WORD *)(v5 + 816) == 101 )
    {
      *(_DWORD *)(this + 60) = 2;
    }
    else
    {
      *(_DWORD *)(this + 60) = 1;
    }
    if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 99) < 80 )
      sub_1005E520((_DWORD *)this);
    return 27;
  }
  else
  {
    return 0;
  }
}
