int __thiscall sub_100238F0(void *this, int a2)
{
  int result; // eax
  int v3; // esi
  int (__thiscall *v4)(int); // eax

  result = dword_10690B5C;
  if ( *(_DWORD *)(dword_10690B5C + 48) )
  {
    result = sub_100D7680(this);
    v3 = result;
    if ( result )
    {
      v4 = *(int (__thiscall **)(int))(*(_DWORD *)result + 368);
      ++*(_DWORD *)(v3 + 3576);
      result = v4(v3);
      if ( *(_DWORD *)(a2 + 76) == result )
        ++*(_DWORD *)(v3 + 3580);
    }
  }
  return result;
}
