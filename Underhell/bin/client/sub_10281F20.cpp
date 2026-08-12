int __usercall sub_10281F20@<eax>(int a1@<ecx>, int a2@<ebp>)
{
  int v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // ebx
  _BYTE *v6; // eax
  int v7; // eax
  int v8; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // ebx
  int v15; // [esp-14h] [ebp-20h]
  int v16; // [esp-Ch] [ebp-18h]
  int v17; // [esp-8h] [ebp-14h]
  int v18; // [esp-4h] [ebp-10h]
  int v19; // [esp+0h] [ebp-Ch]

  v11 = dword_1047CA6C;
  v12 = *(_DWORD *)dword_1047CA6C;
  v13 = (**(int (__thiscall ***)(int, _DWORD))a1)(a1, 0);
  (*(void (__thiscall **)(int, int))(v12 + 164))(v11, v13);
  v14 = v19;
  v2 = *(_DWORD *)(a1 + 456);
  v3 = sub_10237C80((_DWORD *)(v2 + 104));
  if ( v3 )
    (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v3 + 120))(v3, 1, v17, v18);
  sub_102393F0((_DWORD *)(v2 + 104), 0);
  v4 = 1;
  if ( *(int *)(v2 + 88) > 1 )
  {
    v16 = v14;
    while ( 1 )
    {
      v5 = 4 * v4;
      if ( !sub_10237C80((_DWORD *)(4 * v4 + *(_DWORD *)(v2 + 76))) )
        goto LABEL_9;
      v6 = (_BYTE *)sub_10237C80((_DWORD *)(v5 + *(_DWORD *)(v2 + 76)));
      if ( sub_102370C0(v6) )
        break;
LABEL_12:
      if ( ++v4 >= *(_DWORD *)(v2 + 88) )
      {
        v14 = a2;
        goto LABEL_14;
      }
    }
    v7 = sub_10237C80((_DWORD *)(v5 + *(_DWORD *)(v2 + 76)));
    if ( v7 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 120))(v7, 1);
LABEL_9:
    if ( *(_DWORD *)(v2 + 88) - v4 - 1 > 0 )
      memcpy(
        (void *)(v5 + *(_DWORD *)(v2 + 76)),
        (const void *)(v5 + *(_DWORD *)(v2 + 76) + 4),
        4 * (*(_DWORD *)(v2 + 88) - v4 - 1));
    --*(_DWORD *)(v2 + 88);
    --v4;
    goto LABEL_12;
  }
LABEL_14:
  if ( *(_DWORD *)(v2 + 96) )
  {
    v8 = __RTDynamicCast(
           *(_DWORD *)(v2 + 112),
           0,
           (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
           (int)&vgui::EditablePanel `RTTI Type Descriptor',
           0);
    v15 = *(_DWORD *)(v2 + 100);
    if ( v8 )
    {
      (*(void (__thiscall **)(int, _DWORD, int, _DWORD, int))(*(_DWORD *)v8 + 768))(
        v8,
        *(_DWORD *)(v2 + 96),
        v15,
        0,
        v16);
      *(_DWORD *)(v2 + 128) = 0;
      return sub_1027F670((_DWORD **)v2, v14);
    }
    (*(void (__thiscall **)(int, _DWORD, int, _DWORD, int))(*(_DWORD *)v2 + 12))(v2, *(_DWORD *)(v2 + 96), v15, 0, v16);
  }
  *(_DWORD *)(v2 + 128) = 0;
  return sub_1027F670((_DWORD **)v2, v14);
}
