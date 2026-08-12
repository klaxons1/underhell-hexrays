int __thiscall sub_100D18C0(int this)
{
  int v2; // edi
  _DWORD *v3; // eax
  int v4; // ebx
  int v6; // [esp+Ch] [ebp-4h]

  v2 = dword_10700AC8;
  v6 = *(_DWORD *)(this + 908);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v3 = *(_DWORD **)(this + 1100);
  if ( v3 && *v3 )
    v4 = *(_DWORD *)(this + 1100);
  else
    v4 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)this + 736))(this, v4, v6);
}
