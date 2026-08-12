void __thiscall sub_1027D430(int *this)
{
  int v2; // eax
  __int16 *v3; // eax
  __int16 v4; // cx
  char v5; // bl
  int v6; // edx
  wint_t *v7; // ebp
  wint_t v8; // ax
  wint_t v9; // di
  int v10; // ebp
  __int16 v11; // [esp+12h] [ebp-12h]
  wint_t *v12; // [esp+14h] [ebp-10h] BYREF
  wint_t *v13; // [esp+18h] [ebp-Ch] BYREF
  int v14; // [esp+1Ch] [ebp-8h]
  int v15; // [esp+20h] [ebp-4h]

  v15 = (*(int (__thiscall **)(int *))(*this + 132))(this);
  v2 = this[6];
  this[17] = 0;
  this[23] = 0;
  v13 = (wint_t *)v2;
  v3 = (__int16 *)this[6];
  v4 = *v3;
  v5 = 0;
  v6 = 0;
  v14 = 0;
  v11 = 257;
  if ( v4 == 13 || v4 == 10 )
    v6 = 1;
  v7 = (wint_t *)&v3[v6];
  v8 = *v7;
  v12 = v7;
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = v8;
      if ( iswspace(v8) )
      {
        v5 = 0;
      }
      else if ( !v5 )
      {
        v13 = v7;
        v5 = 1;
        HIBYTE(v11) = v11;
      }
      v10 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 284))(dword_1047CA6C, v15, v9);
      if ( !iswcntrl(v9) )
        LOBYTE(v11) = 0;
      if ( v10 + v14 > this[10] || v9 == 13 || v9 == 10 )
      {
        v5 = 0;
        LOBYTE(v11) = 1;
        if ( v9 != 13 && v9 != 10 )
        {
          if ( HIBYTE(v11) )
          {
            sub_10258C50(this + 14, this[17], &v12);
          }
          else
          {
            sub_10258C50(this + 14, this[17], &v13);
            v12 = v13 - 1;
          }
        }
        v14 = 0;
      }
      else
      {
        v14 += v10;
      }
      v8 = *++v12;
      if ( !*v12 )
        break;
      v7 = v12;
    }
  }
  sub_1027D2B0(this);
}
