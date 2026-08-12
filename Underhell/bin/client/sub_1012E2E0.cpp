int __thiscall sub_1012E2E0(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int result; // eax
  char Buffer[32]; // [esp+4h] [ebp-20h] BYREF

  v3 = sub_1022A800("NewMouseReleased", 0);
  v4 = this[139];
  this[140] = v3;
  if ( v4 != v3 && v4 >= 0 && v3 >= 0 )
  {
    sub_10228370(Buffer, 0x20u, "switch %i %i", v4);
    (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)dword_1041315C + 24))(dword_1041315C, Buffer, 1);
    sub_10229140(&unk_10439368, 1);
  }
  result = -1;
  this[139] = -1;
  this[140] = -1;
  return result;
}
