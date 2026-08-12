void __thiscall sub_1023FFC0(char *this, int a2)
{
  int v2; // ebx
  char *v3; // edi
  _DWORD *v4; // esi
  float *v5; // edi
  float *v6; // esi
  unsigned int v7; // ecx
  float *v8; // eax
  __int64 v9; // [esp+8h] [ebp-2Ch]
  int v10; // [esp+20h] [ebp-14h]
  int v12; // [esp+28h] [ebp-Ch]
  unsigned int v13; // [esp+2Ch] [ebp-8h]
  char **v14; // [esp+30h] [ebp-4h]

  v2 = a2;
  v3 = this;
  sub_101FC9D0((unsigned int *)(a2 + 108), (int)this);
  if ( *(_DWORD *)(a2 + 100) != *((_DWORD *)v3 + 208) )
  {
    (**(void (__thiscall ***)(int, int))a2)(a2, a2 + 100);
    *(_DWORD *)(a2 + 100) = *((_DWORD *)v3 + 208);
  }
  if ( *(_DWORD *)(a2 + 104) )
  {
    (**(void (__thiscall ***)(int, int))a2)(a2, a2 + 104);
    *(_DWORD *)(a2 + 104) = 0;
  }
  v12 = 1;
  v13 = 0;
  v14 = (char **)(v3 + 836);
  do
  {
    if ( *v14 )
    {
      v4 = sub_1012BF20(&dword_1069E3E0, 0, *v14, (int)v3, (int)v3, 0, 0);
      if ( v4 )
      {
        v10 = v12 | *(_DWORD *)(v2 + 104);
        if ( *(_DWORD *)(v2 + 104) != v10 )
        {
          (**(void (__thiscall ***)(int, int))v2)(v2, v2 + 104);
          *(_DWORD *)(v2 + 104) = v10;
        }
        if ( (v4[63] & 0x800) != 0 )
          sub_100DAE60((int)v4);
        v5 = (float *)(v13 + v2 + 4);
        v6 = (float *)(v4 + 145);
        v7 = 12;
        v8 = v6;
        while ( *(_DWORD *)((char *)v8 + v13 + v2 + 4 - (_DWORD)v6) == *(_DWORD *)v8 )
        {
          v7 -= 4;
          ++v8;
          if ( v7 < 4 )
          {
            v2 = a2;
            goto LABEL_17;
          }
        }
        v2 = a2;
        (**(void (__thiscall ***)(int, float *))a2)(a2, v5);
        *v5 = *v6;
        v5[1] = v6[1];
        v5[2] = v6[2];
LABEL_17:
        v3 = this;
      }
    }
    ++v14;
    v13 += 12;
    v12 = __ROL4__(v12, 1);
  }
  while ( v13 < 0x60 );
  HIDWORD(v9) = v3;
  LODWORD(v9) = v3;
  sub_1010DD80((_DWORD *)v3 + 200, v9, 0.0);
}
