int __thiscall sub_10273B20(int this, int a2, char a3)
{
  int v4; // edi
  int result; // eax

  v4 = *(_DWORD *)(this + 260);
  if ( v4 )
  {
    if ( (*(_BYTE *)(this + 208) & 4) != 0 )
    {
      sub_10279030(*(_DWORD *)(this + 260));
      sub_10034930(v4);
    }
    *(_DWORD *)(this + 260) = 0;
  }
  result = a2;
  *(_BYTE *)(this + 208) ^= (*(_BYTE *)(this + 208) ^ (4 * a3)) & 4;
  *(_DWORD *)(this + 260) = a2;
  return result;
}
