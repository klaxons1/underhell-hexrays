_DWORD *__thiscall sub_10019680(_DWORD *this, int a2)
{
  if ( a2 )
    *this = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *this = -1;
  return this;
}
