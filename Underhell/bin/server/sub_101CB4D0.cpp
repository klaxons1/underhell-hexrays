int __thiscall sub_101CB4D0(_DWORD *this)
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
      if ( *v3 )
        result = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*v3 + 60))(*v3, 0);
      ++v2;
      v3 += 6;
    }
    while ( v2 < this[283] );
  }
  return result;
}
