void __thiscall sub_10255120(int this, int C)
{
  int v3; // eax
  int v4; // ecx
  void (__thiscall *v5)(int); // eax
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // ecx
  int v12; // eax
  int i; // edi
  void (__thiscall *v14)(int); // edx
  int j; // edi

  if ( (_WORD)C != 13 && (*(_BYTE *)(this + 341) || (_WORD)C != 10) && (_WORD)C != 9 )
  {
    if ( *(_BYTE *)(this + 402) && !iswdigit(C) && (_BYTE)C != 46 )
      goto LABEL_8;
    if ( *(_BYTE *)(this + 403) || (unsigned __int16)C <= 0x7Fu )
    {
      v3 = *(_DWORD *)(this + 328);
      if ( v3 > -1 )
      {
        v4 = *(_DWORD *)(this + 232);
        if ( v4 >= v3 )
        {
          if ( v3 <= 0 || !*(_BYTE *)(this + 341) || !*(_BYTE *)(this + 386) )
          {
LABEL_8:
            (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA6C + 300))(
              dword_1047CA6C,
              "Resource\\warning.wav");
            return;
          }
          if ( v4 > v3 )
          {
            do
            {
              if ( !*(_DWORD *)(this + 396) )
                (*(void (__thiscall **)(int))(*(_DWORD *)this + 972))(this);
              if ( **(_DWORD **)(this + 260) > *(_DWORD *)(this + 232) )
              {
                v5 = *(void (__thiscall **)(int))(*(_DWORD *)this + 972);
                *(_DWORD *)(this + 396) = -1;
                v5(this);
              }
              v6 = **(_DWORD **)(this + 260);
              if ( v6 + 1 < *(_DWORD *)(this + 232) )
              {
                sub_10253280((_DWORD *)(this + 220), 0, v6);
                v7 = *(_DWORD *)(this + 280);
                v8 = *(_DWORD *)(this + 232);
                if ( v7 <= v8 )
                {
                  v9 = v7 - **(_DWORD **)(this + 260);
                  *(_DWORD *)(this + 280) = v9 - 1;
                  if ( v9 - 1 < 0 )
                    *(_DWORD *)(this + 280) = 0;
                }
                else
                {
                  *(_DWORD *)(this + 280) = v8;
                }
                v10 = *(_DWORD *)(this + 312);
                if ( v10 > -1 )
                {
                  v11 = *(_DWORD **)(this + 260);
                  v12 = v10 - *v11 - 1;
                  *(_DWORD *)(this + 312) = v12;
                  if ( v12 <= 0 )
                    *(_DWORD *)(this + 312) = -1;
                  *(_DWORD *)(this + 316) += -1 - *v11;
                  if ( *(int *)(this + 316) <= 0 )
                    *(_DWORD *)(this + 316) = -1;
                }
                for ( i = v8 - 1; i >= 0; --i )
                  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this + 992))(
                    this,
                    *(unsigned __int16 *)(*(_DWORD *)(this + 220) + 2 * i),
                    i + 1);
                v14 = *(void (__thiscall **)(int))(*(_DWORD *)this + 972);
                *(_DWORD *)(this + 396) = -1;
                v14(this);
              }
            }
            while ( *(_DWORD *)(this + 232) > *(_DWORD *)(this + 328) );
          }
        }
      }
      if ( *(_BYTE *)(this + 386) )
      {
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 992))(this, C, *(_DWORD *)(this + 232));
        *(_DWORD *)(this + 280) = *(_DWORD *)(this + 232);
      }
      else
      {
        for ( j = *(_DWORD *)(this + 232) - 1; j >= *(_DWORD *)(this + 280); --j )
          (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this + 992))(
            this,
            *(unsigned __int16 *)(*(_DWORD *)(this + 220) + 2 * j),
            j + 1);
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 992))(this, C, *(_DWORD *)(this + 280));
        ++*(_DWORD *)(this + 280);
      }
      if ( (_WORD)C == 10 )
        (*(void (__thiscall **)(int))(*(_DWORD *)this + 972))(this);
      if ( *(_BYTE *)(this + 404) )
      {
        if ( *(_DWORD *)(this + 232) == *(_DWORD *)(this + 328) )
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 56))(this, 0);
      }
      sub_10252FD0(this);
      *(_BYTE *)(this + 340) = 1;
      sub_10254760((_DWORD *)this);
      (*(void (**)(void))(*(_DWORD *)this + 976))();
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 980))(this);
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 16))(this);
    }
  }
}
