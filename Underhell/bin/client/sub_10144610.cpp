char __stdcall sub_10144610(_DWORD *a1)
{
  _DWORD *v1; // edi
  int v2; // ebx
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v7; // eax
  int v8; // esi
  int v9; // [esp+Ch] [ebp-Ch] BYREF
  int v10; // [esp+10h] [ebp-8h] BYREF
  int v11; // [esp+14h] [ebp-4h] BYREF

  v1 = a1;
  v2 = a1[3];
  v3 = 0;
  if ( v2 <= 0 )
    return 0;
  while ( 1 )
  {
    v4 = (***(int (__thiscall ****)(_DWORD))(*v1 + 4 * v3))(*(_DWORD *)(*v1 + 4 * v3));
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 20))(v4);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5) )
      break;
    if ( ++v3 >= v2 )
      return 0;
  }
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v8 = v7;
  if ( v7 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
  (*(void (__thiscall **)(int, int *, int *, int *, _DWORD **))(*(_DWORD *)v8 + 156))(v8, &v9, &v10, &v11, &a1);
  sub_100ECDC0((int)v1, v8);
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 12))(v8);
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8);
  return 1;
}
