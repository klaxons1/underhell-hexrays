int __thiscall sub_10244380(void *this, int a2, float *a3, char *a4, int a5)
{
  char *v5; // edi
  char v6; // al
  bool v7; // zf
  void *v8; // ebx
  char *v9; // eax
  const char *v10; // esi
  int v11; // ebx
  char *v12; // eax
  int v13; // esi
  unsigned __int8 (__thiscall *v14)(void *); // eax
  int v15; // edi
  int v16; // ebp
  int v17; // eax
  int result; // eax
  double v19; // st7
  char v20; // [esp+12h] [ebp-10Ah]
  char v21; // [esp+13h] [ebp-109h]
  int v22; // [esp+14h] [ebp-108h] BYREF
  void *v23; // [esp+18h] [ebp-104h]
  char Str[256]; // [esp+1Ch] [ebp-100h] BYREF

  v5 = a4;
  v6 = *a4;
  v7 = *a4 == 40;
  v8 = this;
  v23 = this;
  v20 = 0;
  v21 = 0;
  if ( !v7 )
  {
    if ( v6 == 114 || v6 == 82 )
    {
      v20 = 1;
    }
    else
    {
      if ( v6 != 99 && v6 != 67 )
        goto LABEL_16;
      v21 = 1;
    }
    v5 = a4 + 1;
    goto LABEL_16;
  }
  v5 = a4 + 1;
  if ( strstr(a4 + 1, ")") )
  {
    sub_102282F0(Str, v5, 256);
    v9 = strstr(Str, ":");
    if ( v9 )
    {
      *v9 = 0;
      v10 = v9 + 1;
      v11 = sub_10244340(Str);
      v12 = strstr(v10, ")");
      if ( v12 )
      {
        *v12 = 0;
        if ( (int)strlen(v10) > 0 )
        {
          *(_BYTE *)(a2 + 36) = 1;
          *(_WORD *)(a2 + 38) = *sub_10230F20(dword_1047CCCC, (__int16 *)&v22, v10);
          *(_DWORD *)(a2 + 40) = v11;
        }
      }
      v8 = v23;
    }
    v5 = strstr(v5, ")") + 1;
  }
LABEL_16:
  v13 = atoi(v5);
  v14 = *(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)v8 + 84);
  v22 = v13;
  if ( v14(v8) )
  {
    v15 = dword_1047CA7C;
    v16 = *(_DWORD *)dword_1047CA7C;
    v17 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)v8 + 80))(v8, v13);
    v13 = (*(int (__thiscall **)(int, int))(v16 + 52))(v15, v17);
    v22 = v13;
  }
  if ( v20 )
  {
    v13 = a5 - v13;
    v22 = v13;
  }
  if ( v21 )
  {
    result = a5 / 2;
    v22 = a5 / 2 + v13;
    v19 = (double)v22;
  }
  else
  {
    v19 = (double)v22;
    result = (int)a3;
  }
  *a3 = v19;
  return result;
}
