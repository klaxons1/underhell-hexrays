double __thiscall sub_10103050(_DWORD *this)
{
  int v1; // ecx
  double result; // st7

  v1 = *(this - 445);
  if ( !v1 )
    return 0.0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 116))(v1);
  return result;
}
