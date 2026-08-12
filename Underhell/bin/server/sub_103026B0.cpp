int __thiscall sub_103026B0(int this)
{
  int result; // eax
  int v3; // ebx
  int v4; // edi

  *(_BYTE *)(this + 3648) = 0;
  result = sub_10043FF0((_DWORD *)this);
  v3 = result;
  if ( !*(_BYTE *)(this + 3648) )
  {
    v4 = *(_DWORD *)(this + 3624);
    if ( v4 )
    {
      *(_DWORD *)(this + 3624) = 0;
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 32))(v4);
      sub_1004AF00((_DWORD *)this);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 2224))(this, v4, 0);
      return v3;
    }
  }
  return result;
}
