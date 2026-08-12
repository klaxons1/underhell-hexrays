int __usercall sub_101689E0@<eax>(int a1@<edi>, void *ArgList)
{
  int result; // eax
  int v3; // esi
  void *v4; // ebx
  int v5; // eax
  char Buffer[1024]; // [esp+10h] [ebp-400h] BYREF

  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578);
    if ( (_BYTE)result )
    {
      if ( *(int *)(a1 + 48) >= 0 )
      {
        if ( sub_10229D00(32) )
          v3 = sub_10229D20("TempEntity");
        else
          v3 = 0;
        v4 = (void *)(*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_10436258 + 28))(*(__int16 *)(a1 + 72));
        sub_10228370(Buffer, 0x400u, "TE_DispatchEffect %s %s", (char)ArgList);
        sub_1022ACA0("te", 2);
        sub_1022ABA0("name", Buffer);
        sub_1022ACC0("time", *((float *)off_103DC81C + 3));
        sub_1022ACC0("originx", *(float *)a1);
        sub_1022ACC0("originy", *(float *)(a1 + 4));
        sub_1022ACC0("originz", *(float *)(a1 + 8));
        sub_1022ACC0("startx", *(float *)(a1 + 12));
        sub_1022ACC0("starty", *(float *)(a1 + 16));
        sub_1022ACC0("startz", *(float *)(a1 + 20));
        sub_1022ACC0("normalx", *(float *)(a1 + 24));
        sub_1022ACC0("normaly", *(float *)(a1 + 28));
        sub_1022ACC0("normalz", *(float *)(a1 + 32));
        sub_1022ACC0("anglesx", *(float *)(a1 + 36));
        sub_1022ACC0("anglesy", *(float *)(a1 + 40));
        sub_1022ACC0("anglesz", *(float *)(a1 + 44));
        sub_1022ACA0("flags", *(_DWORD *)(a1 + 48));
        sub_1022ACC0("scale", *(float *)(a1 + 56));
        sub_1022ACC0("magnitude", *(float *)(a1 + 60));
        sub_1022ACC0("radius", *(float *)(a1 + 64));
        sub_1022ABA0("surfaceprop", v4);
        sub_1022ACA0("color", *(unsigned __int8 *)(a1 + 88));
        sub_1022ACA0("damagetype", *(_DWORD *)(a1 + 80));
        sub_1022ACA0("hitbox", *(_DWORD *)(a1 + 84));
        sub_1022ABA0("effectname", ArgList);
        sub_1022ACA0("attachmentindex", *(_DWORD *)(a1 + 68));
        v5 = sub_1009B7F0((int *)a1);
        sub_1022ACE0("entindex", v5);
        sub_101BC9C0(0, v3);
        return sub_1022AF00(v3);
      }
    }
  }
  return result;
}
