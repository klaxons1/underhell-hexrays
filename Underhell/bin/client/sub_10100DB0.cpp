int __thiscall sub_10100DB0(_DWORD *this, int a2)
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
  this[38] = dword_1043624C;
  result = this[5];
  v11 = this;
  this[37] = result;
  if ( result )
  {
    v4 = (int **)(this + 2);
    do
    {
      v5 = *v4;
      v6 = v5[1];
      if ( v6 != -1
        && *((_DWORD *)off_103DCD74 + 4 * (v5[1] & 0xFFF) + 2) == v6 >> 12
        && *((_DWORD *)off_103DCD74 + 4 * (v5[1] & 0xFFF) + 1) )
      {
        (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)a2 + 20))(a2, v5, &dword_103E1DB8);
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
              if ( dword_10436254 )
              {
                if ( *(_DWORD *)(v5[13] + 4 * v8) )
                {
                  v9 = *v5;
                  v10[1] = *(_DWORD *)(v5[13] + 4 * v8);
                  v10[2] = v9;
                  v10[0] = a2;
                  (*(void (__stdcall **)(_DWORD *))(*(_DWORD *)dword_10436254 + 204))(v10);
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
      v4 = (int **)(v2 + 2);
      result = sub_10100CD0((int)(v2 + 2));
    }
    while ( v2[5] );
  }
  return result;
}
