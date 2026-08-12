int __thiscall sub_101FBDE0(int this, void *Src, int a3)
{
  void *v5; // ebx
  int v6; // esi
  int v7; // eax
  int v8; // [esp+8h] [ebp-34h] BYREF
  int v9[12]; // [esp+Ch] [ebp-30h] BYREF

  if ( !*(_BYTE *)(this + 274) )
    return 0;
  v5 = Src;
  if ( *(_WORD *)sub_10230C80(&Src, Src) != 0xFFFF )
    return *(_DWORD *)sub_101FBB20((int *)(this + 144), v5);
  v6 = 0;
  v7 = (*(int (__thiscall **)(int, int, int *))(*(_DWORD *)a3 + 36))(a3, 16, &v8);
  if ( v7 )
  {
    sub_1022EE70(v7, v8, 8);
    if ( sub_100DDA40(900) )
      v6 = sub_101FE0F0(v9);
    else
      v6 = 0;
    sub_10008580(v9);
  }
  *(_DWORD *)sub_101FBB20((int *)(this + 144), v5) = v6;
  return v6;
}
