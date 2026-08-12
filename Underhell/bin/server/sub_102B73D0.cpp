int __thiscall sub_102B73D0(int this)
{
  int v2; // edi
  unsigned __int16 v3; // ax
  int v4; // ecx
  int v5; // edi
  _DWORD *v6; // ebx
  int result; // eax
  int v8; // [esp+14h] [ebp-4h]

  if ( !*(_BYTE *)(this + 1168) )
    sub_1023C380((_DWORD *)this, (int)"NPC_CombineMine.CloseHooks", 0.0, 0);
  v2 = *(_DWORD *)(this + 424);
  if ( v2 )
  {
    v3 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v2 + 76))(*(_DWORD *)(this + 424));
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 72))(v2, v3 | 2);
  }
  v4 = *(_DWORD *)(this + 1160);
  *(_BYTE *)(this + 1168) = 0;
  v5 = dword_10700AC8;
  v8 = v4;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v6 = *(_DWORD **)(this + 1100);
  if ( !v6 || !*v6 )
    v6 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 104))(v5);
  sub_100BE7D0((_DWORD *)this, (int)v6, v8, 0.0);
  result = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 424) + 60))(*(_DWORD *)(this + 424), 0);
  *(_DWORD *)(this + 1180) = 0;
  return result;
}
