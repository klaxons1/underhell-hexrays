void __thiscall sub_1022F190(int this, int a2, char *a3, int a4)
{
  int v6; // eax
  int v7; // ecx
  int v8; // edi
  char v9; // al
  bool v10; // al
  int v11; // eax
  int v12; // ecx
  _BYTE *v13; // [esp+8h] [ebp-4h]
  int v14; // [esp+14h] [ebp+8h]

  if ( (*(_BYTE *)(this + 21) & 1) != 0 && a2 )
  {
    if ( *(_BYTE *)(this + 20) )
    {
      *a3 = 0;
    }
    else
    {
      if ( !a4 )
        a4 = 0x7FFFFFFF;
      sub_1022E840((_DWORD *)this);
      if ( sub_1022EA90((_BYTE *)this, 0, *(_BYTE **)(a2 + 8), *(_DWORD *)(a2 + 12)) )
      {
        *(_DWORD *)(this + 12) += *(_DWORD *)(a2 + 12);
        v6 = *(_DWORD *)(this + 12);
        if ( v6 <= *(_DWORD *)(this + 28) )
        {
          v7 = *(_DWORD *)(this + 32);
          *(_BYTE *)(this + 20) &= ~2u;
          if ( v6 < v7 || v6 >= v7 + *(_DWORD *)(this + 4) )
            (*(void (__thiscall **)(int, int))(this + 36))(this, -1);
        }
        else
        {
          *(_BYTE *)(this + 20) |= 2u;
        }
        v14 = 0;
        if ( !*(_BYTE *)(this + 20) )
        {
          while ( 1 )
          {
            v8 = *(_DWORD *)(a2 + 12);
            v13 = *(_BYTE **)(a2 + 8);
            if ( (*(_BYTE *)(this + 20) & 2) == 0 )
            {
              v9 = sub_1022E380(this, v8);
              *(_BYTE *)(this + 20) &= ~2u;
              if ( v9 )
              {
                if ( !sub_10227B20(
                        (_BYTE *)(*(_DWORD *)this + *(_DWORD *)(this + 12) - *(_DWORD *)(this + 32)),
                        v13,
                        v8) )
                  break;
              }
            }
            v10 = sub_1022F0D0(this, a2);
            if ( v14 < a4 )
              a3[v14++] = v10;
            if ( *(_BYTE *)(this + 20) )
              goto LABEL_26;
          }
          *(_DWORD *)(this + 12) += *(_DWORD *)(a2 + 12);
          v11 = *(_DWORD *)(this + 12);
          if ( v11 <= *(_DWORD *)(this + 28) )
          {
            v12 = *(_DWORD *)(this + 32);
            *(_BYTE *)(this + 20) &= ~2u;
            if ( v11 < v12 || v11 >= v12 + *(_DWORD *)(this + 4) )
              (*(void (__thiscall **)(int, int))(this + 36))(this, -1);
          }
          else
          {
            *(_BYTE *)(this + 20) |= 2u;
          }
        }
LABEL_26:
        if ( v14 >= a4 )
          v14 = a4 - 1;
        a3[v14] = 0;
      }
    }
  }
  else
  {
    sub_1022F000(this, a3, a4);
  }
}
