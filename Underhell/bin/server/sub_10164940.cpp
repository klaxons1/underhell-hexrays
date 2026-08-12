double __thiscall sub_10164940(int this)
{
  int v1; // eax
  double result; // st7

  v1 = *(_DWORD *)(this + 3624);
  if ( !v1 )
    return sub_100442F0((float *)this);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v1 + 204))(*(_DWORD *)(this + 3624));
  return result;
}
