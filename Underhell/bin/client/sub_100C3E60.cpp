int __thiscall sub_100C3E60(_DWORD *this, _DWORD *a2)
{
  int v2; // esi
  int v3; // edi
  char **v4; // eax
  char **v5; // ebx
  char *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int result; // eax
  char ***v12; // edi
  int v13; // [esp-4h] [ebp-34h]
  char Buffer[32]; // [esp+Ch] [ebp-24h] BYREF
  _DWORD *v15; // [esp+2Ch] [ebp-4h]

  v13 = a2[3] - 1;
  v15 = this;
  v2 = RandomInt(0, v13);
  v3 = RandomInt(0, *(_DWORD *)(84 * v2 + *a2 + 40) - 1);
  v4 = (char **)sub_100DDA40(16);
  v5 = 0;
  if ( v4 )
  {
    *v4 = 0;
    v4[3] = 0;
    v4[1] = (char *)-1;
    v4[2] = (char *)-1;
    v5 = v4;
  }
  sub_10228370(Buffer, 0x20u, "%d", v3);
  v6 = (char *)(*(int (__thiscall **)(_DWORD, unsigned int))(*g_pMemAlloc + 4))(g_pMemAlloc, strlen(Buffer) + 1);
  if ( v6 )
    strcpy(v6, Buffer);
  else
    v6 = 0;
  v5[2] = (char *)v2;
  v7 = v15;
  *v5 = v6;
  v5[1] = (char *)v3;
  v5[3] = 0;
  v8 = v7[5];
  v9 = v7[3];
  if ( v8 + 1 > v9 )
    sub_1010AFF0(v8 - v9 + 1);
  ++v7[5];
  v10 = v7[2];
  result = v7[5] - v8 - 1;
  v7[6] = v10;
  if ( result > 0 )
    result = (int)memcpy((void *)(v10 + 4 * v8 + 4), (const void *)(v10 + 4 * v8), 4 * result);
  v12 = (char ***)(v7[2] + 4 * v8);
  if ( v12 )
    *v12 = v5;
  return result;
}
