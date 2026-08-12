int __thiscall sub_101F72F0(_DWORD *this, int a2, int a3)
{
  int v3; // edx
  int v5; // ecx
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  _DWORD *v9; // esi
  int v10; // edi
  int v11; // ebx
  int v12; // eax
  bool v13; // zf
  int result; // eax
  _DWORD *v15; // [esp+Ch] [ebp-Ch]
  int v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+14h] [ebp-4h]

  v3 = a2;
  v5 = a3;
  v6 = a2 + a3;
  v7 = a2 + a3 - 1;
  v15 = this;
  if ( v7 >= a2 )
  {
    v8 = 36 * v7;
    v17 = 36 * v7;
    v16 = a3;
    do
    {
      v9 = (_DWORD *)(v8 + *this);
      v10 = v9[3] - 1;
      if ( v10 >= 0 )
      {
        v11 = 84 * v10;
        do
        {
          (**(void (__thiscall ***)(int, _DWORD))(*v9 + v11))(v11 + *v9, 0);
          v11 -= 84;
          --v10;
        }
        while ( v10 >= 0 );
        this = v15;
      }
      v9[3] = 0;
      if ( (int)v9[2] >= 0 )
      {
        if ( *v9 )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v9);
          *v9 = 0;
        }
        v9[1] = 0;
      }
      v12 = *v9;
      v9[4] = *v9;
      if ( (int)v9[2] >= 0 )
      {
        if ( v12 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v12);
          *v9 = 0;
        }
        v9[1] = 0;
      }
      v8 = v17 - 36;
      v13 = v16-- == 1;
      v17 -= 36;
    }
    while ( !v13 );
    v5 = a3;
    v6 = a2 + a3;
    v3 = a2;
  }
  result = this[3] - v3 - v5;
  if ( result > 0 && v5 > 0 )
  {
    result = (int)memcpy((void *)(*this + 36 * v3), (const void *)(*this + 36 * v6), 36 * result);
    v5 = a3;
  }
  this[3] -= v5;
  return result;
}
