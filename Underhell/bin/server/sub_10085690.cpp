int __thiscall sub_10085690(int *this)
{
  int v2; // ecx
  _DWORD *v3; // eax
  int result; // eax
  int v5; // edi
  int v6; // esi
  int v7; // eax
  bool v8; // zf
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // [esp+Ch] [ebp-10h]
  int i; // [esp+10h] [ebp-Ch]
  int v13; // [esp+14h] [ebp-8h]
  int v14; // [esp+18h] [ebp-4h]
  int v15; // [esp+18h] [ebp-4h]

  v2 = this[3];
  if ( v2 > 0 )
  {
    v3 = (_DWORD *)*this;
    *v3 = *(_DWORD *)(*this + 8 * v2 - 8);
    v3[1] = v3[2 * v2 - 1];
    --this[3];
  }
  result = this[3];
  v5 = 0;
  v13 = result;
  if ( result )
  {
    result /= 2;
    v6 = 0;
    for ( i = result; v6 < i; v5 = v6 )
    {
      v7 = 2 * v5 + 1;
      v14 = v7;
      if ( v7 < v13 )
      {
        v8 = ((unsigned __int8 (__cdecl *)(int, int))this[5])(*this + 8 * v5, *this + 8 * v7) == 0;
        v7 = v14;
        if ( !v8 )
          v6 = v14;
      }
      result = v7 + 1;
      v15 = result;
      if ( result < v13 )
      {
        result = ((int (__cdecl *)(int, int))this[5])(*this + 8 * v6, *this + 8 * result);
        if ( (_BYTE)result )
          v6 = v15;
      }
      if ( v6 == v5 )
        break;
      v9 = (_DWORD *)*this;
      v10 = *(_DWORD *)(*this + 8 * v5);
      v11 = *(_DWORD *)(*this + 8 * v5 + 4);
      v9[2 * v5] = v9[2 * v6];
      v9[2 * v5 + 1] = v9[2 * v6 + 1];
      result = *this;
      *(_DWORD *)(result + 8 * v6) = v10;
      *(_DWORD *)(result + 8 * v6 + 4) = v11;
    }
  }
  return result;
}
