int __thiscall sub_1024BB20(int (__thiscall ***this)(void *, int, int), _DWORD *a2)
{
  int v3; // ebx
  int result; // eax
  int v5; // esi
  char *v6; // eax
  void (__thiscall **v7)(int, _DWORD *); // edi
  _DWORD *v8; // eax

  v3 = 0;
  result = sub_10237130((int (__thiscall ***)(_DWORD))this);
  if ( result > 0 )
  {
    do
    {
      v5 = sub_10237150(this, v3);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 356))(v5) )
      {
        v6 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 72))(v5);
        if ( v6 )
        {
          if ( *v6 )
          {
            v7 = (void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v5 + 352);
            v8 = sub_1022A6A0(a2, v6, 1);
            (*v7)(v5, v8);
          }
        }
      }
      ++v3;
      result = sub_10237130((int (__thiscall ***)(_DWORD))this);
    }
    while ( v3 < result );
  }
  return result;
}
