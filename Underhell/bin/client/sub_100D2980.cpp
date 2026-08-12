void __thiscall sub_100D2980(int this)
{
  int v2; // esi
  int v3; // ecx
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int i; // [esp+4h] [ebp-8h]
  char v8; // [esp+8h] [ebp-4h]

  for ( i = 0; i < *(_DWORD *)(this + 40); ++i )
  {
    v2 = 4 * i;
    v3 = *(_DWORD *)(4 * i + *(_DWORD *)(this + 28));
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 36))(v3);
    (*(void (__thiscall **)(_DWORD, char))(**(_DWORD **)(v2 + *(_DWORD *)(this + 28)) + 44))(
      *(_DWORD *)(v2 + *(_DWORD *)(this + 28)),
      v8);
    v4 = __RTDynamicCast(
           *(_DWORD *)(*(_DWORD *)(this + 28) + 4 * i),
           0,
           (struct _s_RTTICompleteObjectLocator *)&CHudElement `RTTI Type Descriptor',
           (int)&vgui::Panel `RTTI Type Descriptor',
           0);
    v5 = v4;
    if ( v4 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 128))(v4) != v8 )
      (*(void (__thiscall **)(int, char))(*(_DWORD *)v5 + 124))(v5, v8);
    if ( v8 )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v2 + *(_DWORD *)(this + 28)) + 28))(*(_DWORD *)(v2 + *(_DWORD *)(this + 28)));
  }
  v6 = sub_10033760();
  if ( v6 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 1280))(v6);
  if ( *(float *)(this + 136) > 0.0 && *((float *)off_103DC81C + 3) > (double)*(float *)(this + 136) )
  {
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1041315C + 28))(dword_1041315C, "screenshot");
    *(float *)(this + 136) = -1.0;
  }
}
