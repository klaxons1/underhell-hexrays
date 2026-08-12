bool __thiscall sub_10029630(_BYTE *this, int a2, int a3, int a4)
{
  if ( !*(_BYTE *)(a2 + 64) )
  {
    if ( (this[388] & 2) != 0 )
    {
      (*(void (__thiscall **)(_BYTE *, int, int, int))(*(_DWORD *)this + 180))(this, a2, a3, a4);
      return 1;
    }
    return 0;
  }
  if ( (this[388] & 1) == 0 )
    return 0;
  if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int))(*(_DWORD *)this + 180))(this, a2, a3, a4) )
    return 1;
  return *(float *)(a4 + 44) < 1.0 || *(_BYTE *)(a4 + 54) || *(_BYTE *)(a4 + 55);
}
