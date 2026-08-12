bool __thiscall sub_100BFB90(int this, int a2)
{
  int v2; // esi
  _DWORD *v4; // eax
  int v5; // edi
  int v7[3]; // [esp+20h] [ebp-18h] BYREF
  int v8[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v4 = *(_DWORD **)(this + 1100);
  if ( v4 && *v4 )
    v5 = *(_DWORD *)(this + 1100);
  else
    v5 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  return v5 && (unsigned __int8)sub_10100AE0(v5, a2, 0.0, 1.0, this + 912, (int)v7, (int)v8) != 0;
}
