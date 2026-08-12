void __thiscall sub_1032CEC0(int this)
{
  int v2; // ecx

  if ( *(_DWORD *)(this + 2372) == 64 )
  {
    sub_10024290((char *)this, 17);
    sub_10024290((char *)this, 18);
  }
  sub_10024230((char *)this, 74);
  v2 = *(_DWORD *)(this + 3624);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2);
  nullsub_4();
}
