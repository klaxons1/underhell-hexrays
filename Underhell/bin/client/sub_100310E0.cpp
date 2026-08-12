int __thiscall sub_100310E0(int *this)
{
  int v2; // esi
  int v3; // ebx
  int result; // eax
  int v5; // ecx

  v2 = this[3] - 1;
  if ( v2 >= 0 )
  {
    v3 = 44 * v2;
    do
    {
      result = (**(int (__thiscall ***)(int, _DWORD))(*this + v3))(v3 + *this, 0);
      v3 -= 44;
      --v2;
    }
    while ( v2 >= 0 );
  }
  this[3] = 0;
  if ( this[2] < 0 )
  {
    this[4] = *this;
  }
  else
  {
    result = *this;
    if ( *this )
    {
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, *this);
      *this = 0;
    }
    v5 = *this;
    this[1] = 0;
    this[4] = v5;
  }
  return result;
}
