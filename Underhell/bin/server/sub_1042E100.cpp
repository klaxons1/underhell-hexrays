char __thiscall sub_1042E100(int this)
{
  char v2; // al
  _BYTE *v3; // eax
  char i; // al

  if ( (*(_BYTE *)(this + 21) & 1) == 0 )
    return 0;
  if ( *(_BYTE *)(this + 20) )
    return 0;
  v2 = sub_1042D170(this, 2);
  *(_BYTE *)(this + 20) &= ~2u;
  if ( !v2 )
    return 0;
  v3 = (_BYTE *)(*(_DWORD *)this + *(_DWORD *)(this + 12) - *(_DWORD *)(this + 32));
  if ( !v3 || *v3 != 47 || v3[1] != 47 )
    return 0;
  *(_DWORD *)(this + 12) += 2;
  for ( i = sub_1008A100((_DWORD *)this); !*(_BYTE *)(this + 20); i = sub_1008A100((_DWORD *)this) )
  {
    if ( i == 10 )
      break;
  }
  return 1;
}
