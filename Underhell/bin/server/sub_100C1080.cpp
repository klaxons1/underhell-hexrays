int __thiscall sub_100C1080(int this)
{
  int v2; // edi
  _DWORD *v3; // eax
  int v4; // ebx
  int (__thiscall *v5)(int); // eax
  int v7; // [esp+4h] [ebp-4h] BYREF

  sub_100E0780();
  if ( *(_DWORD *)(this + 908) != -1 )
  {
    v2 = dword_10700AC8;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
      sub_100BD750((volatile signed __int32 *)this);
    v3 = *(_DWORD **)(this + 1100);
    if ( v3 && *v3 )
      v4 = *(_DWORD *)(this + 1100);
    else
      v4 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
    if ( v4 && !sub_100BE590(this, *(_DWORD *)(this + 908)) )
    {
      v7 = 0;
      sub_10286450(&v7);
    }
  }
  v5 = *(int (__thiscall **)(int))(*(_DWORD *)this + 792);
  *(float *)(this + 880) = *(float *)(this + 724);
  return v5(this);
}
