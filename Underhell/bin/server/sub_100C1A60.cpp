int __thiscall sub_100C1A60(int this, char *String2)
{
  int v2; // esi
  _DWORD *v4; // eax
  int *v5; // ebx
  int result; // eax
  int v7; // ebx
  int *v8; // ecx

  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v4 = *(_DWORD **)(this + 1100);
  if ( v4 && *v4 )
    v5 = *(int **)(this + 1100);
  else
    v5 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  result = sub_100BAC20(v5, String2);
  v7 = result;
  if ( *(_DWORD *)(this + 856) != result )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 856) = v7;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        result = sub_100194B0(v8, 856);
      *(_DWORD *)(this + 856) = v7;
    }
  }
  return result;
}
