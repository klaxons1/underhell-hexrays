int __thiscall sub_10188540(int this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int (__thiscall *v6)(int, _DWORD, _DWORD); // eax
  int v8; // [esp+14h] [ebp+8h]

  v8 = sub_1022A800("current", 0);
  v3 = sub_1022A800("total", 0);
  v4 = sub_1022B4C0("msg", (int)Locale);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 24) + 772))(*(_DWORD *)(this + 24), v4);
  if ( v3 < 1 )
    v3 = 1;
  *(_DWORD *)(this + 12) = v3;
  v5 = v3;
  if ( v3 >= v8 )
    v5 = v8;
  if ( v5 >= 0 )
  {
    if ( v3 >= v8 )
      v3 = v8;
  }
  else
  {
    v3 = 0;
  }
  v6 = *(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)(this - 428) + 244);
  *(_DWORD *)(this + 16) = v3;
  return v6(this - 428, 0, 0);
}
