int __thiscall sub_10239070(
        int (__thiscall ***this)(void *, int *, int *),
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        char *a7)
{
  int v7; // ebx
  int v8; // ebp
  char *v9; // esi
  int v11; // eax
  int v12; // ebx
  int v13; // ebp
  int v14; // eax
  int v15; // esi
  int v16; // ebx
  int v17; // eax
  char *v18; // edi
  int v19; // esi
  int v20; // edx
  int v21; // ebx
  int v22; // esi
  int result; // eax
  int v24; // [esp+3Ch] [ebp-34h] BYREF
  int v25; // [esp+40h] [ebp-30h] BYREF
  int v26; // [esp+44h] [ebp-2Ch] BYREF
  int v27; // [esp+48h] [ebp-28h] BYREF
  int v28[3]; // [esp+4Ch] [ebp-24h] BYREF
  int v29; // [esp+58h] [ebp-18h]
  char *v30; // [esp+5Ch] [ebp-14h]
  int v31; // [esp+68h] [ebp-8h]
  int v32; // [esp+74h] [ebp+4h]

  v7 = dword_1047CA70;
  v8 = *(_DWORD *)dword_1047CA70;
  v9 = a7;
  v11 = (**(int (__thiscall ***)(char *, int *, int *))a7)(a7, &v27, v28);
  (*(void (__thiscall **)(int, int))(v8 + 20))(v7, v11);
  v12 = dword_1047CA70;
  v13 = *(_DWORD *)dword_1047CA70;
  v14 = (**(int (__thiscall ***)(char *, char **, int *))v9)(v9, &a7, &v25);
  (*(void (__thiscall **)(int, int))(v13 + 40))(v12, v14);
  v15 = dword_1047CA70;
  v16 = *(_DWORD *)dword_1047CA70;
  v17 = (**this)(this, &v24, &v26);
  (*(void (__thiscall **)(int, int))(v16 + 40))(v15, v17);
  v18 = &a7[-v24];
  v19 = v25 - v26;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, *a2);
  v20 = a5 + a3;
  v21 = a4 + a6;
  v29 = (int)&v18[v27];
  v31 = a5 + a3;
  v30 = (char *)(v19 + v28[0]);
  v32 = a4;
  a7 = (char *)(a4 + a6);
  if ( v19 > a4 )
  {
    v32 = v19;
    (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
      dword_1047CA6C,
      a3,
      a4,
      a5 + a3,
      v19);
    v20 = v31;
  }
  if ( (int)v30 < v21 )
  {
    v22 = *(_DWORD *)dword_1047CA6C;
    a7 = v30;
    (*(void (__thiscall **)(int, int, char *, int, int))(v22 + 48))(dword_1047CA6C, a3, v30, v20, v21);
    v20 = v31;
  }
  if ( (int)v18 > a3 )
  {
    (*(void (__thiscall **)(int, int, int, char *, char *))(*(_DWORD *)dword_1047CA6C + 48))(
      dword_1047CA6C,
      a3,
      v32,
      v18,
      a7);
    v20 = v31;
  }
  result = v29;
  if ( v29 < v20 )
    return (*(int (__thiscall **)(int, int, int, int, char *))(*(_DWORD *)dword_1047CA6C + 48))(
             dword_1047CA6C,
             v29,
             v32,
             v20,
             a7);
  return result;
}
