int __thiscall sub_10165A50(_DWORD *this)
{
  int i; // edi
  int v3; // ecx

  (*(void (__thiscall **)(_DWORD *))(*this + 584))(this);
  for ( i = 0; i < this[910]; ++i )
  {
    v3 = *(_DWORD *)(this[907] + 4 * i);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 264))(v3);
  }
  return sub_1002FB90((int)this);
}
