int __usercall sub_100ECE60@<eax>(int a1@<edi>)
{
  int v1; // esi
  int v3; // [esp+4h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-Ch] BYREF
  int v5; // [esp+Ch] [ebp-8h] BYREF
  int v6; // [esp+10h] [ebp-4h] BYREF

  v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v1 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 8))(v1);
  (*(void (__thiscall **)(int, int *, int *, int *, int *))(*(_DWORD *)v1 + 156))(v1, &v3, &v4, &v5, &v6);
  sub_100ECDC0(a1, v1);
  (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 12))(v1);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 4))(v1);
}
