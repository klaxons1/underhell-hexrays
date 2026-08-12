int __cdecl sub_101EA3D0(int a1, int a2)
{
  const char *v2; // eax
  const char *v3; // eax
  int result; // eax
  char *v5; // eax
  int v6; // eax
  unsigned __int8 (__cdecl **v7)(int, int); // esi
  int v8; // eax
  char *v9; // eax
  int v10; // eax
  unsigned __int8 (__cdecl *v11)(int, int); // ecx
  int v12; // edi
  int v13; // ebp
  _DWORD *v14; // eax
  bool v15; // zf
  int v16; // ecx
  int v17; // [esp+10h] [ebp-11Ch] BYREF
  int v18; // [esp+14h] [ebp-118h]
  char *v19; // [esp+18h] [ebp-114h] BYREF
  int v20; // [esp+1Ch] [ebp-110h]
  unsigned __int8 (__cdecl *v21)(int, int); // [esp+20h] [ebp-10Ch] BYREF
  char *v22; // [esp+24h] [ebp-108h] BYREF
  char Destination[256]; // [esp+2Ch] [ebp-100h] BYREF

  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 4))(a1, 1);
  v2 = (const char *)(**(int (__thiscall ***)(int))a1)(a1);
  if ( _stricmp(v2, "{") )
    (*(void (__cdecl **)(int, const char *))(*(_DWORD *)a1 + 12))(a1, "expecting {\n");
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 4))(a1, 1);
  if ( !strlen((const char *)(**(int (__thiscall ***)(int))a1)(a1)) )
    return (*(int (__cdecl **)(int, const char *))(*(_DWORD *)a1 + 12))(a1, "expecting scalesettings data\n");
  while ( 1 )
  {
    v3 = (const char *)(**(int (__thiscall ***)(int))a1)(a1);
    result = _stricmp(v3, "}");
    if ( !result )
      break;
    v5 = (char *)(**(int (__thiscall ***)(int))a1)(a1);
    sub_102282F0(Destination, v5, 0x100u);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 4))(a1, 0);
    v6 = (**(int (__thiscall ***)(int))a1)(a1);
    v18 = sub_10227CC0(v6);
    if ( v18 <= 0 )
      v18 = 100;
    v22 = Destination;
    v7 = (unsigned __int8 (__cdecl **)(int, int))(a2 + 356);
    v8 = sub_10009730((unsigned __int8 (__cdecl **)(int, int))(a2 + 356), (int)&v22);
    if ( v8 == -1 )
    {
      v9 = (char *)(*(int (__thiscall **)(_DWORD, unsigned int))(*g_pMemAlloc + 4))(
                     g_pMemAlloc,
                     strlen(Destination) + 1);
      if ( v9 )
        strcpy(v9, Destination);
      else
        v9 = 0;
      v19 = v9;
      v20 = 100;
      sub_10009120(v7, (int)&v19, &v21, (_BYTE *)&v17 + 3);
      v10 = sub_100CC520(v7);
      v11 = v21;
      v12 = v10;
      v13 = 24 * v10;
      v14 = (_DWORD *)(24 * v10 + *(_DWORD *)(a2 + 360));
      v15 = (unsigned __int8 (__cdecl *)(int, int))((char *)v21 + 1) == 0;
      v14[2] = v21;
      v14[1] = -1;
      *v14 = -1;
      v14[3] = 0;
      if ( v15 )
      {
        *(_DWORD *)(a2 + 372) = v12;
      }
      else if ( HIBYTE(v17) )
      {
        *(_DWORD *)(*(_DWORD *)(a2 + 360) + 24 * (_DWORD)v11) = v12;
      }
      else
      {
        *(_DWORD *)(*(_DWORD *)(a2 + 360) + 24 * (_DWORD)v11 + 4) = v12;
      }
      sub_10009A50(v7, v12);
      v16 = *(_DWORD *)(a2 + 360);
      ++*(_DWORD *)(a2 + 376);
      if ( v16 + v13 != -16 )
      {
        *(_DWORD *)(v16 + v13 + 16) = v19;
        *(_DWORD *)(v16 + v13 + 20) = v20;
      }
      v8 = v12;
    }
    *(_DWORD *)(*(_DWORD *)(a2 + 360) + 24 * v8 + 20) = v18;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 4))(a1, 1);
    if ( !strlen((const char *)(**(int (__thiscall ***)(int))a1)(a1)) )
      return (*(int (__cdecl **)(int, const char *))(*(_DWORD *)a1 + 12))(a1, "expecting scalesettings data\n");
  }
  return result;
}
