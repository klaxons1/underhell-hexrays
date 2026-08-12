int __thiscall sub_1042E470(int this, char *a2, int a3)
{
  char v4; // bl
  int v5; // edi
  char v6; // al
  char v7; // al
  _BYTE *v8; // ebx
  char v9; // al
  unsigned int *v10; // ebx
  unsigned int v11; // eax
  int v12; // ecx
  char *v13; // eax
  float *v14; // ebx
  char *v15; // edx
  int result; // eax
  char *EndPtr; // [esp+4h] [ebp-8h] BYREF
  int v18; // [esp+8h] [ebp-4h]

  if ( !*(_BYTE *)(this + 20) && (*(_BYTE *)(this + 21) & 1) != 0 )
  {
    v4 = *a2;
    v18 = 0;
    if ( !v4 )
      return v18;
    v5 = a3 - 4;
    while ( 1 )
    {
      ++a2;
      if ( *(_DWORD *)(this + 12) >= *(_DWORD *)(this + 28) )
      {
        *(_BYTE *)(this + 20) |= 2u;
        return v18;
      }
      if ( v4 == 32 )
      {
        sub_1042D6E0((_DWORD *)this);
      }
      else if ( v4 == 37 )
      {
        v7 = *a2++;
        if ( !v7 )
          return v18;
        switch ( v7 )
        {
          case 'c':
            v8 = *(_BYTE **)(v5 + 4);
            v5 += 4;
            if ( (*(_BYTE *)(this + 20) & 2) != 0 || (v9 = sub_1042D170(this, 1), *(_BYTE *)(this + 20) &= ~2u, !v9) )
            {
              result = v18;
              *v8 = 0;
              return result;
            }
            *v8 = *(_BYTE *)(*(_DWORD *)this - *(_DWORD *)(this + 32) + (*(_DWORD *)(this + 12))++);
            ++v18;
            break;
          case 'd':
          case 'i':
            v10 = *(unsigned int **)(v5 + 4);
            v5 += 4;
            a3 = 128;
            if ( !sub_1042D1D0(this, 0, &a3) )
              goto LABEL_34;
            v11 = strtol((const char *)(*(_DWORD *)(this + 12) + *(_DWORD *)this - *(_DWORD *)(this + 32)), &EndPtr, 10);
            goto LABEL_19;
          case 'f':
            v14 = *(float **)(v5 + 4);
            v5 += 4;
            a3 = 128;
            if ( !sub_1042D1D0(this, 0, &a3) )
            {
              result = v18;
              *v14 = 0.0;
              return result;
            }
            *v14 = strtod((const char *)(*(_DWORD *)(this + 12) + *(_DWORD *)this - *(_DWORD *)(this + 32)), &EndPtr);
LABEL_20:
            v12 = *(_DWORD *)(this + 12);
            v13 = &EndPtr[*(_DWORD *)(this + 32) - v12 - *(_DWORD *)this];
            if ( !v13 )
              return v18;
            ++v18;
            *(_DWORD *)(this + 12) = &v13[v12];
            break;
          case 's':
            v15 = *(char **)(v5 + 4);
            v5 += 4;
            sub_1042E170(this, v15, 0);
            ++v18;
            break;
          case 'u':
            v10 = *(unsigned int **)(v5 + 4);
            v5 += 4;
            a3 = 128;
            if ( !sub_1042D1D0(this, 0, &a3) )
              goto LABEL_34;
            v11 = strtoul(
                    (const char *)(*(_DWORD *)(this + 12) + *(_DWORD *)this - *(_DWORD *)(this + 32)),
                    &EndPtr,
                    10);
            goto LABEL_19;
          case 'x':
            v10 = *(unsigned int **)(v5 + 4);
            v5 += 4;
            a3 = 128;
            if ( !sub_1042D1D0(this, 0, &a3) )
            {
LABEL_34:
              result = v18;
              *v10 = 0;
              return result;
            }
            v11 = strtol((const char *)(*(_DWORD *)(this + 12) + *(_DWORD *)this - *(_DWORD *)(this + 32)), &EndPtr, 16);
LABEL_19:
            *v10 = v11;
            goto LABEL_20;
          default:
            return v18;
        }
      }
      else
      {
        if ( (*(_BYTE *)(this + 20) & 2) != 0 )
          return v18;
        v6 = sub_1042D170(this, 1);
        *(_BYTE *)(this + 20) &= ~2u;
        if ( !v6 || v4 != *(_BYTE *)(*(_DWORD *)(this + 12) - *(_DWORD *)(this + 32) + *(_DWORD *)this) )
          return v18;
        ++*(_DWORD *)(this + 12);
      }
      v4 = *a2;
      if ( !*a2 )
        return v18;
    }
  }
  return 0;
}
