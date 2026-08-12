void __thiscall sub_100CF070(const char **this, int a2, int a3, int a4, int a5)
{
  bool v6; // zf
  int v8; // ecx
  const char *v9; // ebx
  const char *v10; // edi
  int v11; // ecx
  const char *v12; // eax
  const char *v13; // edx
  const char *v14; // eax
  int v15[4]; // [esp+4h] [ebp-1Ch] BYREF
  const char *v16; // [esp+14h] [ebp-Ch]
  const char *v17; // [esp+18h] [ebp-8h]
  int v18; // [esp+1Ch] [ebp-4h]
  int v19; // [esp+30h] [ebp+10h]
  int v20; // [esp+34h] [ebp+14h]

  v6 = this[3] == 0;
  this[4] = (const char *)a3;
  if ( v6 )
    this[3] = *(const char **)(a3 + 8);
  if ( a5 > 0 )
  {
    v8 = a4 + 40;
    v20 = a4 + 40;
    v19 = a5;
    do
    {
      this[2] = (const char *)(v8 - 40);
      v18 = *(__int16 *)(v8 - 22);
      if ( (v18 & 0x8000) == 0 )
      {
        if ( *(_DWORD *)v8 )
          *(_DWORD *)(*(_DWORD *)v8 + 44) = a2;
        v9 = this[2];
        if ( *((_DWORD *)v9 + 11) != a2 )
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
              v16 = *this;
              v13 = *(const char **)(v11 + 8);
              v17 = v12;
              this[3] = v13;
              sub_1022D3E0(v15);
              sub_1022D0A0(*((void **)this[2] + 1));
              sub_100CCED0((int *)this + 5, (int)this[8], (int)v15);
              v6 = (v18 & 0x40) == 0;
              *this = v10;
              if ( !v6 && !this[1] )
                *this = *(const char **)v10;
              sub_100CF070(a2, a3, **((_DWORD **)this[2] + 8), *(_DWORD *)(*((_DWORD *)this[2] + 8) + 4));
              sub_100CEE00(this + 5, (int)(this[8] - 1));
              v14 = v17;
              *this = v16;
              this[3] = v14;
              this[2] = v9;
              sub_10008580(v15);
              break;
            default:
              break;
          }
        }
      }
      v8 = v20 + 52;
      v6 = v19-- == 1;
      v20 += 52;
    }
    while ( !v6 );
  }
  this[3] = 0;
}
