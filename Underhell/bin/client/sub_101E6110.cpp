int __thiscall sub_101E6110(int this)
{
  const char *v2; // eax
  int result; // eax

  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 164) + 4))(*(_DWORD *)(this + 164), 1);
  v2 = (const char *)(***(int (__thiscall ****)(_DWORD))(this + 164))(*(_DWORD *)(this + 164));
  result = atoi(v2);
  *(_DWORD *)(this + 296) = result;
  if ( result <= 240 )
  {
    if ( result < 10 )
      result = 10;
    *(_DWORD *)(this + 296) = result;
  }
  else
  {
    result = 240;
    *(_DWORD *)(this + 296) = 240;
  }
  return result;
}
