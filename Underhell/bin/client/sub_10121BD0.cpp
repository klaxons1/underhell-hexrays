int __thiscall sub_10121BD0(int *this)
{
  int v2; // ecx
  int v3; // edi
  int result; // eax
  int v5; // ebx
  int v6; // ebx
  int v7; // ecx
  int v8; // [esp+8h] [ebp-Ch]
  int v9; // [esp+Ch] [ebp-8h]
  int v10; // [esp+10h] [ebp-4h]

  v2 = this[3];
  v3 = 0;
  if ( v2 > 0 )
  {
    *(_DWORD *)*this = *(_DWORD *)(*this + 4 * v2 - 4);
    --this[3];
  }
  result = this[3];
  v10 = 0;
  v9 = result;
  if ( result )
  {
    result /= 2;
    v8 = result;
    if ( result > 0 )
    {
      do
      {
        v5 = 2 * v10 + 1;
        if ( v5 < v9 )
        {
          result = ((int (__cdecl *)(int, int))this[5])(*this + 4 * v10, *this + 4 * v5);
          if ( (_BYTE)result )
            v3 = 2 * v10 + 1;
        }
        v6 = 2 * v10 + 2;
        if ( v6 < v9 )
        {
          result = ((int (__cdecl *)(int, int))this[5])(*this + 4 * v3, *this + 4 * v6);
          if ( (_BYTE)result )
            v3 = 2 * v10 + 2;
        }
        if ( v3 == v10 )
          break;
        v7 = *(_DWORD *)(*this + 4 * v10);
        *(_DWORD *)(*this + 4 * v10) = *(_DWORD *)(*this + 4 * v3);
        result = *this;
        *(_DWORD *)(*this + 4 * v3) = v7;
        v10 = v3;
      }
      while ( v3 < v8 );
    }
  }
  return result;
}
