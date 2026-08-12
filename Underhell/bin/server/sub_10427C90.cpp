int *__userpurge sub_10427C90@<eax>(
        int a1@<ecx>,
        int a2@<edi>,
        int a3@<esi>,
        void *Src,
        int a5,
        _DWORD *a6,
        int *a7,
        int a8)
{
  _DWORD *v8; // ebx
  int *result; // eax
  _DWORD *v11; // eax
  const char *v12; // edi
  unsigned int v13; // esi
  char *v14; // esi
  int v15; // ebx
  int v16; // edi
  const char *v17; // eax
  _DWORD *v18; // ebx
  int (__thiscall **v19)(_DWORD *, int, int, int); // esi
  int v20; // eax
  int v21; // esi
  int v22; // eax
  unsigned __int16 v23; // di
  int v24; // edi
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  bool v28; // zf
  int *v29; // eax
  int v32; // [esp+8h] [ebp-Ch]
  int *v33; // [esp+Ch] [ebp-8h]
  int v34; // [esp+10h] [ebp-4h]
  _DWORD *Srca; // [esp+18h] [ebp+4h]

  v8 = a6;
  result = (int *)sub_1044A4D0(Src);
  if ( result )
  {
    if ( *result == 15 )
    {
      Srca = (_DWORD *)((char *)off_10689BA4 + 20 * a5);
      result = sub_10427BE0(result);
      v33 = result;
      v34 = result[3];
      v32 = 0;
      if ( v34 > 0 )
      {
        while ( 2 )
        {
          v11 = (_DWORD *)sub_1044A4D0("functionName");
          if ( v11 )
          {
            if ( *v11 == 5 )
              v12 = (const char *)sub_10430F10(v11[2]);
            else
              v12 = String;
          }
          else
          {
            v12 = String;
          }
          v13 = 0;
          while ( _stricmp(v12, (&off_10689BA8)[v13]) )
          {
            v13 += 2;
            if ( v13 >= 0x6A )
            {
              v14 = (char *)v12;
              goto LABEL_18;
            }
          }
          v14 = (char *)*(&off_10689BAC + v13);
          if ( v14 != v12 )
          {
            sub_1044A460(1);
            sub_1044A8B0("functionName");
            sub_1044CA50(v14);
            if ( v8 )
              sub_1044A460(0);
          }
LABEL_18:
          v15 = Srca[3];
          v16 = 0;
          if ( v15 <= 0 )
          {
LABEL_21:
            if ( Srca[3] )
              Warning("Didn't find particle function %s\n", v14);
          }
          else
          {
            while ( 1 )
            {
              v17 = (const char *)(***(int (__thiscall ****)(_DWORD))(*Srca + 4 * v16))(*(_DWORD *)(*Srca + 4 * v16));
              if ( !_stricmp(v14, v17) )
                break;
              if ( ++v16 >= v15 )
                goto LABEL_21;
            }
            v18 = *(_DWORD **)(*Srca + 4 * v16);
            v19 = (int (__thiscall **)(_DWORD *, int, int, int))(*v18 + 4);
            v20 = sub_1044A160(*(_DWORD *)(4 * v32 + *v33));
            v21 = (*v19)(v18, v20, a2, a3);
            v22 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*a6 + 4 * v16) + 8))(*(_DWORD *)(*a6 + 4 * v16));
            if ( v22 )
              sub_1044A530(v21, v22);
            a3 = a8;
            a2 = a1;
            (**(void (__thiscall ***)(int))v21)(v21);
            *(_DWORD *)(a1 + 20) |= (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 16))(v21);
            *(_QWORD *)(a1 + 24) |= ((__int64 (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v21 + 20))(v21);
            switch ( a5 )
            {
              case 0:
              case 1:
                *(_DWORD *)(a1 + 8) |= (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 12))(v21);
                *(_DWORD *)(a1 + 16) |= (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 24))(v21);
                break;
              case 2:
              case 3:
                *(_DWORD *)(a1 + 12) |= (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 12))(v21);
                break;
              default:
                break;
            }
            v23 = (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 24))(v21);
            if ( (((*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)v21 + 16))(v21) | v23) & 0x800) != 0 )
            {
              *(_DWORD *)(a1 + 16) |= 0x800u;
              *(_DWORD *)(a1 + 12) |= 0x800u;
            }
            v24 = a7[3];
            v25 = a7[1];
            if ( v24 + 1 > v25 )
              sub_1044A1C0(v24 - v25 + 1);
            ++a7[3];
            v26 = *a7;
            v27 = a7[3] - v24 - 1;
            v28 = a7[3] - v24 == 1;
            a7[4] = *a7;
            if ( v27 >= 0 && !v28 )
              memcpy((void *)(v26 + 4 * v24 + 4), (const void *)(v26 + 4 * v24), 4 * v27);
            v29 = (int *)(*a7 + 4 * v24);
            if ( v29 )
              *v29 = v21;
          }
          result = (int *)++v32;
          if ( v32 < v34 )
          {
            v8 = a6;
            continue;
          }
          break;
        }
      }
    }
  }
  return result;
}
