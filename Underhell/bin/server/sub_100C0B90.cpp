int __thiscall sub_100C0B90(int this, int a2)
{
  int result; // eax
  int v4; // esi
  _DWORD *v5; // eax
  int v6; // ebx
  _DWORD *v7; // eax

  result = -1;
  if ( a2 != -1 )
  {
    v4 = dword_10700AC8;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
      sub_100BD750((volatile signed __int32 *)this);
    v5 = *(_DWORD **)(this + 1100);
    if ( v5 && *v5 )
      v6 = *(_DWORD *)(this + 1100);
    else
      v6 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
    if ( v6 )
    {
      v7 = sub_10001430((_DWORD *)this);
      return sub_100BAE10((int)v7, a2, 0);
    }
    else
    {
      return -1;
    }
  }
  return result;
}
