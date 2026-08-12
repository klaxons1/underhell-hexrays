void __thiscall sub_10329490(int this, int a2, int a3)
{
  int v4; // edi
  _DWORD *v5; // eax
  int v6; // ebx
  int v7; // [esp+1Ch] [ebp+Ch]

  if ( a3 == 2 || a3 == 3 )
  {
    v4 = dword_10700AC8;
    v7 = *(_DWORD *)(this + 3776);
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
      sub_100BD750((volatile signed __int32 *)this);
    v5 = *(_DWORD **)(this + 1100);
    if ( v5 && *v5 )
      v6 = *(_DWORD *)(this + 1100);
    else
      v6 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
    sub_100BE7D0((_DWORD *)this, v6, v7, 1.0);
  }
  else
  {
    sub_10019C10((_DWORD *)this, *(_DWORD *)(this + 3776), 0.0);
  }
}
