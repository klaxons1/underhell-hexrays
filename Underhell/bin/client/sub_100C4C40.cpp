int __thiscall sub_100C4C40(int this, int a2, int a3)
{
  char *v4; // eax
  int v5; // ebx
  int v6; // ebx
  int v7; // eax
  int v9; // esi
  int v10; // eax
  int v11; // edx
  _DWORD *v12; // eax
  char String[256]; // [esp+Ch] [ebp-134h] BYREF
  _DWORD v14[3]; // [esp+10Ch] [ebp-34h] BYREF
  _DWORD v15[5]; // [esp+118h] [ebp-28h] BYREF
  _DWORD v16[3]; // [esp+12Ch] [ebp-14h] BYREF
  char *Source; // [esp+138h] [ebp-8h]
  int v18; // [esp+13Ch] [ebp-4h]

  v4 = (char *)sub_10231190(*(_DWORD *)(this + 20) + 84 * a2 + 80);
  v5 = *(_DWORD *)(this + 20);
  Source = v4;
  v6 = 84 * a2 + v5;
  v14[0] = a2;
  v14[1] = a3;
  v7 = (unsigned __int16)sub_100C1920((_WORD *)v6, (int)v14);
  v18 = v7;
  if ( (unsigned __int16)v7 == 0xFFFF )
  {
    sub_102282F0(String, Source, 0x100u);
    sub_10228240(String, 92);
    _strlwr(String);
    v9 = *(_DWORD *)(this + 20) + 84 * a2;
    v10 = *(_DWORD *)(v9 + 68);
    v15[0] = String;
    v11 = *(_DWORD *)(v9 + 76) + a3 * v10;
    v15[4] = v10;
    v15[2] = a3;
    v15[3] = v11;
    v15[1] = a2;
    v12 = sub_100C0010((_DWORD **)(this + 12), v15, 0);
    v16[1] = a3;
    v16[0] = a2;
    v16[2] = v12;
    return (unsigned __int16)sub_100C4AF0(v6, (int)v16);
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 16) + 84))(
      *(_DWORD *)(this + 16),
      *(_DWORD *)(*(_DWORD *)(v6 + 4) + 20 * (unsigned __int16)v7 + 16));
    return v18;
  }
}
