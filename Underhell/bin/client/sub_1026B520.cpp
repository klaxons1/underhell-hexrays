int __thiscall sub_1026B520(int this, int a2, int a3, int a4, int a5)
{
  int result; // eax
  int v7; // edx
  int v8; // esi

  result = a2;
  if ( a2 >= 0 && a2 < *(_DWORD *)(this + 236) && a2 <= *(_DWORD *)(this + 260) )
  {
    v7 = 12 * a2 + *(_DWORD *)(this + 232);
    if ( *(_DWORD *)(v7 + 4) != a2 || *(_DWORD *)(v7 + 8) == a2 )
    {
      result = *(_DWORD *)(this + 232);
      v8 = *(_DWORD *)(12 * a2 + result);
      if ( v8 )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 772))(v8, a3);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 1028))(v8, a4);
        result = a5;
        if ( a5 )
          result = sub_1026F3A0(a5);
      }
    }
  }
  *(_BYTE *)(this + 348) |= 4u;
  return result;
}
