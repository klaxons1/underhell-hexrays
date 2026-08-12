int __thiscall sub_102E0CB0(int this)
{
  int *v2; // ecx
  int *v3; // ecx
  int result; // eax
  float v5; // [esp+4h] [ebp-4h]

  if ( (dword_10665E54 & *(_DWORD *)(this + 5092)) != 0 )
    sub_102DF0B0(this, (int)&dword_10665E54);
  if ( *(_BYTE *)(this + 2329) )
    v5 = *(float *)(dword_106E0734 + 44);
  else
    v5 = *(float *)(dword_106E06EC + 44);
  if ( *(_DWORD *)(this + 4132) != LODWORD(v5) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 4132);
    }
    *(float *)(this + 4132) = v5;
  }
  if ( *(_BYTE *)(this + 5216) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 5216);
    }
    *(_BYTE *)(this + 5216) = 0;
  }
  if ( sub_100CF460((_DWORD *)this) && !*(_BYTE *)(this + 3368) )
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 1684))(this);
  result = dword_106E0974;
  if ( *(_DWORD *)(dword_106E0974 + 48) )
  {
    *(_BYTE *)(this + 5197) = 0;
    *(float *)(this + 5200) = 0.0;
  }
  return result;
}
