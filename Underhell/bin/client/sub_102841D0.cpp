_BYTE *__userpurge sub_102841D0@<eax>(_DWORD *a1@<ecx>, _DWORD *a2@<ebp>, int a3@<esi>, _BYTE *a4, _BYTE *a5)
{
  _BYTE *result; // eax
  _BYTE *v7; // edi
  _DWORD *v8; // ecx
  int v9; // ecx
  char *v10; // esi
  int *v11; // ebp
  int *v12; // esi
  int *v13; // eax
  int v14; // eax
  int v15; // eax
  char *v16; // eax
  int (__thiscall **v17)(void *, int, int); // edx
  int v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // edi
  bool v21; // zf
  void (__stdcall *v22)(int); // eax
  void (__cdecl **v23)(int); // esi
  int v24; // eax
  _DWORD *v26; // [esp+70h] [ebp-78h]
  char *v27[2]; // [esp+8Ch] [ebp-5Ch] BYREF
  int *v28; // [esp+94h] [ebp-54h]
  char *Source; // [esp+98h] [ebp-50h]
  _DWORD v30[4]; // [esp+9Ch] [ebp-4Ch] BYREF
  char Destination[60]; // [esp+ACh] [ebp-3Ch] BYREF

  result = (_BYTE *)a1[113];
  v7 = a4;
  if ( result == a4 )
  {
    if ( result )
      return (_BYTE *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 1032))(a1, a1[113]);
  }
  else
  {
    v8 = (_DWORD *)a1[118];
    a1[113] = a4;
    sub_10283690(v8, (int)a1, a3);
    sub_10286D70(*(_DWORD *)(a1[118] + 24));
    v9 = a1[113];
    if ( v9 )
    {
      v27[0] = (char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 344))(v9, a3);
      v10 = sub_10281BB0(v27);
      if ( *v10 )
      {
        do
        {
          v11 = 0;
          if ( _stricmp(v10, "int")
            && _stricmp(v10, "alignment")
            && _stricmp(v10, "autoresize")
            && _stricmp(v10, "corner") )
          {
            _stricmp(v10, "localize");
          }
          v12 = (int *)sub_10281BB0(v27);
          v28 = v12;
          v13 = (int *)sub_100DDA40(284);
          if ( v13 )
            v11 = sub_1024B100(v13, (int (__thiscall ***)(_DWORD))a1, 0, (const char *)v12);
          sub_102361A0((int (__thiscall ***)(void *, int, int))v11, 96, 18);
          (*(void (__thiscall **)(int *, int, _DWORD *))(*v11 + 788))(v11, 5, a2);
          v19 = (_DWORD *)sub_100DDA40(948);
          if ( v19 )
          {
            v20 = sub_102822B0(v19, (int (__thiscall ***)(_DWORD))a1, 0);
            if ( v20 )
            {
              sub_10237520((int (__thiscall ***)(void *, int *, _BYTE *))v20, (_BYTE *)0x12);
              (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD *))(*v20 + 156))(v20, a1, v26);
              (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v20 + 172))(v20, a1);
              (*(void (__thiscall **)(_DWORD *, char *))(*v20 + 248))(v20, v27[0]++);
              v26 = v20;
              (*(void (__thiscall **)(int *))(*v11 + 828))(v11);
            }
          }
          else
          {
            v20 = 0;
          }
          v27[0] = (char *)dword_1047CA7C;
          v28 = (int *)(*(_DWORD *)dword_1047CA7C + 32);
          v14 = (*(int (__thiscall **)(_DWORD *))(*a1 + 80))(a1);
          v15 = ((int (__thiscall *)(char *, int))*v28)(v27[0], v14);
          v16 = (char *)(*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v15 + 12))(
                          v15,
                          "DefaultVerySmall",
                          0);
          v17 = (int (__thiscall **)(void *, int, int))*v11;
          v27[0] = v16;
          ((void (__thiscall *)(int *, char *))v17[204])(v11, v16);
          if ( v20 )
            (*(void (__thiscall **)(_DWORD *, char *))(*v20 + 912))(v20, v27[0]);
          v28 = (int *)a1[118];
          v30[0] = v11;
          v30[1] = v20;
          sub_102282F0(Destination, Source, 64);
          v18 = v28[3];
          v30[2] = 0;
          v30[3] = 0;
          sub_10283930(v28, v18, v30);
          if ( v20 )
            a2 = v20;
          else
            a2 = 0;
          (*(void (__stdcall **)(int *))(**(_DWORD **)(a1[118] + 24) + 768))(v11);
          v10 = sub_10281BB0(v27);
        }
        while ( *v10 );
        v7 = a5;
      }
      v21 = !sub_102370C0(v7);
      v22 = *(void (__stdcall **)(int))(*(_DWORD *)a1[122] + 200);
      if ( v21 )
        v22(0);
      else
        v22(1);
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 1032))(a1, a1[113]);
      if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[114] + 40))(a1[114]) )
      {
        v23 = (void (__cdecl **)(int))(*(_DWORD *)a1[116] + 768);
        v24 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[114] + 40))(a1[114]);
        (*v23)(v24);
      }
      else
      {
        (*(void (__cdecl **)(const char *))(*(_DWORD *)a1[116] + 768))("[ no resource file associated with dialog ]");
      }
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)a1[120] + 200))(a1[120], 0);
      (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*a1 + 244))(a1, 0, 0);
      return (_BYTE *)(*(int (__thiscall **)(_DWORD *))(*a1 + 16))(a1);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)a1[115] + 772))(a1[115], "[nothing currently selected]");
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)a1[115] + 812))(a1[115], 1);
      return (_BYTE *)sub_10283690((_DWORD *)a1[118], (int)a1, a3);
    }
  }
  return result;
}
