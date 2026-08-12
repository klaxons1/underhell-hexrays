void __thiscall sub_10051390(int this, int a2)
{
  int *v3; // eax
  int *v4; // edi
  _DWORD *v5; // eax
  int v6; // ecx

  if ( a2 )
  {
    v3 = *(int **)(this + 8);
    v4 = (int *)(this + 4);
    if ( v3 == (int *)(this + 4) )
    {
      if ( a2 != 1 )
      {
        v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 4 * a2);
        v6 = *v4;
        *(_DWORD *)(this + 8) = v5;
        *v5 = v6;
      }
    }
    else if ( a2 == 1 )
    {
      *v4 = *v3;
      (*(void (__thiscall **)(_DWORD, int *))(*g_pMemAlloc + 20))(g_pMemAlloc, v3);
      *(_DWORD *)(this + 8) = v4;
    }
    else
    {
      *(_DWORD *)(this + 8) = (*(int (__thiscall **)(_DWORD, int *, int))(*g_pMemAlloc + 12))(g_pMemAlloc, v3, 4 * a2);
    }
  }
  else
  {
    if ( *(_WORD *)(this + 2) > 1u )
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 8));
    *(_DWORD *)(this + 8) = 0;
  }
}
