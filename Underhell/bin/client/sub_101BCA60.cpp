void __cdecl sub_101BCA60(int a1)
{
  _BYTE *v2; // eax
  int v3; // edi
  void *v4; // eax
  void *v5; // eax
  int v6; // ebx
  int (__thiscall *v7)(int); // edx
  _BYTE *v8; // esi
  char *v9; // ebx
  int v10; // eax
  float *v11; // edi
  int v12; // eax
  int v13; // eax
  double v14; // [esp+0h] [ebp-19Ch]
  double ArgList; // [esp+60h] [ebp-13Ch]
  double v16; // [esp+68h] [ebp-134h]
  double v17; // [esp+70h] [ebp-12Ch]
  float v18; // [esp+7Ch] [ebp-120h]
  void *v19; // [esp+7Ch] [ebp-120h]
  char Buffer[256]; // [esp+8Ch] [ebp-110h] BYREF
  int v21; // [esp+18Ch] [ebp-10h]
  _BYTE *v22; // [esp+190h] [ebp-Ch]
  int v23; // [esp+194h] [ebp-8h]
  int i; // [esp+198h] [ebp-4h]
  int v25; // [esp+1A4h] [ebp+8h]

  if ( a1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578) )
    {
      v2 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 112))(dword_10439968);
      v22 = v2;
      if ( v2 )
      {
        if ( sub_1000E2D0(v2) )
        {
          if ( sub_10229D00(32) )
          {
            v3 = sub_10229D20("material_proxy_state");
            v25 = v3;
          }
          else
          {
            v25 = 0;
            v3 = 0;
          }
          v4 = (void *)(**(int (__thiscall ***)(int))a1)(a1);
          sub_1022ABA0("mtlName", v4);
          v5 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1);
          sub_1022ABA0("groupName", v5);
          v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 160))(a1);
          v7 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 164);
          v23 = v6;
          v21 = v7(a1);
          for ( i = 0; i < v23; ++i )
          {
            v8 = *(_BYTE **)(v21 + 4 * i);
            v9 = (char *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 4))(v8);
            switch ( v8[28] & 0xF )
            {
              case 0:
                v18 = ((double (__thiscall *)(_BYTE *))*(_DWORD *)(*(_DWORD *)v8 + 108))(v8);
                sub_1022ACC0(v9, v18);
                break;
              case 1:
                v19 = (void *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 24))(v8);
                sub_1022ABA0(v9, v19);
                break;
              case 2:
                v11 = (float *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 116))(v8);
                v12 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 120))(v8) - 2;
                if ( v12 )
                {
                  v13 = v12 - 1;
                  if ( v13 )
                  {
                    if ( v13 == 1 )
                    {
                      ArgList = *v11;
                      sub_10228370(Buffer, 0x100u, "vector4d: %f %f %f %f", SLOBYTE(ArgList));
                    }
                    else
                    {
                      Buffer[0] = 0;
                    }
                  }
                  else
                  {
                    v16 = *v11;
                    sub_10228370(Buffer, 0x100u, "vector3d: %f %f %f", SLOBYTE(v16));
                  }
                }
                else
                {
                  v17 = *v11;
                  sub_10228370(Buffer, 0x100u, "vector2d: %f %f", SLOBYTE(v17));
                }
                sub_1022ABA0(v9, Buffer);
                v3 = v25;
                break;
              case 4:
                v10 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 104))(v8);
                sub_1022ACA0(v9, v10);
                break;
              case 7:
                v14 = *(float *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 80))(v8);
                sub_10228370(Buffer, 0x100u, "matrix: %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f", SLOBYTE(v14));
                sub_1022ABA0(v9, Buffer);
                break;
              default:
                continue;
            }
          }
          if ( dword_103ED600 )
            (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_103ED600 + 28))(
              dword_103ED600,
              *((_DWORD *)v22 + 43),
              v3);
          sub_1022AF00(v3);
        }
      }
    }
  }
}
