int __thiscall sub_10239AE0(__int16 *this, int a2, int a3, char a4)
{
  int v5; // ebx
  int (__thiscall **v6)(int, int); // edi
  int v7; // eax
  int v8; // ebp
  int v9; // ebx
  int (__thiscall **v10)(int, int); // edi
  int v11; // eax
  int v12; // edi
  int result; // eax
  int v14; // ebx
  int (__thiscall **v15)(int, int); // edi
  int v16; // eax
  int v17; // ebp
  int v18; // ebx
  int (__thiscall **v19)(int, int); // edi
  int v20; // eax
  int v21; // edi
  int v22; // ebp
  int v23; // ebx
  int (__thiscall **v24)(int, int); // edi
  int v25; // eax
  int v26; // edi

  if ( !(*(unsigned __int8 (__thiscall **)(__int16 *))(*(_DWORD *)this + 128))(this)
    || !(*(unsigned __int8 (__thiscall **)(__int16 *))(*(_DWORD *)this + 528))(this) )
  {
    return 0;
  }
  if ( a4 )
  {
    v5 = dword_1047CA70;
    v6 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 68);
    v7 = (**(int (__thiscall ***)(__int16 *))this)(this);
    v8 = (*v6)(v5, v7) - 1;
    if ( v8 >= 0 )
    {
      do
      {
        v9 = dword_1047CA70;
        v10 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 72);
        v11 = (**(int (__thiscall ***)(__int16 *, int))this)(this, v8);
        v12 = (*v10)(v9, v11);
        if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 92))(dword_1047CA70, v12) )
        {
          result = (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA70 + 168))(
                     dword_1047CA70,
                     v12,
                     a2,
                     a3,
                     1);
          if ( result )
            return result;
        }
      }
      while ( --v8 >= 0 );
    }
    v14 = dword_1047CA70;
    v15 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 68);
    v16 = (**(int (__thiscall ***)(__int16 *))this)(this);
    v17 = (*v15)(v14, v16) - 1;
    if ( v17 >= 0 )
    {
      do
      {
        v18 = dword_1047CA70;
        v19 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 72);
        v20 = (**(int (__thiscall ***)(__int16 *, int))this)(this, v17);
        v21 = (*v19)(v18, v20);
        if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 92))(dword_1047CA70, v21) )
        {
          result = (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA70 + 168))(
                     dword_1047CA70,
                     v21,
                     a2,
                     a3,
                     1);
          if ( result )
            return result;
        }
      }
      while ( --v17 >= 0 );
    }
    if ( this[40] >= 0 && sub_10236EB0((int (__thiscall ***)(void *, int *, int *, int *, int *))this, a2, a3) )
      return (**(int (__thiscall ***)(__int16 *))this)(this);
    return 0;
  }
  if ( !sub_10236EB0((int (__thiscall ***)(void *, int *, int *, int *, int *))this, a2, a3) )
    return 0;
  v22 = sub_10237130((int (__thiscall ***)(_DWORD))this) - 1;
  if ( v22 < 0 )
  {
LABEL_21:
    if ( this[40] >= 0 )
      return (**(int (__thiscall ***)(__int16 *))this)(this);
    return 0;
  }
  while ( 1 )
  {
    v23 = dword_1047CA70;
    v24 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 72);
    v25 = (**(int (__thiscall ***)(__int16 *, int))this)(this, v22);
    v26 = (*v24)(v23, v25);
    if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 92))(dword_1047CA70, v26) )
    {
      result = (*(int (__thiscall **)(int, int, int, int, _DWORD))(*(_DWORD *)dword_1047CA70 + 168))(
                 dword_1047CA70,
                 v26,
                 a2,
                 a3,
                 0);
      if ( result )
        return result;
    }
    if ( --v22 < 0 )
      goto LABEL_21;
  }
}
