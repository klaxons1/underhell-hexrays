void __thiscall sub_1001A5F0(const void **this)
{
  _DWORD *v2; // edi
  const void *v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // ebx
  int *v6; // ecx
  int v7; // edx
  int v8; // eax
  char *v9; // eax
  int v10; // edi
  const void *v11; // ecx
  _BYTE *v12; // eax
  char *v13; // edx
  int v14; // eax
  _DWORD *v15; // ecx
  _DWORD *v16; // eax
  const void *v17; // [esp+8h] [ebp-14h]
  _DWORD *v18; // [esp+Ch] [ebp-10h]
  int v19; // [esp+Ch] [ebp-10h]
  const void *v20; // [esp+10h] [ebp-Ch]
  char *i; // [esp+14h] [ebp-8h]
  _DWORD *v22; // [esp+18h] [ebp-4h]
  int v23; // [esp+18h] [ebp-4h]

  v2 = *this;
  if ( *this )
  {
    if ( !v2[485] && (*(int (__thiscall **)(_DWORD *))(v2[1] + 36))(v2 + 1) )
      sub_10026520(v2);
    v3 = (const void *)v2[485];
    v17 = v3;
    if ( v3 && *(_DWORD *)v3 )
    {
      v4 = (_DWORD *)sub_10025310(*this);
      v5 = v4;
      v18 = v4;
      v22 = v4 ? sub_10001EA0(v4) : 0;
      if ( v5 != this[1] || v22 != this[2] || v3 != this[3] )
      {
        sub_1001A510((int *)this + 5);
        sub_1001A510((int *)this + 10);
        if ( v18 && v22 )
        {
          this[1] = v18;
          this[3] = v3;
          this[2] = v22;
          sub_1001A5A0(this + 10, *(_DWORD *)(*(_DWORD *)v3 + 156) / 8 + 1);
          memset((void *)this[10], 0, (size_t)this[13]);
          v6 = (int *)this[3];
          v7 = *v6;
          v8 = *(_DWORD *)(*v6 + 160);
          this[4] = (const void *)0x40000;
          v9 = (char *)(v7 + v8);
          v23 = 0;
          if ( *(int *)(*v6 + 156) > 0 )
          {
            for ( i = v9; ; v9 = i )
            {
              v10 = sub_1001E140((int)this[2], &v9[*(_DWORD *)v9]);
              if ( v10 >= 0 )
              {
                v11 = this[8];
                LOWORD(v19) = v23;
                v12 = this[6];
                HIWORD(v19) = v10;
                v20 = v11;
                if ( (int)((char *)v11 + 1) > (int)v12 )
                {
                  sub_1010AFF0((_BYTE *)v11 - v12 + 1);
                  v11 = v20;
                }
                this[8] = (char *)this[8] + 1;
                v13 = (char *)this[5];
                v14 = (_BYTE *)this[8] - (_BYTE *)v11 - 1;
                this[9] = v13;
                if ( v14 > 0 )
                {
                  memcpy(&v13[4 * (_DWORD)v11 + 4], &v13[4 * (_DWORD)v11], 4 * v14);
                  v11 = v20;
                }
                v15 = (char *)this[5] + 4 * (_DWORD)v11;
                if ( v15 )
                  *v15 = v19;
                *((_BYTE *)this[10] + (v23 >> 3)) |= 1 << (v23 & 7);
                v16 = this[2];
                if ( (*(_DWORD *)(v16[11] + 4 * v10) & 0x40000) == 0 )
                {
                  this[4] = (const void *)524032;
                  Warning(
                    "Performance warning: Merge with '%s'. Mark bone '%s' in model '%s' as being used by bone merge in the .qc!\n",
                    (const char *)(*(_DWORD *)v17 + 12),
                    (const char *)(*v16
                                 + 216 * v10
                                 + *(_DWORD *)(*v16 + 160)
                                 + *(_DWORD *)(216 * v10 + *(_DWORD *)(*v16 + 160) + *v16)),
                    (const char *)(*v16 + 12));
                }
              }
              i += 216;
              if ( ++v23 >= *(_DWORD *)(*(_DWORD *)this[3] + 156) )
                break;
            }
          }
          if ( !this[8] )
            this[4] = 0;
        }
        else
        {
          this[1] = 0;
          this[2] = 0;
          this[3] = 0;
          this[4] = 0;
        }
      }
    }
  }
}
