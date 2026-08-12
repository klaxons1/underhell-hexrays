int __usercall sub_10173110@<eax>(int a1@<ebx>, int a2@<edi>, int a3@<esi>, int a4, int a5, int a6, int a7, int a8)
{
  int result; // eax
  _DWORD *v9; // esi
  int v10; // edi
  char *v11; // eax
  int v12; // edi
  int (__thiscall ***v13)(_DWORD); // eax
  int (__thiscall ***v14)(_DWORD); // ebx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  char Buffer[512]; // [esp+0h] [ebp-6A0h] BYREF
  char v23[512]; // [esp+200h] [ebp-4A0h] BYREF
  char v24[512]; // [esp+400h] [ebp-2A0h] BYREF
  _BYTE v25[112]; // [esp+600h] [ebp-A0h] BYREF
  int v26[5]; // [esp+670h] [ebp-30h] BYREF
  char ArgList[16]; // [esp+684h] [ebp-1Ch] BYREF
  int v28; // [esp+694h] [ebp-Ch]
  int v29; // [esp+698h] [ebp-8h]
  char v30; // [esp+69Fh] [ebp-1h] BYREF

  result = dword_1044446C;
  if ( !*(_DWORD *)(dword_1044446C + 48) )
  {
    result = sub_1007A6A0(off_103DCD78, a8);
    v9 = (_DWORD *)result;
    if ( result )
    {
      result = (*(int (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)dword_1041315C + 32))(dword_1041315C, a7, v25);
      if ( v26[0] )
      {
        v10 = *(_DWORD *)dword_1047C96C;
        v11 = sub_10076640("decals/playerlogo%2.2d", a7);
        result = (*(int (__thiscall **)(int, char *, const char *, int, _DWORD))(v10 + 280))(
                   dword_1047C96C,
                   v11,
                   "Decal textures",
                   1,
                   0);
        v12 = result;
        if ( result )
        {
          result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 168))(result);
          if ( !(_BYTE)result )
          {
            sub_10228630((int)v26, 4, ArgList, 16);
            sub_10228370(Buffer, 0x200u, "temp/%s", (char)ArgList);
            sub_10228370(v24, 0x200u, "materials/temp/%s.vtf", (char)ArgList);
            if ( (*(unsigned __int8 (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)(dword_10413188 + 4) + 40))(
                   dword_10413188 + 4,
                   v24,
                   0)
              || (sub_10228370(v23, 0x200u, "downloads/%s.dat", (char)ArgList),
                  result = (*(int (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)(dword_10413188 + 4) + 40))(
                             dword_10413188 + 4,
                             v23,
                             0),
                  (_BYTE)result)
              && (result = (*(int (__thiscall **)(int, char *, char *))(*(_DWORD *)dword_1041315C + 16))(
                             dword_1041315C,
                             v23,
                             v24),
                  (_BYTE)result) )
            {
              v28 = (*(int (__thiscall **)(int, char *, const char *, int))(*(_DWORD *)dword_1047C96C + 304))(
                      dword_1047C96C,
                      Buffer,
                      "Decal textures",
                      1);
              result = sub_1010CFB0(v28);
              if ( !(_BYTE)result )
              {
                v30 = 0;
                v13 = (int (__thiscall ***)(_DWORD))(*(int (__thiscall **)(int, const char *, char *, int, int, int, int))(*(_DWORD *)v12 + 44))(
                                                      v12,
                                                      "$basetexture",
                                                      &v30,
                                                      1,
                                                      a2,
                                                      a1,
                                                      a3);
                v14 = v13;
                if ( v30 && v13 )
                {
                  v15 = (**v13)(v13);
                  if ( v15 != v28 )
                  {
                    ((void (__thiscall *)(int (__thiscall ***)(_DWORD), int))(*v14)[14])(v14, v28);
                    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 212))(v12);
                  }
                }
                v29 = -1;
                v16 = *v9;
                v28 = *(_DWORD *)dword_10413164;
                v17 = (*(int (__thiscall **)(_DWORD *, int))(v16 + 40))(v9, a6);
                v18 = (*(int (__thiscall **)(_DWORD *, int))(*v9 + 36))(v9, v17);
                v19 = (*(int (__thiscall **)(_DWORD *, int))(v9[1] + 36))(v9 + 1, v18);
                return (*(int (__thiscall **)(int, int, int, int, int))(v28 + 12))(dword_10413164, v12, a7, a8, v19);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
