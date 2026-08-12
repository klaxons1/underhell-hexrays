void __thiscall sub_100C4D40(int this, wchar_t *String1, const char *a3, float a4, char a5, wchar_t *a6)
{
  char v7; // al
  int v8; // ebx
  unsigned int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  bool v13; // c0
  int v14; // ecx
  const char *v15; // [esp+1Ch] [ebp-18h] BYREF
  int v16; // [esp+20h] [ebp-14h]
  float v17; // [esp+24h] [ebp-10h]
  float v18; // [esp+28h] [ebp-Ch]
  float v19; // [esp+2Ch] [ebp-8h] BYREF
  char v20; // [esp+33h] [ebp-1h]

  v19 = 0.0;
  v7 = sub_100BFD80(String1, &v19);
  v8 = (int)a3;
  v17 = 0.0;
  v20 = v7;
  v18 = 0.0;
  v15 = 0;
  v16 = 0;
  v9 = strlen(a3);
  sub_1022FAE0(&a3);
  sub_1022FB00(&a3, v8, v9);
  sub_1022FAF0(&a3);
  v15 = a3;
  v10 = sub_100C1E20((unsigned __int8 (__cdecl **)(int, int))(this + 280), (int)&v15);
  if ( v10 == -1 )
  {
    v17 = *((float *)off_103DC81C + 3);
    v16 = *((_DWORD *)off_103DC81C + 6);
    v18 = v19;
    sub_100C4B60(this + 280, (int)&v15);
LABEL_9:
    sub_100C3140((int *)this, String1, a4, v8, a5, a6);
    return;
  }
  v11 = *(_DWORD *)(this + 284);
  v12 = 32 * v10;
  v13 = *(float *)(v11 + v12 + 28) > 0.0;
  v14 = v11 + v12 + 16;
  if ( !v13 )
  {
    if ( *((_DWORD *)off_103DC81C + 6) <= *(_DWORD *)(v14 + 4) )
      return;
    goto LABEL_8;
  }
  if ( !v20 || *(float *)(v14 + 8) + *(float *)(v14 + 12) <= *((float *)off_103DC81C + 3) )
  {
LABEL_8:
    *(float *)(v14 + 8) = *((float *)off_103DC81C + 3);
    *(_DWORD *)(v14 + 4) = *((_DWORD *)off_103DC81C + 6);
    goto LABEL_9;
  }
}
