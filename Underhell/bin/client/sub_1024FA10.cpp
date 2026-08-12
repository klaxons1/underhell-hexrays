int __thiscall sub_1024FA10(int this, int a2, int a3)
{
  int result; // eax
  int v5; // ecx
  bool v6; // zf
  int v7; // edi
  int i; // esi
  int v9; // eax
  int v10; // [esp+28h] [ebp-10h] BYREF
  int v11; // [esp+2Ch] [ebp-Ch] BYREF
  int v12; // [esp+30h] [ebp-8h] BYREF
  int v13; // [esp+34h] [ebp-4h] BYREF

  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 204) + 900))(*(_DWORD *)(this + 204));
  if ( (_BYTE)result )
  {
    v5 = a3 + *(_DWORD *)(this + 224);
    v6 = *(_DWORD *)(this + 244) == 0;
    v11 = a2 + *(_DWORD *)(this + 220);
    v10 = v5;
    if ( !v6 )
    {
      (*(void (__thiscall **)(int, int *, int *, int *, int *))(*(_DWORD *)dword_1047CA6C + 348))(
        dword_1047CA6C,
        &v13,
        &v12,
        &a3,
        &a2);
      sub_1024CE50(this, v13, v12, a3, a2, &v11, &v10);
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA6C + 24))(dword_1047CA6C);
      for ( i = 0; i < (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 68))(dword_1047CA70, v7); ++i )
      {
        v9 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA70 + 72))(dword_1047CA70, v7, i);
        sub_1024F6C0((int (__thiscall ****)(_DWORD))this, v9, &v11, &v10);
      }
    }
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 204) + 960))(*(_DWORD *)(this + 204)) )
    {
      if ( v11 < 0 )
        v11 = 0;
      if ( v10 < 0 )
        v10 = 0;
      (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, &a3, &v12);
      sub_102361D0(*(int (__thiscall ****)(void *, int, int))(this + 204), (int)&a2, (int)&v13);
      if ( a2 + v11 > a3 )
        v11 = a3 - a2;
      if ( v13 + v10 > v12 )
        v10 = v12 - v13;
    }
    return sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 204), v11, v10);
  }
  return result;
}
