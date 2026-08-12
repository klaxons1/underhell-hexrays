int __thiscall sub_102807F0(_DWORD *this, char *Buffer, size_t BufferCount, int a4)
{
  int v5; // edi
  char *v6; // eax
  int result; // eax
  char Destination[28]; // [esp+10h] [ebp-1Ch] BYREF

  v5 = 1;
  v6 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 76))(a4);
  sub_102282F0(Destination, v6, 25);
  sub_10228370(Buffer, BufferCount, "%s%d", Destination, 1);
  for ( result = sub_10280270(this, Buffer); result; result = sub_10280270(this, Buffer) )
    sub_10228370(Buffer, BufferCount, "%s%d", Destination, ++v5);
  return result;
}
