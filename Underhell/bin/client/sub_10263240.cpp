char __thiscall sub_10263240(int this, int a2, int a3, int *a4, _DWORD *a5)
{
  int v6; // eax
  int (__thiscall **v7)(void *, int *, int *); // edx
  int v8; // eax
  _DWORD *v9; // edi
  int *v10; // ebp
  int v11; // edx
  int v12; // ecx
  int v13; // ebx

  sub_10236F60((int (__thiscall ***)(void *, int *, int *))this, &a2, &a3);
  v6 = *(_DWORD *)(this + 416);
  a2 -= *(_DWORD *)(this + 412);
  v7 = *(int (__thiscall ***)(void *, int *, int *))this;
  a3 -= v6;
  v8 = ((int (__thiscall *)(int))v7[259])(this);
  v9 = a5;
  v10 = a4;
  if ( a2 >= 0 )
  {
    v11 = a3;
    if ( a3 >= 0 )
    {
      *a4 = v8;
      if ( v8 < *(_DWORD *)(this + 336) )
      {
        do
        {
          if ( v11 < *(_DWORD *)(this + 384) * (*v10 - v8 + 1) )
            break;
          v12 = *v10 + 1;
          *v10 = v12;
        }
        while ( v12 < *(_DWORD *)(this + 336) );
      }
      v13 = 0;
      for ( *v9 = 0; *v9 < *(_DWORD *)(this + 272); ++*v9 )
      {
        v13 += sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(*(_DWORD *)(this + 216)
                                                                           + 72
                                                                           * *(unsigned __int8 *)(*(_DWORD *)(this + 260)
                                                                                                + *v9)));
        if ( a2 < v13 )
          break;
      }
      if ( *v10 != *(_DWORD *)(this + 336) && *v9 != *(_DWORD *)(this + 272) )
        return 1;
    }
  }
  *v9 = -1;
  *v10 = -1;
  return 0;
}
