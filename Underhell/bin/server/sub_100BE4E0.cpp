char __thiscall sub_100BE4E0(int this)
{
  int v1; // ebx
  int v3; // edi
  _DWORD *v4; // eax
  bool v5; // zf
  void (__fastcall *v6)(int); // edx
  int v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h]

  v1 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  v3 = dword_10700AC8;
  v8 = *(_DWORD *)(this + 908);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v4 = *(_DWORD **)(this + 1100);
  if ( !v4 || (v9 = *(_DWORD *)(this + 1100), !*v4) )
    v9 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  v5 = sub_100BB0D0(v9, 25, v8) == -1;
  v6 = *(void (__fastcall **)(int))(*(_DWORD *)v1 + 104);
  if ( v5 || (*(_DWORD *)(this + 256) & 0x20000000) != 0 )
  {
    v6(v1);
    return 0;
  }
  else
  {
    v6(v1);
    return 1;
  }
}
