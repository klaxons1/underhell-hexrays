int __thiscall sub_100BF310(_DWORD *this, int a2)
{
  int v2; // esi
  int v3; // ecx
  unsigned int v4; // edx
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int *v8; // ecx
  unsigned int *v9; // edx
  _DWORD *v10; // edx
  int v11; // edi
  int v12; // eax
  _DWORD *v13; // ecx
  unsigned int v14; // edx
  int v15; // ebx
  char *v16; // eax
  char *v17; // eax
  char *v18; // eax
  char *v19; // eax
  char *v20; // eax
  int result; // eax
  int v22; // esi
  _BYTE *v23; // eax
  _DWORD *v24; // edi
  int v25; // esi
  _BYTE *v26; // eax
  const char *v27; // eax
  _BYTE v28[2048]; // [esp+Ch] [ebp-804h] BYREF
  _DWORD *v29; // [esp+80Ch] [ebp-4h]

  v2 = a2;
  v29 = this;
  v3 = *(_DWORD *)(a2 + 20);
  if ( v3 >= 8 )
  {
    v4 = *(_DWORD *)(a2 + 16);
    v5 = (unsigned __int8)v4;
    v6 = v3 - 8;
    *(_DWORD *)(a2 + 20) = v6;
    if ( v6 )
    {
      v7 = v4 >> 8;
    }
    else
    {
      v8 = *(unsigned int **)(v2 + 24);
      v9 = *(unsigned int **)(v2 + 28);
      *(_DWORD *)(v2 + 20) = 32;
      if ( v8 == v9 )
      {
        *(_DWORD *)(v2 + 20) = 1;
        *(_DWORD *)(v2 + 16) = 0;
        *(_DWORD *)(v2 + 24) = v8 + 1;
        goto LABEL_19;
      }
      if ( v8 > v9 )
      {
        *(_BYTE *)(v2 + 4) = 1;
        *(_DWORD *)(v2 + 16) = 0;
        goto LABEL_19;
      }
      v7 = *v8;
      *(_DWORD *)(v2 + 24) = v8 + 1;
    }
    goto LABEL_18;
  }
  v10 = *(_DWORD **)(a2 + 28);
  v11 = *(_DWORD *)(a2 + 16);
  v12 = 8 - v3;
  v13 = *(_DWORD **)(a2 + 24);
  if ( v13 == v10 )
  {
    *(_DWORD *)(a2 + 20) = 1;
    *(_DWORD *)(v2 + 16) = 0;
    *(_BYTE *)(v2 + 4) = 1;
LABEL_14:
    *(_DWORD *)(v2 + 24) = v13 + 1;
    goto LABEL_15;
  }
  if ( v13 <= v10 )
  {
    *(_DWORD *)(a2 + 16) = *v13;
    goto LABEL_14;
  }
  *(_BYTE *)(a2 + 4) = 1;
  *(_DWORD *)(v2 + 16) = 0;
LABEL_15:
  if ( *(_BYTE *)(v2 + 4) )
  {
    v5 = 0;
    goto LABEL_19;
  }
  v14 = *(_DWORD *)(v2 + 16);
  v15 = (v14 & dword_1039BF80[v12]) << *(_DWORD *)(v2 + 20);
  *(_DWORD *)(v2 + 20) = 32 - v12;
  v7 = v14 >> v12;
  v5 = v15 | v11;
LABEL_18:
  *(_DWORD *)(v2 + 16) = v7;
LABEL_19:
  a2 = v5;
  sub_1022C220(v28, 2048, 0, 0);
  v16 = (char *)((int (__thiscall *)(int (__stdcall ***)(int, int, int), _BYTE *, int *))(*off_103E6DA4)[2])(
                  off_103E6DA4,
                  v28,
                  &a2);
  sub_102282F0(byte_10430138, v16, 0x100u);
  sub_1022C220(v28, 2048, 0, 0);
  v17 = (char *)((int (__thiscall *)(int (__stdcall ***)(int, int, int), _BYTE *, _DWORD))(*off_103E6DA4)[2])(
                  off_103E6DA4,
                  v28,
                  0);
  sub_102282F0(byte_10430238, v17, 0x100u);
  sub_100B8D00(byte_10430238);
  sub_1022C220(v28, 2048, 0, 0);
  v18 = (char *)((int (__thiscall *)(int (__stdcall ***)(int, int, int), _BYTE *, _DWORD))(*off_103E6DA4)[2])(
                  off_103E6DA4,
                  v28,
                  0);
  sub_102282F0(byte_10430338, v18, 0x100u);
  sub_100B8D00(byte_10430338);
  sub_1022C220(v28, 2048, 0, 0);
  v19 = (char *)((int (__thiscall *)(int (__stdcall ***)(int, int, int), _BYTE *, _DWORD))(*off_103E6DA4)[2])(
                  off_103E6DA4,
                  v28,
                  0);
  sub_102282F0(byte_10430438, v19, 0x100u);
  sub_100B8D00(byte_10430438);
  sub_1022C220(v28, 2048, 0, 0);
  v20 = (char *)((int (__thiscall *)(int (__stdcall ***)(int, int, int), _BYTE *, _DWORD))(*off_103E6DA4)[2])(
                  off_103E6DA4,
                  v28,
                  0);
  sub_102282F0(byte_10430538, v20, 0x100u);
  sub_100B8D00(byte_10430538);
  result = dword_1043000C;
  if ( *(_DWORD *)(dword_1043000C + 48) )
  {
    result = a2 - 1;
    switch ( a2 )
    {
      case 1:
        byte_10430638 = 1;
        sub_10228370(byte_10430639, 0xFFu, byte_10430138, (char)byte_10430238);
        goto LABEL_25;
      case 2:
        sub_10228370(&byte_10430638, 0x100u, byte_10430138, (char)byte_10430238);
LABEL_25:
        v27 = sub_100B8CB0(&byte_10430638);
        result = Msg("%s", v27);
        break;
      case 3:
        sub_10228370(&byte_10430638, 0x100u, byte_10430138, (char)byte_10430238);
        v24 = v29;
        v25 = *v29;
        v26 = sub_100B8CB0(&byte_10430638);
        result = (*(int (**)(_DWORD *, _DWORD, const char *, ...))(v25 + 68))(v24, 0, "%s", v26);
        break;
      case 4:
        sub_10228370(&byte_10430638, 0x100u, byte_10430138, (char)byte_10430238);
        v22 = (int)*off_103E7304;
        v23 = sub_100B8CB0(&byte_10430638);
        result = (*(int (__thiscall **)(int (__stdcall ***)(int, int, int, int), _BYTE *))(v22 + 8))(off_103E7304, v23);
        break;
      default:
        return result;
    }
  }
  return result;
}
