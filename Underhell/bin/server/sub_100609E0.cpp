void __thiscall sub_100609E0(int this)
{
  if ( *(_BYTE *)(this + 92) )
  {
    *(float *)(this + 24) = 0.0;
  }
  else if ( (*(_DWORD *)(*(_DWORD *)(this + 4) + 2716) & 0x2000) == 0 )
  {
    *(float *)(this + 24) = ((double (__thiscall *)(int))**(_DWORD **)(this + 8))(this + 8);
  }
}
