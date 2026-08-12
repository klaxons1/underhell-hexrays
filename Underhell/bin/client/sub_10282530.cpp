int __userpurge sub_10282530@<eax>(
        int a1@<ecx>,
        int a2@<ebp>,
        const char *a3@<edi>,
        _DWORD *a4,
        int a5,
        _DWORD *a6,
        int a7,
        int a8)
{
  _DWORD *v9; // ebx
  int result; // eax
  _DWORD *v11; // ecx
  int v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // esi
  _DWORD *v16; // eax
  _DWORD *v17; // ebp
  const char *v18; // ebx
  int v19; // eax
  int v20; // edi
  void (__thiscall **v21)(int); // esi
  int (__thiscall ***v22)(_DWORD); // eax
  int v23; // ebp
  int v24; // edi
  int (__thiscall ***v25)(void *, int, int); // eax
  int v26; // eax
  int v27; // esi
  _DWORD *v28; // eax
  int v29; // edi
  const char *v30; // ebx
  int v31; // eax
  int (__thiscall **v32)(_DWORD *); // esi
  int v35; // [esp+8h] [ebp-1Ch]
  int v36; // [esp+10h] [ebp-14h]
  _DWORD *v37; // [esp+10h] [ebp-14h]
  int i; // [esp+18h] [ebp-Ch]
  _DWORD *v39; // [esp+1Ch] [ebp-8h]
  int v40; // [esp+20h] [ebp-4h]

  sub_1026C6F0(a4);
  v9 = (_DWORD *)(a1 + 976);
  v39 = (_DWORD *)(a1 + 976);
  result = sub_10237C80((_DWORD *)(a1 + 976));
  if ( result )
  {
    v11 = (_DWORD *)(a1 + 976);
    if ( *(_BYTE *)(a1 + 975) )
    {
      v12 = sub_10237C80(v11);
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 144))(v12);
      v13 = result;
      v36 = result;
      if ( result )
      {
        while ( 1 )
        {
          v14 = __RTDynamicCast(
                  v13,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
                  (int)&vgui::EditablePanel `RTTI Type Descriptor',
                  0);
          v15 = v14;
          if ( v14 && (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 788))(v14) )
          {
            v16 = (_DWORD *)sub_10229D00(32);
            if ( v16 )
              v17 = sub_10229D20(v16, (int)"Panel");
            else
              v17 = 0;
            sub_1022ACE0(v17, "ptr", v13);
            if ( (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)v15 + 72))(v15, a3, a2) )
              v18 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v15 + 72))(v15);
            else
              v18 = "unnamed";
            v19 = sub_10229D00(32);
            if ( v19 )
              v20 = sub_1022B0E0(v19, (int)"SetText", "text", v18);
            else
              v20 = 0;
            v21 = (void (__thiscall **)(int))(*a6 + 780);
            v35 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int))(*v39 + 144))(v39, v17, v35);
            a2 = v20;
            a3 = v18;
            (*v21)(a8);
            v13 = v36;
          }
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 144))(v13);
          v36 = result;
          if ( !result )
            break;
          v13 = result;
        }
      }
    }
    else
    {
      v22 = (int (__thiscall ***)(_DWORD))sub_10237C80(v11);
      result = sub_10237130(v22);
      v23 = result;
      v24 = 0;
      v40 = result;
      for ( i = 0; v24 < v23; i = v24 )
      {
        v25 = (int (__thiscall ***)(void *, int, int))sub_10237C80(v9);
        v26 = sub_10237150(v25, v24);
        result = __RTDynamicCast(
                   v26,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
                   (int)&vgui::EditablePanel `RTTI Type Descriptor',
                   0);
        v27 = result;
        if ( result )
        {
          result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 128))(result);
          if ( (_BYTE)result )
          {
            result = (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 788))(v27);
            if ( result )
            {
              v28 = (_DWORD *)sub_10229D00(32);
              v29 = 0;
              if ( v28 )
              {
                v37 = sub_10229D20(v28, (int)"Panel");
                sub_1022ACE0(v37, "ptr", v27);
              }
              else
              {
                sub_1022ACE0(0, "ptr", v27);
              }
              if ( (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)v27 + 72))(v27, a3, a2) )
                v30 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v27 + 72))(v27);
              else
                v30 = "unnamed";
              v31 = sub_10229D00(32);
              if ( v31 )
                v29 = sub_1022B0E0(v31, (int)"SetText", "text", v30);
              v32 = (int (__thiscall **)(_DWORD *))(*a6 + 780);
              v35 = (*(int (__thiscall **)(_DWORD *, int, int))(*v39 + 144))(v39, i, v35);
              a2 = v29;
              a3 = v30;
              result = (*v32)(a6);
              v9 = v39;
              v24 = i;
              v23 = v40;
            }
          }
        }
        ++v24;
      }
    }
  }
  return result;
}
