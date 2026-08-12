int __thiscall sub_101CB290(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // edi
  int result; // eax

  v2 = 0;
  if ( (int)this[283] > 0 )
  {
    v3 = this + 289;
    do
    {
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v3 + 104))(*v3);
      ++v2;
      v3 += 6;
    }
    while ( v2 < this[283] );
  }
  return result;
}
