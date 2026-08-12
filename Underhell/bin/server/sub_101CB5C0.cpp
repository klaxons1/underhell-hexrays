int __thiscall sub_101CB5C0(_DWORD *this, int a2)
{
  int v3; // esi
  _DWORD *v4; // edi
  int result; // eax

  v3 = 0;
  if ( (int)this[283] > 0 )
  {
    v4 = this + 289;
    do
    {
      if ( *v4 )
        result = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*v4 + 60))(*v4, 0);
      ++v3;
      v4 += 6;
    }
    while ( v3 < this[283] );
  }
  return result;
}
