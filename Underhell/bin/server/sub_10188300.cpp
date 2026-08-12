char __thiscall sub_10188300(void **this)
{
  int v2; // ebx
  _BYTE *v3; // edi
  char result; // al
  int v5; // ecx
  unsigned int v6; // eax
  int *v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // ecx
  int v13; // eax
  int v14; // edi
  int v15; // eax
  float v16[4]; // [esp+Ch] [ebp-14h] BYREF
  int i; // [esp+1Ch] [ebp-4h]

  v2 = 0;
  sub_100DCB50(this[1], 0);
  v3 = this[1];
  result = v3[356] >> 2;
  if ( (v3[356] & 4) == 0 )
  {
    if ( (*((_DWORD *)v3 + 63) & 0x1000) != 0 )
      sub_100DAFD0((int)this[1]);
    v16[0] = *((float *)v3 + 119);
    v16[1] = *((float *)v3 + 120);
    v16[2] = *((float *)v3 + 121);
    for ( i = 0; i < (int)this[5]; ++i )
    {
      v5 = *(_DWORD *)((char *)this[2] + v2 + 88);
      v6 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( v6 != -1 )
      {
        v7 = &dword_1069E3E4[4 * (v6 & 0xFFF)];
        if ( v7[1] == v6 >> 12 )
        {
          v8 = *v7;
          if ( v8 )
          {
            v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 16))(v8);
            v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
            v11 = v10;
            if ( v10 )
            {
              v12 = *(_DWORD *)(v10 + 12);
              if ( v12 )
              {
                v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 20))(v12);
                LODWORD(v16[3]) = v13;
                if ( v13 )
                {
                  if ( (void *)v13 != this[1] )
                  {
                    v14 = *(_DWORD *)(v11 + 12);
                    if ( v14 )
                      v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 20))(v14);
                    else
                      v15 = 0;
                    *(_DWORD *)((char *)this[2] + v2 + 88) = v15;
                    sub_100DD660((int)this[1], (float *)((char *)this[2] + v2));
                    sub_101C6C90(this[1], (char *)this[2] + v2 + 12);
                  }
                }
              }
            }
          }
        }
      }
      v2 += 96;
    }
    sub_100DD660((int)this[1], v16);
    return (*((int (__thiscall **)(void **))*this + 1))(this);
  }
  return result;
}
