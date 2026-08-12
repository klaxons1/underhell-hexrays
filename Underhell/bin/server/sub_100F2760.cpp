int __thiscall sub_100F2760(int this, const void *a2, int a3)
{
  int v4; // edi
  const char *v5; // ecx
  int v6; // eax
  int v7; // esi
  const char *v9; // [esp-4h] [ebp-1Ch]
  _DWORD v10[2]; // [esp+Ch] [ebp-Ch] BYREF
  int v11; // [esp+14h] [ebp-4h]

  v10[1] = 0;
  v11 = 0;
  v10[0] = a2;
  v4 = (unsigned __int16)sub_100EF460((_WORD *)(this + 1560), (int)v10);
  if ( v4 == 0xFFFF )
  {
    v5 = *(const char **)(this + 92);
    if ( !v5 )
      v5 = String;
    v9 = v5;
    v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(this + 24));
    Warning("Unable to find mapping for flexcontroller %i, settings %p on %i/%s\n", a3, a2, v6, v9);
    sub_100F2580((_WORD *)this, (int)a2);
    v4 = (unsigned __int16)sub_100EF460((_WORD *)(this + 1560), (int)v10);
    if ( v4 == 0xFFFF )
      Error("CBaseFlex::FlexControllerLocalToGlobal failed!\n");
  }
  v7 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 1564) + 20 * (unsigned __int16)v4 + 16) + 4 * a3);
  sub_10184660(v11);
  return v7;
}
