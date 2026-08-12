int __userpurge sub_1018AEB0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  int result; // eax
  int v5; // esi
  int v6; // ebx
  int (__thiscall *v7)(int, char *); // edx
  char v8[2048]; // [esp+8h] [ebp-A10h] BYREF
  char Source[260]; // [esp+808h] [ebp-210h] BYREF
  char Destination[268]; // [esp+90Ch] [ebp-10Ch] BYREF

  if ( sub_10227EE0(a3, ".htm") || sub_10227EE0(a3, ".html") )
  {
    sub_102282F0(Destination, "file://", 0x10Bu);
    (*(void (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_1047C968 + 128))(dword_1047C968, a3, Source, 260);
    sub_10228100((int)Destination, Source, 267, -1);
    return (*(int (__thiscall **)(int, char *))(*(_DWORD *)a1 + 1040))(a1, Destination);
  }
  else
  {
    result = (*(int (__thiscall **)(int, int, const char *, const char *))(*(_DWORD *)(dword_1047C968 + 4) + 8))(
               dword_1047C968 + 4,
               a1 + 695,
               "rb",
               "GAME");
    v5 = result;
    if ( result )
    {
      if ( (unsigned int)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)(dword_1047C968 + 4) + 28))(
                           dword_1047C968 + 4,
                           result,
                           a2) >= 0x7FF )
        v6 = 2047;
      else
        v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(dword_1047C968 + 4) + 28))(dword_1047C968 + 4, v5);
      (**(void (__thiscall ***)(int, char *, int))(dword_1047C968 + 4))(dword_1047C968 + 4, v8, v6);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)(dword_1047C968 + 4) + 12))(dword_1047C968 + 4, v5);
      v7 = *(int (__thiscall **)(int, char *))(*(_DWORD *)a1 + 1036);
      v8[v6] = 0;
      return v7(a1, v8);
    }
  }
  return result;
}
