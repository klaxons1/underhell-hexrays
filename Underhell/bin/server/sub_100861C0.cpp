int __usercall sub_100861C0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<esi>)
{
  char v4; // al
  const char *v5; // eax
  const char *v6; // eax
  char Source[256]; // [esp+0h] [ebp-2C4h] BYREF
  char v10[256]; // [esp+100h] [ebp-1C4h] BYREF
  char Buffer[52]; // [esp+200h] [ebp-C4h] BYREF
  char ArgList[52]; // [esp+234h] [ebp-90h] BYREF
  char v13[52]; // [esp+268h] [ebp-5Ch] BYREF
  float v14[3]; // [esp+29Ch] [ebp-28h] BYREF
  int v15; // [esp+2A8h] [ebp-1Ch]
  int v16; // [esp+2ACh] [ebp-18h]
  float v17; // [esp+2B0h] [ebp-14h]
  float v18; // [esp+2B4h] [ebp-10h]
  float v19; // [esp+2B8h] [ebp-Ch]
  float v20; // [esp+2BCh] [ebp-8h]
  int v21; // [esp+2C0h] [ebp-4h]

  v14[0] = 0.80000001;
  v14[1] = 0.80000001;
  v14[2] = 0.0;
  v21 = 0;
  v17 = 0.0;
  v18 = 0.0;
  v19 = 1.0;
  v15 = -1;
  v16 = -1;
  v20 = 0.0;
  v4 = sub_100737F0(dword_10693634);
  sub_10429A00(Buffer, 0x32u, "  %s", v4);
  sub_10429A00(v10, 0xFFu, "Displaying:\n%s\n\n", (char)Buffer);
  if ( (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31D0 + 12))(dword_106B31D0, a3, a2) )
  {
    v5 = "Links";
    if ( !byte_1069362F )
      v5 = "Nodes";
    sub_10429A00(v13, 0x32u, "  %s (l)", (char)v5);
    v6 = "Air";
    if ( !byte_1069362E )
      v6 = "Ground";
    sub_10429A00(ArgList, 0x32u, "  %s (m)", (char)v6);
    sub_10429A00(Source, 0xFFu, "Editing:\n%s\n%s", (char)ArgList);
    sub_10429750((int)v10, Source, 255, -1);
    if ( (*(_DWORD *)(a1 + 8) & 0x10000000) != 0 )
      *(_WORD *)((char *)&v15 + 1) = 0;
  }
  return sub_1025F150(v14, v10);
}
