int __thiscall sub_1011CC90(int this)
{
  _DWORD *v2; // ecx
  int result; // eax

  v2 = *(_DWORD **)(this + 16);
  if ( v2 )
    result = sub_10038340(v2);
  *(_DWORD *)(this + 16) = 0;
  *(_BYTE *)(this + 20) = 0;
  *(_DWORD *)(this + 280) = 0;
  return result;
}
