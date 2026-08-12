int __thiscall sub_10257670(int this)
{
  void (__stdcall *v2)(const char *, int, int); // eax
  int v3; // eax
  int v4; // ecx
  int v6; // [esp+28h] [ebp-20h]
  int v7; // [esp+30h] [ebp-18h] BYREF
  int v8; // [esp+34h] [ebp-14h] BYREF
  int v9; // [esp+38h] [ebp-10h] BYREF
  int v10; // [esp+3Ch] [ebp-Ch] BYREF
  int v11; // [esp+40h] [ebp-8h] BYREF
  int v12; // [esp+44h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &v12, &v9);
  v2 = *(void (__stdcall **)(const char *, int, int))(**(_DWORD **)(this + 380) + 892);
  if ( *(_DWORD *)(this + 304) == -1 )
    v2("&Cut", 0, v6);
  else
    v2("&Cut", 1, v6);
  (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(this + 380) + 892))(*(_DWORD *)(this + 380), "C&opy");
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 124))(*(_DWORD *)(this + 380), 1);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 380) + 48))(*(_DWORD *)(this + 380), 0);
  (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 380) + 244))(*(_DWORD *)(this + 380), 1, 0);
  sub_102361D0(*(int (__thiscall ****)(void *, int, int))(this + 380), (int)&v11, (int)&v8);
  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, &v10, &v7);
  v3 = v12;
  v4 = v9;
  if ( v10 - v11 <= v12 )
  {
    if ( v7 - v8 <= v9 )
      v4 = v9 - v8;
    v3 = v12 - v11;
  }
  else if ( v7 - v8 <= v9 )
  {
    v4 = v9 - v8;
  }
  sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 380), v3, v4);
  return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 380) + 48))(*(_DWORD *)(this + 380), 0);
}
