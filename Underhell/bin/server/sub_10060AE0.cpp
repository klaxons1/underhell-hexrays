int __thiscall sub_10060AE0(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int result; // eax
  int v7; // [esp-4h] [ebp-8h]
  int v8; // [esp-4h] [ebp-8h]

  v2 = sub_10078330(this);
  v3 = sub_1007DF30(v2);
  *(_DWORD *)(this + 160) = v3;
  if ( v3 == -1 )
    *(_DWORD *)(this + 160) = sub_10021B60(*(_DWORD **)(this + 4));
  v4 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 4) + 932))(
         *(_DWORD *)(this + 4),
         *(_DWORD *)(this + 160));
  v7 = *(_DWORD *)(this + 148);
  *(_DWORD *)(this + 164) = v4;
  sub_10078330(this);
  v5 = sub_1007DE50(v7);
  v8 = *(_DWORD *)(this + 148);
  *(_DWORD *)(this + 168) = v5;
  result = sub_100607F0(this, v8);
  *(_DWORD *)(this + 168) = result;
  return result;
}
