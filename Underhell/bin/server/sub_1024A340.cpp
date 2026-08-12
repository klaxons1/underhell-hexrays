int __thiscall sub_1024A340(int this, int a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  int result; // eax
  _DWORD *v8; // ecx

  v3 = *(_DWORD *)(this + 824);
  v4 = *(_DWORD *)(this + 832);
  if ( v4 + 1 > v3 )
    sub_102ABFC0(v4 - v3 + 1);
  ++*(_DWORD *)(this + 832);
  v5 = *(_DWORD *)(this + 820);
  v6 = *(_DWORD *)(this + 832) - v4 - 1;
  *(_DWORD *)(this + 836) = v5;
  if ( v6 > 0 )
    memcpy((void *)(v5 + 4 * v4 + 4), (const void *)(v5 + 4 * v4), 4 * v6);
  result = *(_DWORD *)(this + 820) + 4 * v4;
  if ( result )
    *(_DWORD *)result = a2;
  if ( *(_BYTE *)(this + 84) )
  {
    *(_BYTE *)(this + 88) |= 1u;
  }
  else
  {
    v8 = *(_DWORD **)(this + 24);
    if ( v8 )
    {
      *v8 |= 0x101u;
      result = sub_10153460(v8);
      *(_WORD *)(result + 2) = 0;
    }
  }
  return result;
}
