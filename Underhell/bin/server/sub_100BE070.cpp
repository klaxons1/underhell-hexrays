double __thiscall sub_100BE070(int this, int a2)
{
  int v2; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // ebx
  float v7; // [esp+0h] [ebp-1Ch]
  float v8; // [esp+10h] [ebp-Ch] BYREF
  float v9; // [esp+14h] [ebp-8h]
  float v10; // [esp+18h] [ebp-4h]

  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v4 = *(_DWORD **)(this + 1100);
  if ( v4 && *v4 )
    v5 = *(_DWORD **)(this + 1100);
  else
    v5 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  sub_100BA880(v5, a2, this + 912, &v8);
  v7 = v8 * v8 + v9 * v9 + v10 * v10;
  if ( off_10689708(v7) <= 0.0 )
    return 99999.0;
  else
    return sub_10265030(&v8);
}
