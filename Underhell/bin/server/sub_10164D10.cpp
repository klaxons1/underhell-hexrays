int __thiscall sub_10164D10(_DWORD *this)
{
  int i; // esi
  int v3; // ecx

  for ( i = 0; i < this[910]; ++i )
  {
    v3 = *(_DWORD *)(this[907] + 4 * i);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 264))(v3);
  }
  return sub_1002FB90((int)this);
}
