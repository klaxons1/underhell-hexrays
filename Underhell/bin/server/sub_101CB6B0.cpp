void __thiscall sub_101CB6B0(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // edi

  sub_100EBE30((int)this, 1);
  v2 = 0;
  if ( (int)this[283] > 0 )
  {
    v3 = this + 289;
    do
    {
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v3 + 104))(*v3);
      ++v2;
      v3 += 6;
    }
    while ( v2 < this[283] );
  }
}
