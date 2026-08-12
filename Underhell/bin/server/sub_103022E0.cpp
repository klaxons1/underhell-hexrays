double __thiscall sub_103022E0(_DWORD *this)
{
  int v1; // ecx
  double result; // st7

  v1 = this[906];
  if ( !v1 )
    return -1.0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 176))(v1);
  return result;
}
