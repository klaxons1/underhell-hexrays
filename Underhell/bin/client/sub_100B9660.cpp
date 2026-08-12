int __userpurge sub_100B9660@<eax>(void *a1@<ecx>, int a2@<ebx>, int a3)
{
  int result; // eax
  _DWORD *v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // ebx

  result = __RTDynamicCast(
             a3,
             0,
             (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
             (int)&CHudChatFilterCheckButton `RTTI Type Descriptor',
             0);
  v5 = (_DWORD *)result;
  if ( result )
  {
    v6 = (*(int (__thiscall **)(void *))(*(_DWORD *)a1 + 144))(a1);
    result = __RTDynamicCast(
               v6,
               0,
               (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
               (int)&CBaseHudChat `RTTI Type Descriptor',
               0);
    if ( result )
    {
      result = (*(int (__thiscall **)(void *))(*(_DWORD *)a1 + 128))(a1);
      if ( (_BYTE)result )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*v5 + 932))(v5, a2) )
        {
          v7 = sub_100B8BF0(a1);
          v8 = v5[100];
          v9 = v8 | (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 92))(v7);
        }
        else
        {
          v10 = sub_100B8BF0(a1);
          v11 = v5[100];
          v9 = ~v11 & (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 92))(v10);
        }
        *(_DWORD *)(sub_100B8BF0(a1) + 344) = v9;
        return sub_10229140(&unk_10430050, v9);
      }
    }
  }
  return result;
}
