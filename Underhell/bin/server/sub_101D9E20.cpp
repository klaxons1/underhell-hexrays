int __thiscall sub_101D9E20(_DWORD *this, int a2)
{
  _DWORD *v2; // ebx
  int result; // eax
  int **v4; // edi
  int *v5; // edi
  unsigned int v6; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // edx
  _DWORD v10[3]; // [esp+4h] [ebp-10h] BYREF
  _DWORD *v11; // [esp+10h] [ebp-4h]

  v2 = this;
  this[39] = dword_106BAFEC;
  result = this[6];
  v11 = this;
  this[38] = result;
  if ( result )
  {
    v4 = (int **)(this + 3);
    do
    {
      v5 = *v4;
      v6 = v5[1];
      if ( v6 != -1 && off_1061BE18[4 * (v5[1] & 0xFFF) + 2] == v6 >> 12 && off_1061BE18[4 * (v5[1] & 0xFFF) + 1] )
      {
        (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)a2 + 20))(a2, v5, &dword_1063AC70);
        (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 28))(a2);
        v7 = v5[3];
        if ( v7 )
        {
          v8 = 0;
          if ( v7 > 0 )
          {
            do
            {
              (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 28))(a2);
              if ( dword_106BAFF4 )
              {
                if ( *(_DWORD *)(v5[13] + 4 * v8) )
                {
                  v9 = *v5;
                  v10[1] = *(_DWORD *)(v5[13] + 4 * v8);
                  v10[2] = v9;
                  v10[0] = a2;
                  (*(void (__stdcall **)(_DWORD *))(*(_DWORD *)dword_106BAFF4 + 204))(v10);
                }
              }
              (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 36))(a2);
              ++v8;
            }
            while ( v8 < v5[3] );
          }
          v2 = v11;
        }
        (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 36))(a2);
      }
      v4 = (int **)(v2 + 3);
      result = sub_101D9380((int)(v2 + 3));
    }
    while ( v2[6] );
  }
  return result;
}
