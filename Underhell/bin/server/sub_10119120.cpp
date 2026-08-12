int __thiscall sub_10119120(int *this, int a2, char *Source, int a4)
{
  int v5; // ebx
  int v6; // esi
  int v7; // eax
  char *v8; // eax
  int v9; // eax
  int *v10; // esi
  int v11; // edi
  int v12; // ecx
  int result; // eax
  char *v14; // edi
  char Destination[384]; // [esp+Ch] [ebp-188h] BYREF
  int v16; // [esp+18Ch] [ebp-8h]
  int v17; // [esp+190h] [ebp-4h]
  int v18; // [esp+19Ch] [ebp+8h]

  sub_1042C820(a2);
  v5 = 0;
  if ( this[13] <= 0 )
  {
LABEL_5:
    v8 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v16 + 12))(v16);
    sub_104299C0(Destination, v8, 0x80u);
    sub_104299C0(&Destination[128], *(char **)(v17 + 36), 0x80u);
    sub_104299C0(&Destination[256], Source, 0x80u);
    v9 = this[11];
    v10 = this + 10;
    v11 = this[13];
    if ( v11 + 1 > v9 )
      sub_10117540(v10, v11 - v9 + 1);
    ++v10[3];
    v12 = *v10;
    result = v10[3] - v11 - 1;
    v10[4] = *v10;
    if ( result > 0 )
      result = (int)memcpy((void *)(384 * v11 + v12 + 384), (const void *)(384 * v11 + v12), 384 * result);
    v14 = (char *)(*v10 + 384 * v11);
    if ( v14 )
      qmemcpy(v14, Destination, 0x180u);
  }
  else
  {
    v18 = 0;
    while ( 1 )
    {
      v6 = v18 + this[10];
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 12))(v16);
      if ( !sub_104291C0(v7, v6, 128) )
        return sub_104299C0((char *)(384 * v5 + this[10] + 128), *(char **)(v17 + 36), 0x80u);
      v18 += 384;
      if ( ++v5 >= this[13] )
        goto LABEL_5;
    }
  }
  return result;
}
