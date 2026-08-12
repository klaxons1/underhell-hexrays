int __thiscall sub_10257C70(int this, int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // eax

  *(_BYTE *)(this + 300) = 0;
  result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA68 + 8))(dword_1047CA68, 0);
  v4 = *(_DWORD *)(this + 304);
  if ( v4 != -1 )
  {
    v5 = *(_DWORD *)(this + 308);
    if ( v5 < v4 )
    {
      v4 = *(_DWORD *)(this + 308);
      v5 = *(_DWORD *)(this + 304);
    }
    result = v5 - v4;
    if ( !result )
      *(_DWORD *)(this + 304) = -1;
  }
  return result;
}
