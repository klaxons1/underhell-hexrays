int __thiscall sub_100B40F0(int *this, int a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // ecx
  int result; // eax
  int v7; // edi
  int v8; // ebx
  int v9; // ebx
  int v10; // edx
  int v11; // [esp+4h] [ebp-8h]
  int v12; // [esp+8h] [ebp-4h]

  v3 = this[3];
  if ( v3 <= 0 )
  {
    v5 = a2;
  }
  else
  {
    v4 = *(_DWORD *)(*this + 4 * v3 - 4);
    v5 = a2;
    *(_DWORD *)(*this + 4 * a2) = v4;
    --this[3];
  }
  result = this[3];
  v12 = result;
  if ( result )
  {
    result /= 2;
    v11 = result;
    v7 = v5;
    if ( v5 < result )
    {
      while ( 1 )
      {
        v8 = 2 * v5 + 1;
        if ( v8 < v12 )
        {
          result = ((int (__cdecl *)(int, int))this[5])(*this + 4 * v5, *this + 4 * v8);
          v5 = a2;
          if ( (_BYTE)result )
            v7 = v8;
        }
        v9 = v8 + 1;
        if ( v9 < v12 )
        {
          result = ((int (__cdecl *)(int, int))this[5])(*this + 4 * v7, *this + 4 * v9);
          v5 = a2;
          if ( (_BYTE)result )
            v7 = v9;
        }
        if ( v7 == v5 )
          break;
        v10 = *(_DWORD *)(*this + 4 * v5);
        *(_DWORD *)(*this + 4 * v5) = *(_DWORD *)(*this + 4 * v7);
        result = *this;
        *(_DWORD *)(*this + 4 * v7) = v10;
        a2 = v7;
        if ( v7 >= v11 )
          break;
        v5 = v7;
      }
    }
  }
  return result;
}
