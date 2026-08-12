char __userpurge sub_101EA610@<al>(
        int a1@<ecx>,
        int a2@<ebp>,
        void (**a3)(_DWORD, const char *, ...)@<edi>,
        char *Source,
        int a5)
{
  int v6; // ebx
  const char *v7; // eax
  const char *v8; // eax
  const char *v9; // eax
  int v10; // eax
  int v11; // ecx
  char *v12; // eax
  const char *v13; // eax
  const char *v14; // eax
  const char *v15; // eax
  const char *v16; // eax
  int v17; // eax
  _DWORD **v18; // ecx
  const char *v19; // eax
  int v20; // eax
  _DWORD *v21; // ecx
  int (__thiscall **v22)(_DWORD *); // edi
  int v23; // eax

  v6 = a1 + 392;
  sub_102282F0((char *)(a1 + 392), Source, 0x80u);
  *(_DWORD *)(a1 + 164) = a5;
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)a5 + 4))(a5, 1) )
  {
    while ( strlen((const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164))) )
    {
      v7 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
      if ( !_stricmp(v7, "event") )
      {
        sub_101E8A20(a1, a2, (int)a3, 0, 0);
      }
      else
      {
        v8 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
        if ( !_stricmp(v8, "actor") )
        {
          sub_101E9F40(a1, a3);
        }
        else
        {
          v9 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
          v10 = _stricmp(v9, "mapname");
          v11 = *(_DWORD *)(a1 + 164);
          if ( v10 )
          {
            v13 = (const char *)(**(int (__thiscall ***)(int))v11)(v11);
            if ( !_stricmp(v13, "fps") )
            {
              sub_101E6110(a1);
            }
            else
            {
              v14 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
              if ( !_stricmp(v14, "snap") )
              {
                sub_101E6170(a1);
              }
              else
              {
                v15 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                if ( !_stricmp(v15, "ignorePhonemes") )
                {
                  sub_101E61C0(a1);
                }
                else
                {
                  v16 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
                  v17 = _stricmp(v16, "scene_ramp");
                  v18 = *(_DWORD ***)(a1 + 164);
                  if ( v17 )
                  {
                    v19 = (const char *)((int (__thiscall *)(_DWORD **))**v18)(v18);
                    v20 = _stricmp(v19, "scalesettings");
                    v21 = *(_DWORD **)(a1 + 164);
                    if ( v20 )
                    {
                      v22 = (int (__thiscall **)(_DWORD *))*v21;
                      v23 = (*(int (__thiscall **)(_DWORD *))*v21)(v21);
                      ((void (*)(_DWORD, const char *, ...))v22[3])(
                        *(_DWORD *)(a1 + 164),
                        "%s: unexpected token %s\n",
                        v6,
                        v23);
                      break;
                    }
                    sub_101EA3D0((int)v21, a1);
                  }
                  else
                  {
                    sub_101E7BA0((_DWORD *)(a1 + 300), v18, (double (__thiscall ***)(_DWORD))a1);
                  }
                }
              }
            }
          }
          else
          {
            a3 = (void (**)(_DWORD, const char *, ...))(a1 + 168);
            *(_BYTE *)(a1 + 168) = 0;
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 4))(v11, 1);
            v12 = (char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
            sub_102282F0((char *)(a1 + 168), v12, 0x80u);
          }
        }
      }
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 164) + 4))(*(_DWORD *)(a1 + 164), 1) )
        break;
    }
  }
  sub_101E7080((int *)a1);
  sub_101E6AD0((_DWORD *)a1);
  sub_101E6B30((_DWORD *)a1);
  sub_101E6520((_DWORD *)a1);
  if ( byte_10458DDC )
    *(float *)(a1 + 532) = sub_101E65F0(a1);
  return 1;
}
