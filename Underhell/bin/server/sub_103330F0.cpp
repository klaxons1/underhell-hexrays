int __thiscall sub_103330F0(_DWORD *this)
{
  int v2; // eax

  *this = &CNPC_Bullseye::`vftable';
  this[526] = &CNPC_Bullseye::`vftable';
  v2 = 0;
  if ( dword_106E5B08 > 0 )
  {
    while ( *(_DWORD **)(dword_106E5AFC + 4 * v2) != this )
    {
      if ( ++v2 >= dword_106E5B08 )
        goto LABEL_8;
    }
    if ( v2 != -1 && dword_106E5B08 > 0 )
      *(_DWORD *)(dword_106E5AFC + 4 * v2) = *(_DWORD *)(dword_106E5AFC + 4 * dword_106E5B08-- - 4);
  }
LABEL_8:
  sub_1010BB10(this + 912);
  sub_1010BB10(this + 906);
  return sub_10037B80(this);
}
