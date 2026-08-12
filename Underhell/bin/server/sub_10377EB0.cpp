int __thiscall sub_10377EB0(void *this)
{
  int v1; // ebx
  int v2; // edi
  _DWORD *v4; // esi
  int v5; // [esp+8h] [ebp-4h]

  v1 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
  v2 = 0;
  if ( !v1 )
    return 0;
  v5 = 0;
  if ( dword_106E95A4 > 0 )
  {
    do
    {
      v4 = *(_DWORD **)(dword_106E9598 + 4 * v2);
      if ( (*(int (__thiscall **)(_DWORD *))(*v4 + 368))(v4) == v1 && sub_100697A0(v4, 89, 1) )
        ++v5;
      ++v2;
    }
    while ( v2 < dword_106E95A4 );
  }
  return v5;
}
