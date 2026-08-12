int *__thiscall sub_100CF240(const char **this, int *a2)
{
  bool v3; // zf
  int v4; // edx
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  const char *v9; // ebx
  const char *v10; // edi
  int v11; // ecx
  const char *v12; // eax
  const char *v13; // edx
  bool v14; // sf
  const char *v15; // ecx
  int *result; // eax
  _DWORD v17[4]; // [esp+Ch] [ebp-28h] BYREF
  const char *v18; // [esp+1Ch] [ebp-18h]
  const char *v19; // [esp+20h] [ebp-14h]
  int v20; // [esp+24h] [ebp-10h]
  int v21; // [esp+28h] [ebp-Ch]
  int v22; // [esp+2Ch] [ebp-8h]
  int v23; // [esp+30h] [ebp-4h]

  ++dword_103E0D1C;
  if ( !*((_BYTE *)a2 + 16) )
    sub_10109D80(a2);
  do
  {
    v3 = this[3] == 0;
    v4 = (int)a2;
    v5 = dword_103E0D1C;
    v6 = a2[1];
    v7 = *a2;
    v23 = dword_103E0D1C;
    this[4] = (const char *)a2;
    if ( v3 )
      this[3] = (const char *)a2[2];
    if ( v6 > 0 )
    {
      v8 = v7 + 40;
      v22 = v8;
      v21 = v6;
      while ( 1 )
      {
        this[2] = (const char *)(v8 - 40);
        v20 = *(__int16 *)(v8 - 22);
        if ( (v20 & 0x8000) == 0 )
        {
          if ( *(_DWORD *)v8 )
            *(_DWORD *)(*(_DWORD *)v8 + 44) = v5;
          v9 = this[2];
          if ( *((_DWORD *)v9 + 11) != v5 )
          {
            v10 = &(*this)[*(_DWORD *)&v9[4 * (_DWORD)this[1] + 8]];
            switch ( *(_DWORD *)v9 )
            {
              case 1:
                sub_100CE120(this, (int)v10, *((unsigned __int16 *)v9 + 8));
                break;
              case 2:
                sub_100CE170(this, (int)v10, *((unsigned __int16 *)v9 + 8));
                break;
              case 3:
                sub_100CE240(this, (int)v10, *((unsigned __int16 *)v9 + 8));
                break;
              case 5:
                sub_100CE060(this, (int)v10, *((unsigned __int16 *)v9 + 8));
                break;
              case 6:
                sub_100CE0B0(this, (int)v10, *((unsigned __int16 *)v9 + 8));
                break;
              case 7:
                sub_100CE010(this, (int)v10, *((unsigned __int16 *)v9 + 8));
                break;
              case 8:
                if ( !v10 )
                  v10 = Locale;
                sub_100CDF50(this, "%s\n", v10);
                break;
              case 9:
                sub_100CE1D0(this, (int)v10, *((unsigned __int16 *)v9 + 8));
                break;
              case 0xA:
                v11 = *((_DWORD *)v9 + 8);
                v12 = this[3];
                v18 = *this;
                v13 = *(const char **)(v11 + 8);
                v19 = v12;
                this[3] = v13;
                sub_1022D3E0(v17);
                sub_1022D0A0(*((void **)this[2] + 1));
                sub_100CCED0((int *)this + 5, (int)this[8], (int)v17);
                v3 = (v20 & 0x40) == 0;
                *this = v10;
                if ( !v3 && !this[1] )
                  *this = *(const char **)v10;
                sub_100CF070(this, v23, (int)a2, **((_DWORD **)this[2] + 8), *(_DWORD *)(*((_DWORD *)this[2] + 8) + 4));
                sub_100CEE00(this + 5, (int)(this[8] - 1));
                v14 = v17[2] < 0;
                v15 = v18;
                this[3] = v19;
                this[2] = v9;
                *this = v15;
                if ( !v14 )
                {
                  if ( v17[0] )
                  {
                    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v17[0]);
                    v17[0] = 0;
                  }
                  v17[1] = 0;
                }
                break;
              default:
                break;
            }
          }
        }
        v8 = v22 + 52;
        v3 = v21-- == 1;
        v22 += 52;
        if ( v3 )
          break;
        v5 = v23;
      }
      v4 = (int)a2;
    }
    this[3] = 0;
    result = *(int **)(v4 + 12);
    a2 = result;
  }
  while ( result );
  return result;
}
