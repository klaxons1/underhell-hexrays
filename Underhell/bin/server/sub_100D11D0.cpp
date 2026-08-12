int __thiscall sub_100D11D0(void *this, int a2, _BYTE *a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // ecx

  v4 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 1328))(this);
  v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 1332))(this);
  v6 = 0;
  if ( v5 <= 0 )
    return a2;
  while ( a2 != *(_DWORD *)v4 )
  {
    ++v6;
    v4 += 12;
    if ( v6 >= v5 )
      return a2;
  }
  if ( a3 )
    *a3 = *(_BYTE *)(v4 + 8);
  return *(_DWORD *)(v4 + 4);
}
