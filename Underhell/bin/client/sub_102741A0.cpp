int __thiscall sub_102741A0(int this, int a2)
{
  int v4; // edx
  int result; // eax
  _DWORD *v6; // esi
  _DWORD *v7; // edx
  int v8; // esi
  bool v9; // zf
  int v10; // esi
  int v11; // ecx
  int v12; // edx
  int v13; // edx
  int v14; // eax

  while ( 1 )
  {
    v4 = *(_DWORD *)(this + 232);
    result = 0;
    if ( v4 > 0 )
    {
      v6 = *(_DWORD **)(this + 220);
      do
      {
        if ( *v6 == a2 )
          break;
        ++result;
        ++v6;
      }
      while ( result < v4 );
    }
    if ( result == v4 )
      break;
    if ( result != v4 - 1 )
      return (*(int (__thiscall **)(_DWORD, _DWORD, int, int, int))(**(_DWORD **)(this + 268) + 820))(
               *(_DWORD *)(this + 268),
               *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 220) + 4 * result + 4) + 208),
               1,
               1,
               1);
    result = *(_DWORD *)(this + 212);
    v7 = *(_DWORD **)(this + 268);
    if ( result < 0 )
      return result;
    if ( result >= v7[54] )
      return result;
    if ( result > v7[60] )
      return result;
    v8 = v7[53];
    v9 = *(_DWORD *)(v8 + 12 * result + 4) == result;
    v10 = v8 + 12 * result;
    if ( v9 && *(_DWORD *)(v10 + 8) != result )
      return result;
    v11 = *(_DWORD *)(v7[53] + 12 * result);
    if ( !v11 )
      return result;
    if ( result >= v7[54]
      || result > v7[60]
      || (v12 = v7[53], v9 = *(_DWORD *)(v12 + 12 * result + 4) == result, v13 = v12 + 12 * result, v9)
      && *(_DWORD *)(v13 + 8) != result )
    {
      a2 = this;
      this = 0;
    }
    else
    {
      v14 = v11;
      a2 = this;
      this = v14;
    }
  }
  return result;
}
