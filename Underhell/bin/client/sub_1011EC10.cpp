char __usercall sub_1011EC10@<al>(_DWORD *a1@<edi>)
{
  int v1; // ebx
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int v6; // eax
  int v7; // esi
  int v8; // [esp+8h] [ebp-10h] BYREF
  int v9; // [esp+Ch] [ebp-Ch] BYREF
  int v10; // [esp+10h] [ebp-8h] BYREF
  int v11; // [esp+14h] [ebp-4h] BYREF

  v1 = a1[3];
  v2 = 0;
  if ( v1 <= 0 )
    return 0;
  while ( 1 )
  {
    v3 = (***(int (__thiscall ****)(_DWORD))(*a1 + 4 * v2))(*(_DWORD *)(*a1 + 4 * v2));
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 20))(v3);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 20))(v4) )
      break;
    if ( ++v2 >= v1 )
      return 0;
  }
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v7 = v6;
  if ( v6 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
  (*(void (__thiscall **)(int, int *, int *, int *, int *))(*(_DWORD *)v7 + 156))(v7, &v8, &v9, &v10, &v11);
  sub_100ECDC0((int)a1, v7);
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 12))(v7);
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7);
  return 1;
}
