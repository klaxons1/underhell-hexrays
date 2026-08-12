char *__usercall sub_1010B650@<eax>(char *a1@<eax>, size_t a2@<edi>, char *a3@<esi>)
{
  int v3; // eax
  char Destination[1024]; // [esp+0h] [ebp-400h] BYREF

  sub_102282F0(Destination, a1, 0x400u);
  if ( sub_10227C80(Destination, "models/", 7) )
    sub_10228370(a3, a2, "models/%s", (char)Destination);
  else
    sub_102282F0(a3, Destination, a2);
  v3 = strlen(a3);
  if ( v3 < 4 || _stricmp(&a3[v3 - 4], ".mdl") )
    sub_10228100((int)a3, ".mdl", a2, -1);
  return a3;
}
