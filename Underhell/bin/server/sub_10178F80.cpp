int __thiscall sub_10178F80(int this)
{
  int v2; // eax
  int result; // eax
  unsigned int v4; // edi
  int *v5; // ecx

  v2 = *(_DWORD *)(this + 808);
  if ( v2 )
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31D0 + 156))(
      dword_106B31D0,
      *(_DWORD *)(this + 800),
      v2);
  else
    (*(void (__thiscall **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 156))(
      dword_106B31D0,
      *(_DWORD *)(this + 800),
      "n");
  result = *(_DWORD *)(this + 248);
  v4 = result & 0xFFFFFFFE;
  if ( result != (result & 0xFFFFFFFE) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 248) = v4;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        result = sub_100194B0(v5, 248);
      *(_DWORD *)(this + 248) = v4;
    }
  }
  return result;
}
