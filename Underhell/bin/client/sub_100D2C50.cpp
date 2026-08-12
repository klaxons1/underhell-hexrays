bool __thiscall sub_100D2C50(int *this)
{
  int v2; // eax
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  bool result; // al

  v2 = sub_100422D0();
  result = v2
        && (v3 = *(_DWORD *)(v2 + 4128), v3 != -1)
        && (v4 = (int *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(v2 + 4128) & 0xFFF) + 4), v5 = v3 >> 12, v4[1] == v5)
        && *v4
        && v4[1] == v5
        && (v6 = *v4) != 0
        && (v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 332))(v6)) != 0
        && ((v8 = __RTDynamicCast(
                    v7,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&IClientVehicle `RTTI Type Descriptor',
                    (int)&C_PropVehicleDriveable `RTTI Type Descriptor',
                    0)) == 0
         || !*(_BYTE *)(v8 + 2028) && !*(_BYTE *)(v8 + 2029))
        && sub_100B68D0(this);
  return result;
}
