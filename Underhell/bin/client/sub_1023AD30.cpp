int __thiscall sub_1023AD30(int *this)
{
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  int v5; // eax
  int v6; // edi
  int v7; // esi
  int v8; // ebx
  int v9; // eax
  int (__thiscall ***v10)(_DWORD); // eax
  int v11; // esi
  int v12; // eax
  int result; // eax
  int v14; // eax
  char v15; // bl
  int v16; // eax
  int v17; // esi
  int v18; // edi

  if ( dword_103FCF4C == -1 )
    goto LABEL_10;
  v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 64))(dword_1047CA74, dword_103FCF4C);
  if ( !v2 )
    goto LABEL_10;
  v3 = dword_1047CA70;
  v4 = *(_DWORD *)dword_1047CA70;
  v5 = sub_10278FB0();
  if ( !(*(int (__thiscall **)(int, int, int))(v4 + 216))(v3, v2, v5) )
    goto LABEL_10;
  if ( dword_103FCF4C == -1
    || (v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 64))(dword_1047CA74, dword_103FCF4C)) == 0 )
  {
    v10 = 0;
  }
  else
  {
    v7 = dword_1047CA70;
    v8 = *(_DWORD *)dword_1047CA70;
    v9 = sub_10278FB0();
    v10 = (int (__thiscall ***)(_DWORD))(*(int (__thiscall **)(int, int, int))(v8 + 216))(v7, v6, v9);
  }
  v11 = *this;
  v12 = (**v10)(v10);
  result = (*(int (__thiscall **)(int *, int))(v11 + 160))(this, v12);
  if ( !(_BYTE)result )
  {
    v14 = sub_102393B0(&dword_103FCF4C);
    v15 = *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v14 + 600))(v14) + 2);
    v16 = sub_102393B0(&dword_103FCF4C);
    result = (*(int (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v16 + 680))(v16, 1, -1, 0);
    if ( !v15 )
    {
LABEL_10:
      result = (*(int (__thiscall **)(int *))(*this + 640))(this);
      v17 = result;
      if ( result )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 600))(result);
        v18 = result;
        if ( result )
        {
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 556))(v17);
          if ( (_BYTE)result )
          {
            if ( !*(_BYTE *)(v18 + 1) )
              return (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 672))(v17);
          }
        }
      }
    }
  }
  return result;
}
