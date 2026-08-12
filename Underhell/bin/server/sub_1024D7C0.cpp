void __thiscall sub_1024D7C0(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // edi
  _DWORD *v5; // edx
  _DWORD *i; // ecx
  int v7; // eax
  int v8; // ebx
  int v9; // ebx
  int v10; // ecx
  int j; // [esp+8h] [ebp-8h]
  int v12; // [esp+Ch] [ebp-4h]
  int v13; // [esp+18h] [ebp+8h]

  if ( *(_BYTE *)(a2 + 16) )
  {
    v3 = this[3];
    v4 = 0;
    if ( v3 > 0 )
    {
      v5 = (_DWORD *)*this;
      for ( i = (_DWORD *)*this; *i != a2; ++i )
      {
        if ( ++v4 >= v3 )
          return;
      }
      v13 = v4;
      v5[v4] = v5[v3 - 1];
      v7 = --this[3];
      v12 = v7;
      if ( v7 )
      {
        for ( j = v7 / 2; v4 < j; v13 = v4 )
        {
          v8 = 2 * v13 + 1;
          if ( v8 < v12 && ((unsigned __int8 (__cdecl *)(int, int))this[5])(*this + 4 * v13, *this + 4 * v8) )
            v4 = 2 * v13 + 1;
          v9 = 2 * v13 + 2;
          if ( v9 < v12 && ((unsigned __int8 (__cdecl *)(int, int))this[5])(*this + 4 * v4, *this + 4 * v9) )
            v4 = 2 * v13 + 2;
          if ( v4 == v13 )
            break;
          v10 = *(_DWORD *)(*this + 4 * v13);
          *(_DWORD *)(*this + 4 * v13) = *(_DWORD *)(*this + 4 * v4);
          *(_DWORD *)(*this + 4 * v4) = v10;
        }
      }
    }
  }
}
