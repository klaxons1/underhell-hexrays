int __thiscall sub_100AB8B0(_DWORD *this, int a2, _DWORD *a3)
{
  _DWORD *v3; // ebx
  int result; // eax
  _DWORD *v6; // esi
  int v7; // edi
  _DWORD *v8; // ebx

  v3 = a3;
  a3[3] = 0;
  result = sub_100F89E0(0, a2, 0);
  if ( a2 )
  {
    v6 = *(_DWORD **)(this[1] + 208);
    v7 = 0;
    if ( a2 > 0 )
    {
      while ( 1 )
      {
        v8 = (_DWORD *)(*v3 + 4 * v7);
        *v8 = v6 ? *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v6 + 8))(v6) : -1;
        v6 = (_DWORD *)v6[52];
        if ( ++v7 >= a2 )
          break;
        v3 = a3;
      }
    }
    result = this[1];
    *(_DWORD *)(result + 208) = 0;
  }
  return result;
}
