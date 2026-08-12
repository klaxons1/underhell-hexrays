int __thiscall sub_10040EB0(int this, const void *a2, int a3)
{
  int v4; // edi
  char *v5; // eax
  int v6; // eax
  int v7; // esi
  const char *v9; // [esp-4h] [ebp-1Ch]
  _DWORD v10[2]; // [esp+Ch] [ebp-Ch] BYREF
  int v11; // [esp+14h] [ebp-4h]

  v10[1] = 0;
  v11 = 0;
  v10[0] = a2;
  v4 = (unsigned __int16)sub_1003FC40((_WORD *)(this + 2592), (int)v10);
  if ( v4 == 0xFFFF )
  {
    v5 = sub_10034D90((void *)this);
    v6 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)(this + 8) + 36))(this + 8, v5);
    Warning("Unable to find mapping for flexcontroller %i, settings %p on %i/%s\n", a3, a2, v6, v9);
    sub_10040D20((_WORD *)this, (int)a2);
    LOWORD(v4) = sub_1003FC40((_WORD *)(this + 2592), (int)v10);
    if ( (unsigned __int16)v4 == 0xFFFF )
      Error("CBaseFlex::FlexControllerLocalToGlobal failed!\n");
  }
  v7 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 2596) + 20 * (unsigned __int16)v4 + 16) + 4 * a3);
  sub_10034930(v11);
  return v7;
}
