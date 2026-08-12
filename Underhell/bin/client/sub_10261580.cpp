char __thiscall sub_10261580(int this, int a2, char a3)
{
  int v4; // edi
  char result; // al

  v4 = *(_DWORD *)(this + 436);
  if ( v4 && *(char *)(this + 376) < 0 )
  {
    sub_10279030(*(_DWORD *)(this + 436));
    sub_10034930(v4);
  }
  result = (a3 << 7) | *(_BYTE *)(this + 376) & 0x7F;
  *(_BYTE *)(this + 376) = result;
  *(_DWORD *)(this + 436) = a2;
  return result;
}
