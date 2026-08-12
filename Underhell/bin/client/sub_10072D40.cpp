char __thiscall sub_10072D40(_DWORD *this, int a2, int *a3)
{
  char *v4; // eax
  char *v5; // esi
  char *v6; // eax
  int v7; // eax
  int v8; // esi
  int v10; // [esp+Ch] [ebp-4h]
  int v11; // [esp+18h] [ebp+8h]

  v4 = (char *)sub_1022B4C0("resfile", (int)Locale);
  v5 = v4;
  if ( *v4 )
  {
    v6 = sub_10072CB0(v4);
    (*(void (__thiscall **)(_DWORD *, char *, _DWORD, char *))(*this + 768))(this, v5, 0, v6);
  }
  v10 = sub_1022A800("pixelswide", 240);
  v7 = sub_1022A800("pixelshigh", 160);
  v11 = v7;
  if ( v10 <= 0 || v7 <= 0 )
    return 0;
  if ( a3 )
  {
    if ( *a3 )
      this[63] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)*a3 + 8))(*a3);
    else
      this[63] = -1;
    v8 = __RTDynamicCast(
           *a3,
           0,
           (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
           (int)&C_VGuiScreen `RTTI Type Descriptor',
           0);
    if ( v8 )
      *(_BYTE *)(v8 + 1257) = sub_1022A800("acceptsinput", 1) != 0;
  }
  sub_10236200(0, 0, v10, v11);
  return 1;
}
