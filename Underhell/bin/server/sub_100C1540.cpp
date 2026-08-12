int __thiscall sub_100C1540(int this, int a2, int a3)
{
  int v3; // edi
  _DWORD *v5; // eax
  int *v6; // ebx
  int result; // eax
  int v8; // eax

  v3 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v5 = *(_DWORD **)(this + 1100);
  if ( v5 && *v5 )
    v6 = *(int **)(this + 1100);
  else
    v6 = 0;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  if ( v6 )
  {
    if ( a2 >= 0 )
    {
      result = *v6;
      if ( a2 < *(_DWORD *)(*v6 + 156) )
      {
        sub_100BFC30(this);
        v8 = sub_10101170(a2);
        if ( v8 )
        {
          return sub_10421CC0(v8, a3);
        }
        else
        {
          if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
            sub_100DAE60(this);
          return sub_10421CC0(this + 500, a3);
        }
      }
    }
  }
  return result;
}
