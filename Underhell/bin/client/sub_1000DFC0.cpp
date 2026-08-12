// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_1000DFC0@<eax>(int a1@<ecx>, int a2@<esi>, int a3, float a4)
{
  double ArgList; // [esp+0h] [ebp-10Ch]
  char Buffer[256]; // [esp+Ch] [ebp-100h] BYREF

  ArgList = a4;
  sub_10228370(Buffer, 0x100u, "%f", SLOBYTE(ArgList));
  return (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)a1 + 152))(a1, a3, Buffer, a2);
}
